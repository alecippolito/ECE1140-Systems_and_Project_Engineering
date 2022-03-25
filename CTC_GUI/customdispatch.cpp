#include "customdispatch.h"
#include "ui_customdispatch.h"
#include <QMessageBox>
#include <QDebug>

CustomDispatch::CustomDispatch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomDispatch)
{
    ui->setupUi(this);

    //set the departure and arrival date to the current date, and initialize variables
    //time is only accurate down to the minute
    QDateTime currDateTime = QDateTime::currentDateTime();
    QTime currTime = currDateTime.time();
    currTime.setHMS(currTime.hour(),currTime.minute(),0,0);
    currDateTime.setTime(currTime);
    ui->dateTimeEdit->setDateTime(currDateTime);
    ui->dateTimeEdit_2->setDateTime(currDateTime.addSecs(3600));
    suggestedSpeed = 0;
    authority = 0;
    status = "";

    standardSpeed = 40;
}

CustomDispatch::~CustomDispatch()
{
    delete ui;
}

void CustomDispatch::on_listWidget_currentTextChanged(const QString &currentText)
{
    ui->label->setText("Selected: " + currentText);
}

void CustomDispatch::on_pushButton_clicked()
{
    //this code checks if the inputs are valid

    //create a variable for the current time, set the seconds and milliseconds to 0
    QDateTime currDateTime = QDateTime::currentDateTime();
    QTime currTime = currDateTime.time();
    currTime.setHMS(currTime.hour(),currTime.minute(),0,0);
    currDateTime.setTime(currTime);

    //create a messageBox class for error messages
    QMessageBox* message = new QMessageBox();


    //error cases:
    //1). neither the departure time or arrival time are selected
    //2). the departure time is before the current time (assuming the departure time is checked)
    //3). the departure time is after the arrival time (assuming that both departure and arrival time are checked)
    //4). Authority and speed must be calculated correctly


    //no need for the following requirement:
    //4). the required speed to get there will be outside of the train's range of speed (5 Km/Hr - max speed limit to travel to each station)

    //1).
    if (ui->checkBox->isChecked() == false && ui->checkBox_2->isChecked() == false)
    {
        message->setText("Error: you must select either\na departure time or an arrival time!");
        message->exec();
    }
    //2).
    else if (ui->checkBox->isChecked() == true && ui->dateTimeEdit->dateTime() < currDateTime)
    {
        message->setText("Error: departure time is in\nthe past!");
        message->exec();
    }
    //3).
    else if (ui->checkBox->isChecked() == true && ui->checkBox_2->isChecked() == true && ui->dateTimeEdit->dateTime() >= ui->dateTimeEdit_2->dateTime())
    {
        message->setText("Error: departure time is\nafter the arrival time!");
        message->exec();
    }
    else
    {
        calcSpeed();
        calcAuthority();
        setSelectedName();

        if (suggestedSpeed != 0 && authority != 0)
        {
            emit dispatchSuccessful();
            hide();
        }
        else
        {
            message->setText("Error: could not calculate speed or authority!");
            message->exec();
        }
    }
    delete message;
}

void CustomDispatch::calcSpeed()
{
    //to calculate the speed, this function must take the dateTime variables and convert them into seconds since unix epoch

    //calculate the current speed, accurate to the minute
    QDateTime currDateTime = QDateTime::currentDateTime();
    QTime currTime = currDateTime.time();
    currTime.setHMS(currTime.hour(),currTime.minute(),0,0);
    currDateTime.setTime(currTime);

    //convert all times to seconds since Unix Epoch (Jan 1st, 1970 at midnight)
    qint64 currDateTime_seconds = currDateTime.toSecsSinceEpoch();
    qint64 departTime_seconds = ui->dateTimeEdit->dateTime().toSecsSinceEpoch();
    qint64 arriveTime_seconds = ui->dateTimeEdit_2->dateTime().toSecsSinceEpoch();
    qint64 totalTime;   //time required in seconds
    double totalTime_double;

    //get the distance required - use the very cool authority vector I send using signals and slots :)
    //distance comes through in meters - turn into kilometers
    double distance = StationDistances[ui->listWidget->currentRow()]/1000;

    //if both check boxes are checked
    if (ui->checkBox->isChecked() == true && ui->checkBox_2->isChecked() == true)
    {
        //depart time, arrival time
        totalTime = arriveTime_seconds-departTime_seconds;

        totalTime_double = (double)totalTime;

        suggestedSpeed = distance/(totalTime_double/3600);

    }
    //if just the arrival time is checked
    else if (ui->checkBox->isChecked() == false && ui->checkBox_2->isChecked() == true)
    {
        //current time, arrival time
        totalTime = arriveTime_seconds-currDateTime_seconds;

        totalTime_double = (double)totalTime;

        suggestedSpeed = distance/(totalTime_double/3600);

    }
    //if just the departure time is checked
    else if (ui->checkBox->isChecked() == true && ui->checkBox_2->isChecked() == false)
    {
        //Average speed limit time to travel to selected station
        //suggestedSpeed = stationsAVGSL[ui->listWidget->currentRow()];


        //standard speed = arbitary
        suggestedSpeed = standardSpeed;
    }
    //if God doesn't want this program to work, return a 0 if both boxes are unchecked, assuming this function is
    //still somehow called. See, this is called good programming practice. I'm obviously such a good programmer; This is why I should get hired
    //by Google. Thank you and have a good day
    else
    {
        suggestedSpeed = 0;
    }
}

