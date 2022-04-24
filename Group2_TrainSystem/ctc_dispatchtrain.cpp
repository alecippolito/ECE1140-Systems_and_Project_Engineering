#include "ctc_dispatchtrain.h"
#include "ui_ctc_dispatchtrain.h"

#include <QMessageBox>
#include <QDebug>
#include <QtMath>

CTC_DispatchTrain::CTC_DispatchTrain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_DispatchTrain)
{
    ui->setupUi(this);

    //initialize dispatch Train UI
    standardSpeed = 10; //40 Km/Hr
    ui->DepartureCheck->setChecked(true);
    ui->ArrivalCheck->setChecked(true);
    currentDay = 0;
    currentSeconds = 0;
    departTimeMinute = 0;

}

CTC_DispatchTrain::~CTC_DispatchTrain()
{
    delete ui;
}

void CTC_DispatchTrain::receiveStationData(bool redline_temp, QVector<double> distances, QVector<QString> names, QVector<int> authority, QVector<QVector<bool>> authorityVectors)
{
    //copy the received data into the the UI's internal vectors, and show what line we are using
    redline = redline_temp;
    stationNames = names;
    stationDistances = distances;
    stationAuthorities = authority;
    stationAuthorityVectors = authorityVectors;

    //add the names to the list widget in order for the user to select one of them
    for (unsigned int i = 0; i < stationNames.size(); i++)
    {
        ui->StationList->addItem(stationNames[i]);
    }
    ui->StationList->setCurrentRow(0);
}

void CTC_DispatchTrain::on_DepartureCheck_stateChanged(int arg1)
{
    //if arg1 = 0, unchecked. If arg1 = 2, checked
    if (arg1 == 0)
    {
        ui->DepartDate->setVisible(false);
        ui->DepartTime->setVisible(false);
        if (ui->ArrivalCheck->isChecked() == true)
        {
            ui->LeaveNowLabel->setText("Train will leave now");
        }
        else
        {
            ui->LeaveNowLabel->setText("");
            ui->LeaveAtSSLabel->setText("");
        }
    }
    else
    {
        ui->DepartDate->setVisible(true);
        ui->DepartTime->setVisible(true);
        ui->LeaveNowLabel->setText("");

        if (ui->ArrivalCheck->isChecked() == false)
        {
            ui->LeaveAtSSLabel->setText("Train will leave at " + QString::number(standardSpeed) + " km/hr");
        }
    }
}


void CTC_DispatchTrain::on_ArrivalCheck_stateChanged(int arg1)
{
    //if arg1 = 0, unchecked. If arg1 = 2, checked
    if (arg1 == 0)
    {
        ui->ArriveDate->setVisible(false);
        ui->ArrivalTime->setVisible(false);
        if (ui->DepartureCheck->isChecked() == true)
        {
            ui->LeaveAtSSLabel->setText("Train will leave at " + QString::number(standardSpeed) + " km/hr");
        }
        else
        {
            ui->LeaveNowLabel->setText("");
            ui->LeaveAtSSLabel->setText("");
        }
    }
    else
    {
        ui->ArriveDate->setVisible(true);
        ui->ArrivalTime->setVisible(true);
        ui->LeaveAtSSLabel->setText("");

        if (ui->DepartureCheck->isChecked() == false)
        {
            ui->LeaveNowLabel->setText("Train will leave at " + QString::number(standardSpeed) + " km/hr");
        }
    }
}

//initialize the timing options with the current system time
void CTC_DispatchTrain::updateTimeDisplay(int day_temp, int seconds_temp)
{
    //initialize the time options to around the current system time
    ui->ArriveDate->setCurrentIndex(day_temp);
    ui->DepartDate->setCurrentIndex(day_temp);

    ui->DepartTime->setTime(QTime::fromMSecsSinceStartOfDay(seconds_temp*1000));
    QTime temptime = QTime::fromMSecsSinceStartOfDay(((seconds_temp+3600)%86400)*1000);
    ui->ArrivalTime->setTime(temptime);
    if (temptime < ui->DepartTime->time())
    {
        ui->ArriveDate->setCurrentIndex((ui->DepartDate->currentIndex()+1)%8);
    }
}

