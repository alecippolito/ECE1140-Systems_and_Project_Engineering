#include "ctc_dispatchtrain.h"
#include "ui_ctc_dispatchtrain.h"

#include <QMessageBox>
#include <QDebug>
#include <QtMath>

//Constructor for Dispatch UI
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

    //define the speed vector bases

}

//Destructor for Dispatch UI
CTC_DispatchTrain::~CTC_DispatchTrain()
{
    delete ui;
}

//internal slot - runs right after this UI is created by a signal from the main window
//inputs - which line the train is in, the distances to the stations in that line, and the names of the stations in that line
//no outputs
//initializes the internal variables of this class with the inputs in order for the rest of the UI to work
void CTC_DispatchTrain::receiveStationData(bool redline_temp, QVector<double> distances, QVector<QString> names)
{
    //copy the received data into the the UI's internal vectors, and show what line we are using
    redline = redline_temp;
    stationNames = names;
    stationDistances = distances;
    //speedVectorBase = speedBase;

    //add the names to the list widget in order for the user to select one of them
    for (unsigned int i = 0; i < stationNames.size(); i++)
    {
        ui->StationList->addItem(stationNames[i]);
    }
    ui->StationList->setCurrentRow(0);
}

//internal slot - runs when the user has selected/deselected "Departure Time"
//inputs - integer value specifying the state of the check box
//no outputs
//if "Departure Time" is selected, then the UI will show that as an option
// if "Departure Time" is deselected, the the UI will hide that option
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

//internal slot - runs when the user has selected/deselected "Arrival Time"
//inputs - integer value specifying the state of the check box
//no outputs
//if "Arrival Time" is selected, then the UI will show that as an option
// if "arrival Time" is deselected, the the UI will hide that option
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

//internal slot - runs when the main window sends an initial time value
//inputs - day of the week, seconds since 12:00am monday
//no outputs
//initializes the timing options with the current system time. Does not continously update, since this function is only
// run when the UI is first created
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

//internal slot - runs after the main window sends the signal containing the time
//inputs - day of the week, seconds since 12:00am Monday
//no outputs
//used for the speed calculation - if the "Departure Time" button is deselected, meaning that the train will leave right now.
// The train will use these values as its departure time
void CTC_DispatchTrain::receiveSystemTime(int day_temp, int seconds_temp)
{
    currentDay = day_temp;
    currentSeconds = seconds_temp;
}

//internal slot - runs when the user selects the "Dispatch" button
//no inputs/outputs
//1). checks for errors, as listed below, including a speed check (cannot be lower than 0, cannot be higher than 70mph)
//2). dispatches train with different values, depending on which boxes are checked (departure time/arrival time)
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
        double speed_temp = returnSuggestedSpeed();

        //test for unrealistic speed calculations
        if (speed_temp > 0 && speed_temp <= 70)
        {
            //emit different signals based on what needs to happen
            if (ui->DepartureCheck->isChecked() == false && ui->ArrivalCheck->isChecked() == true)
            {
                emit dispatchImmediate(redline,speed_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),stationNames[ui->StationList->currentRow()]);
            }
            else if (ui->DepartureCheck->isChecked() == true && ui->ArrivalCheck->isChecked() == false)
            {
                //need to calculate our own custom arrival date and time
                //If the user-entered time matches the system time, train must leave now, else enter data into temporary schedule
                emit requestSystemTime();
                if (departTimeMinute == (currentDay*86400 + currentSeconds)/60)
                {
                    emit dispatchImmediate(redline,speed_temp,qFloor(arriveTimeMinute/1440),QTime::fromMSecsSinceStartOfDay((arriveTimeMinute%1440)*60000),stationNames[ui->StationList->currentRow()]);
                }
                else
                {
                    emit dispatchStandby(redline,speed_temp,departTimeMinute,qFloor(arriveTimeMinute/1440),QTime::fromMSecsSinceStartOfDay((arriveTimeMinute%1440)*60000),stationNames[ui->StationList->currentRow()]);
                }
            }
            else
            {
                //If the user-entered time matches the system time, train must leave now, else enter data into temporary schedule
                emit requestSystemTime();
                if (departTimeMinute == (currentDay*86400 + currentSeconds)/60)
                {
                    emit dispatchImmediate(redline,speed_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),stationNames[ui->StationList->currentRow()]);
                }
                else
                {
                    emit dispatchStandby(redline,speed_temp,departTimeMinute,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),stationNames[ui->StationList->currentRow()]);
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

//internal function - used internally for the Dispatch Button Clicked / Schedule Button Clicked functions
//no inputs
//outputs - suggested speed value
//takes the distance to the station, and the time span specified by the user to calculate speed
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


//internal slot - used when the user clicks the "Add to Schedule" button
//no inputs/outputs
//1). checks for errors, as listed below, including a speed check (cannot be lower than 0, cannot be higher than 70mph)
//2). dispatches train with initialized values (the user must explicitly specify departure time and arrival time)
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

        //test for unrealistic speed calculations
        if (speed_temp > 0 && speed_temp <= 70)
        {
            //emit dispatchSchedule(redline,departTimeMinute,speed_temp,authVector_temp,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),ui->DepartDate->currentIndex(),ui->DepartTime->time(),stationNames[ui->StationList->currentRow()]);
            emit dispatchSchedule(redline,speed_temp,departTimeMinute,ui->ArriveDate->currentIndex(),ui->ArrivalTime->time(),ui->DepartDate->currentIndex(),ui->DepartTime->time(),stationNames[ui->StationList->currentRow()]);
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

//internal slot - runs when the main window sends a singal containing its current mode
//inputs - whether or not the mode is manual
//no outputs
//used to receive the CTC mode after a request for the CTC mode was sent out from this UI, and used internally to see if the user is
// allowed to add a train to the schedule
void CTC_DispatchTrain::receiveCTCMode(bool mode)
{
    manualMode = mode;
}