void CustomDispatch::calcAuthority()
{
    authority = StationAuthorities[ui->listWidget->currentRow()];
}

void CustomDispatch::setSelectedName()
{
    selectedName = stations[ui->listWidget->currentRow()];
}

void CustomDispatch::calcStatus()
{
    //set the status of the train that will be dispatched

    //calculate the current speed, accurate to the minute
    QDateTime currDateTime = QDateTime::currentDateTime();
    QTime currTime = currDateTime.time();
    currTime.setHMS(currTime.hour(),currTime.minute(),0,0);
    currDateTime.setTime(currTime);

    //if both check boxes are checked
    if (ui->checkBox->isChecked() == true && ui->checkBox_2->isChecked() == true)
    {
        if (currDateTime == ui->dateTimeEdit->dateTime())
        {
            status = "Moving";
        }
        else
        {
            status = "Standby";
        }
    }
    //if just the arrival time is checked
    else if (ui->checkBox->isChecked() == false && ui->checkBox_2->isChecked() == true)
    {
        //train will always leave at current time
        status = "Moving";
    }
    //if just the departure time is checked
    else if (ui->checkBox->isChecked() == true && ui->checkBox_2->isChecked() == false)
    {
        if (currDateTime == ui->dateTimeEdit->dateTime())
        {
            status = "Moving";
        }
        else
        {
            status = "Standby";
        }
    }
    else
    {
        status = "Invalid";
    }
}

int CustomDispatch::returnRow()
{
    return ui->listWidget->currentRow();
}

double CustomDispatch::returnSpeed()
{
    return suggestedSpeed;
}

QDateTime CustomDispatch::returnDepartDT()
{
    //calculate the current speed, accurate to the minute
    QDateTime currDateTime = QDateTime::currentDateTime();
    QTime currTime = currDateTime.time();
    currTime.setHMS(currTime.hour(),currTime.minute(),0,0);
    currDateTime.setTime(currTime);

    if (ui->checkBox->isChecked() == false && ui->checkBox_2->isChecked() == true)
    {
        //return a calculated time from leaving at the departure time at standard time
        return currDateTime;
    }
    else
    {
        return ui->dateTimeEdit->dateTime();
    }
}

QDateTime CustomDispatch::returnArriveDT()
{
    if (ui->checkBox->isChecked() == true && ui->checkBox_2->isChecked() == false)
    {
        //return a calculated time from leaving at the departure time at standard speed
        return ui->dateTimeEdit->dateTime().addSecs((StationDistances[ui->listWidget->currentRow()]/standardSpeed)*3600);
    }
    else
    {
        return ui->dateTimeEdit_2->dateTime();
    }
}

QString CustomDispatch::returnStatus()
{
    return status;
}

void CustomDispatch::on_checkBox_stateChanged(int arg1)
{
    //if arg1 = 0, unchecked. If arg1 = 2, checked
    if (arg1 == 0)
    {
        ui->dateTimeEdit->setVisible(false);
        if (ui->checkBox_2->isChecked() == true)
        {
            ui->label_2->setText("Train will leave now");
        }
        else
        {
            ui->label_2->setText(" ");
            ui->label_3->setText(" ");
        }
    }
    else
    {
        ui->dateTimeEdit->setVisible(true);
        ui->label_2->setText(" ");

        if (ui->checkBox_2->isChecked() == false)
        {
            ui->label_3->setText("Train will leave at " + QString::number(standardSpeed) + " km/hr");
        }
    }
}

void CustomDispatch::on_checkBox_2_stateChanged(int arg1)
{
    //if arg1 = 0, unchecked. If arg1 = 2, checked
    if (arg1 == 0)
    {
        ui->dateTimeEdit_2->setVisible(false);
        if (ui->checkBox->isChecked() == true)
        {
            ui->label_3->setText("Train will leave at " + QString::number(standardSpeed) + " km/hr");
        }
        else
        {
            ui->label_2->setText(" ");
            ui->label_3->setText(" ");
        }
    }
    else
    {
        ui->dateTimeEdit_2->setVisible(true);
        ui->label_3->setText(" ");

        if (ui->checkBox->isChecked() == false)
        {
            ui->label_2->setText("Train will leave at " + QString::number(standardSpeed) + " km/hr");
        }
    }
}

void CustomDispatch::receiveTrackData(QVector<double> temp1, QVector<QString> temp2, QVector<int> temp3)
{
    StationDistances = temp1;
    stations = temp2;
    StationAuthorities = temp3;

    //now that you have the data, add items to the list widget
    //loop through the stations vector and all of them to the list Widget
    for (unsigned int i = 0; i < stations.size(); i++)
    {
        ui->listWidget->addItem(stations[i]);
    }
    ui->listWidget->setCurrentRow(0);
}

int CustomDispatch::returnAuthority()
{
    return authority;
}

QString CustomDispatch::returnName()
{
    return selectedName;
}