void CTC_DispatchTrain::receiveSystemTime(int day_temp, int seconds_temp)
{
    currentDay = day_temp;
    currentSeconds = seconds_temp;
}


void CTC_DispatchTrain::on_DispatchButton_clicked()
{
    //Failure states for Dispatching from this window:
    // 1). CTC is in automatic mode
    // 2). Both the departure time and the arrival time buttons are unchecked
    // 3). Time is the same

    QMessageBox *error = new QMessageBox();

    emit requestCTCMode();
    if (manualMode == false)
    {
        error->setText("Error: CTC is currently in automatic mode!\nSwitch to manual mode in the main window.");
        error->exec();
    }
    else if (ui->DepartureCheck->isChecked() == false && ui->ArrivalCheck->isChecked() == false)
    {
        error->setText("Error: You must select either an arrival time or an arrival time!");
        error->exec();
    }
    else if (ui->DepartDate->currentIndex() == ui->ArriveDate->currentIndex() && ui->ArrivalTime->time() == ui->DepartTime->time())
    {
        error->setText("Error: Entered arrival and departure times are exactly the same!");
        error->exec();
    }
    else
    {
        //passed the tests
        //calculate the authority and suggested speed and send that data back into the main window
        int auth_temp = returnAuthority();
        double speed_temp = returnSuggestedSpeed();
        QVector<bool> authVector_temp = returnAuthorityVector();
        bool redline = (stationNames[0] == "Shadyside" ? true : false);

        //test for unrealistic speed calculations
        if (speed_temp > 0 && speed_temp <= 70)
        {
            //emit different signals based on what needs to happen
            if (ui->DepartureCheck->isChecked() == false && ui->ArrivalCheck->isChecked() == true)
            {
                emit dispatchImmediate(redline,auth_temp,speed_temp,authVector_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),stationNames[ui->StationList->currentRow()]);
            }
            else if (ui->DepartureCheck->isChecked() == true && ui->ArrivalCheck->isChecked() == false)
            {
                //need to calculate our own custom arrival date and time

                //If the user-entered time matches the system time, train must leave now, else enter data into temporary schedule
                emit requestSystemTime();
                if (departTimeMinute == (currentDay*86400 + currentSeconds)/60)
                {
                    emit dispatchImmediate(redline,auth_temp,speed_temp,authVector_temp,qFloor(arriveTimeMinute/1440),QTime::fromMSecsSinceStartOfDay((arriveTimeMinute%1440)*60000),stationNames[ui->StationList->currentRow()]);
                }
                else
                {
                    emit dispatchStandby(redline,auth_temp,speed_temp,departTimeMinute,authVector_temp,qFloor(arriveTimeMinute/1440),QTime::fromMSecsSinceStartOfDay((arriveTimeMinute%1440)*60000),stationNames[ui->StationList->currentRow()]);
                }
            }
            else
            {
                //If the user-entered time matches the system time, train must leave now, else enter data into temporary schedule
                emit requestSystemTime();
                if (departTimeMinute == (currentDay*86400 + currentSeconds)/60)
                {
                    emit dispatchImmediate(redline,auth_temp,speed_temp,authVector_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),stationNames[ui->StationList->currentRow()]);
                }
                else
                {
                    emit dispatchStandby(redline,auth_temp,speed_temp,departTimeMinute,authVector_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),stationNames[ui->StationList->currentRow()]);
                }
            }
        }
        else
        {
            error->setText("Unrealistic speed calculation! Should be\ngreater than 0 and less than 70.\nYour speed = " + QString::number(speed_temp) + " Km/Hr");
            error->exec();
        }
        hide();
    }

    delete error;
}

int CTC_DispatchTrain::returnAuthority()
{
    return stationAuthorities[ui->StationList->currentRow()];
}

QVector<bool> CTC_DispatchTrain::returnAuthorityVector()
{
    return stationAuthorityVectors[ui->StationList->currentRow()];
}

double CTC_DispatchTrain::returnSuggestedSpeed()
{
    //retrieve the minimum distance from the yard to the station
    double distance = stationDistances[ui->StationList->currentRow()];

    //calculate the amount of seconds the train must travel- defined by dispatcher

    //different protocols depending on what boxes are checked
    double totalTime = 0;
    int arrivalTimeSeconds = (ui->ArriveDate->currentIndex()*86400 + ui->ArrivalTime->time().msecsSinceStartOfDay()/1000);
    int departureTimeSeconds = (ui->DepartDate->currentIndex()*86400 + ui->DepartTime->time().msecsSinceStartOfDay()/1000);
    departTimeMinute = departureTimeSeconds/60;
    arriveTimeMinute = arrivalTimeSeconds/60;
    if (ui->DepartureCheck->isChecked() == true && ui->ArrivalCheck->isChecked() == true)
    {
        totalTime = arrivalTimeSeconds + (arrivalTimeSeconds < departureTimeSeconds ? 604800 : 0) - departureTimeSeconds;
    }
    else if (ui->DepartureCheck->isChecked() == true && ui->ArrivalCheck->isChecked() == false)
    {
        //leave station at standard speed

        //IMPORTANT FUNCTION: UPDATE THE ARRIVAL TIME
        arriveTimeMinute = departTimeMinute + qFloor(((distance/1000)/standardSpeed)*60)%10080;
        return standardSpeed;
    }
    else if (ui->DepartureCheck->isChecked() == false && ui->ArrivalCheck->isChecked() == true)
    {
        //train will leave at currentTime: right now
        emit requestSystemTime();
        totalTime = arrivalTimeSeconds + (arrivalTimeSeconds < ((currentDay*86400 + currentSeconds) ? 604800 : 0)) - (currentDay*86400 + currentSeconds);
    }
    else
    {
        return 0;
    }

    return (distance/1000)/(totalTime/3600);   //return the Km/Hr
}


void CTC_DispatchTrain::on_ScheduleButton_clicked()
{
    //Failure states for Dispatching from this window:
    // 1). Both the departure time and the arrival time buttons are unchecked
    // 2). Time is the same

    QMessageBox *error = new QMessageBox();

    if (ui->DepartureCheck->isChecked() == false && ui->ArrivalCheck->isChecked() == false)
    {
        error->setText("Error: You must select either an arrival time or an arrival time!");
        error->exec();
    }
    else if (ui->DepartureCheck->isChecked() == false && ui->ArrivalCheck->isChecked() == true)
    {
        error->setText("Error: Scheduling system needs a specified departure time!\nCheck the Departure Time box");
        error->exec();
    }
    else if (ui->DepartureCheck->isChecked() == true && ui->ArrivalCheck->isChecked() == false)
    {
        error->setText("Error: Scheduling system needs a specified arrival time!\nCheck the Arrival Time box");
        error->exec();
    }
    else if (ui->DepartDate->currentIndex() == ui->ArriveDate->currentIndex() && ui->ArrivalTime->time() == ui->DepartTime->time())
    {
        error->setText("Error: Entered arrival and departure times are exactly the same!");
        error->exec();
    }
    else
    {
        //passed the tests
        //calculate the authority and suggested speed and send that data back into the main window
        double speed_temp = returnSuggestedSpeed();
        QVector<bool> authVector_temp = returnAuthorityVector();
        bool redline = (stationNames[0] == "Shadyside" ? true : false);


        //test for unrealistic speed calculations
        if (speed_temp > 0 && speed_temp <= 70)
        {
            emit dispatchSchedule(redline,departTimeMinute,speed_temp,authVector_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),ui->DepartDate->currentIndex(),ui->DepartTime->time(),stationNames[ui->StationList->currentRow()]);
        }
        else
        {
            error->setText("Unrealistic speed calculation! Should be\ngreater than 0 and less than 70.\nYour speed = " + QString::number(speed_temp) + " Km/Hr");
            error->exec();
        }
        hide();
    }

    delete error;
}

void CTC_DispatchTrain::receiveCTCMode(bool mode)
{
    manualMode = mode;
}

