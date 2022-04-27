// *************************************************
//              Alec Ippolito
//              TrainControllerGUI.cpp
// *************************************************

// *************************************************
//              Includes
// *************************************************
#include "TrainControllerGUI.h"
#include "ui_TrainControllerGUI.h"
// *************************************************
//              Added Includes
// *************************************************
#include <iostream>
#include <QString>
#include <QTimer>
#include <QObject>
#include <QDebug>

// *************************************************
//              Public
// *************************************************
TrainControllerGUI::TrainControllerGUI(int newTrainNum, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TrainControllerGUI)
{

     ui->setupUi(this);
     trainNum = newTrainNum;

}

TrainControllerGUI::~TrainControllerGUI()
{
    delete ui;
}

// *************************************************
//              Timer Event
// *************************************************

void TrainControllerGUI :: timerEvent(QTimerEvent *event)
{
    if(!isPaused){
        if(train != nullptr){
            if (dispatch == false){
                    dispatchTrain();
            }
            tc.calculatePower();
            updatePower();
            getInfo(); // Update Authority and Velocity (Commanded Speed)
            updateBrake();
            updateSpeed(); // Updates Setpoint Speed and Commanded Speed
            updateStatus(); // Updates Train Mode and All Emergency States
            updateTrain(); // Updates Advertisements, Doors, Lights and Temperture
        }
    }
}
// *************************************************
//              Added Public
// *************************************************

void TrainControllerGUI :: setTrain(Train *t)
{
    train = t;
}

void TrainControllerGUI :: updatePower()
{
    double curPower = tc.getPowerCommand();
    train -> setPower(curPower, setpointSpeedForModel);
    ui -> currentPower -> display(curPower);
}


void TrainControllerGUI :: updateSpeed()
{
    // Setpoint Speed
    double setpointSpeed = tc.getSetpointSpeed() * 0.621371;
    if(tc.getCommandedSpeed() < 40){
        tc.setCommandedSpeed(tc.getCommandedSpeed() + 2);
    }
    ui -> currentSetpoint -> display(floor(setpointSpeed));

    // Commanded Speed
    double commandedSpeed = tc.getCommandedSpeed() * 0.621371;
    setpointSpeedForModel = setpointSpeed;
    ui -> currentCommanded -> display(floor(commandedSpeed));

}

void TrainControllerGUI :: updateBrake()
{
    tc.setEmergencyBrake(tc.getEmergencyBrakeFlag());
    tc.setPassengerEBrake(train->passengerBrake);
    if(tc.getEmergencyBrakeFlag()==true){
        tc.setPowerCommand(0);
    }
}

void TrainControllerGUI :: dispatchTrain()
{
    if (tc.getAutomaticMode()==1){
        tc.setKi(225 * 1000); // Our default ki
        tc.setKp(225 * 1000); // Our defult kp
        startMoving();
    }
    dispatch = true;
}


void TrainControllerGUI :: startMoving()
{
    tc.setServiceBrake(false);
    tc.setSetpointSpeed(tc.getCommandedSpeed());
    tc.calculatePower();
}

void TrainControllerGUI :: updateStatus()
{
    // Disable Buttons in Automatic Mode
    ui -> incSpeed -> setDisabled(tc.getAutomaticMode());
    ui -> decSpeed -> setDisabled(tc.getAutomaticMode());
    ui -> lightButton -> setDisabled(tc.getAutomaticMode());
    ui -> doorButton -> setDisabled(tc.getAutomaticMode());
    ui -> adButton -> setDisabled(tc.getAutomaticMode());
    ui -> tempSubmit -> setDisabled(tc.getAutomaticMode());
    ui -> eBrakeButton -> setDisabled(tc.getAutomaticMode());
    ui -> serviceBrake -> setDisabled(tc.getAutomaticMode());

    // Announcments
    // tc.setStation(train->getStation());
    std :: string message = "";
    if(tc.getAuthority() == 0){
        message = "Arriving at : ";
        ui ->announcmentMessage -> setText(QString::fromStdString(message));
    } else {
        message = "Next Station: ";
        ui ->announcmentMessage -> setText(QString::fromStdString(message));
    }
    ui ->announcmentStation -> setText(QString::fromStdString(tc.getStation()));
    train->setAnnouncement(message + tc.getStation());

    // Train Mode
    bool currentModeStatus = tc.getAutomaticMode();
    if(currentModeStatus == 0){
        ui -> modeStatus -> setText("Mode: Manual");
    }
    else{
        ui -> modeStatus -> setText("Mode: Automatic");
    }

    // Train Number
    ui -> trainNumVal -> setText(QString::number(trainNum));


     // Emergency brake flag
    if (tc.getEmergencyBrakeFlag() == false){
        ui->emergencyBrakeStatus->setStyleSheet("background-color:red");
    } else {
        tc.setPowerCommand(0);
        ui->emergencyBrakeStatus->setStyleSheet("background-color:green");
    }

    // Passenger Emergency brake flag
    if (tc.getPassengerEBrake() == false){
        ui->passengerEmergencyBrakeStatus->setStyleSheet("background-color:red");
    } else {
        tc.setPowerCommand(0);
        ui->passengerEmergencyBrakeStatus->setStyleSheet("background-color:green");
        tc.setEmergencyBrake(true);
    }

    // Brake Failure

    if (train -> brakeFailure == false){
        ui->brakeFailureStatus->setStyleSheet("background-color:red");
    } else {
        tc.setPowerCommand(0);
        ui->brakeFailureStatus->setStyleSheet("background-color:green");
        tc.setEmergencyBrake(true);
    }

    // Signal Pickup Failure
    if (train -> signalPickupFailure == false){
        ui->signalPickupFailureStatus->setStyleSheet("background-color:red");
    } else{
        tc.setPowerCommand(0);
        ui->signalPickupFailureStatus->setStyleSheet("background-color:green");
        tc.setEmergencyBrake(true);
    }

    // Engine Failure
    if (train -> engineFailure == false){
        ui->engineFailureStatus->setStyleSheet("background-color:red");
    } else{
        tc.setPowerCommand(0);
        ui->engineFailureStatus->setStyleSheet("background-color:green");
        tc.setEmergencyBrake(true);
    }
}

void TrainControllerGUI :: updateTrain(){
    // Advertisement
    if (tc.getAdvertisements() == true){
        ui->adLabelMovie->setText("Snowpiercer");
    } else{
        ui->adLabelMovie->setText("Train to Busan");
    }

    // Doors
    bool curDoorStatus = tc.getDoorsOpen();
    if(curDoorStatus == 0){
        ui -> doorStatus -> setText("Door Staus: CLOSED");
        train->setRightDoors(curDoorStatus);
        train->setLeftDoors(curDoorStatus);
    }
    else{
        ui -> doorStatus -> setText("Door Staus: OPEN");
        train->setRightDoors(curDoorStatus);
        train->setLeftDoors(curDoorStatus);
    }
    if (tc.getTrainVelocity() != 0){
        ui->doorButton->setDisabled(true);
    }
    else{
        ui->doorButton->setDisabled(false);
    }

    // Lights
    bool curLightStatus = tc.getLightsOn();
    if(curLightStatus == 0){
        ui -> lightStatus -> setText("Light Staus: OFF");
        train->lightsOff();
    }
    else{
        ui -> lightStatus -> setText("Light Staus: ON");
        train->lights_On();
    }

    // Temperature
    ui->currentTemp->display(tc.getTemp());
    if (train->temperature < tc.getNewTemp()){
        double newTempVal = tc.getTemp()+1;
        tc.setTemp(newTempVal);
        train->setTemperature(newTempVal);
    }
    if (train->temperature > tc.getNewTemp()){
        double newTempVal = tc.getTemp()-1;
        tc.setTemp(newTempVal);
        train->setTemperature(newTempVal);
    }
}


// UNCOMMENT WHEN YOU GET AUTHORITY AND STUFF
void TrainControllerGUI :: getInfo(){
    // figure out a way to get authority
    // tc.setAuthority(train->getAuthority());
    ui -> currentAuthority->display(tc.getAuthority());
    // figure out a way to set Commanded Speed
    // tc.setCommndedSpeed(train->getVelocity());
    // figure out a way to get velocity
    tc.setTrainVelocity(train->getSpeed());
    ui -> currentVelocity->display(tc.getTrainVelocity());
    }


// *************************************************
//              Private Slots
// *************************************************

void TrainControllerGUI::on_incSpeed_clicked()
{
    double currentSpeed = tc.getSetpointSpeed();
    tc.setSetpointSpeed(currentSpeed + 5.0);
}

void TrainControllerGUI::on_decSpeed_clicked()
{
    double currentSpeed = tc.getSetpointSpeed();
    tc.setSetpointSpeed(currentSpeed - 5.0);
}

void TrainControllerGUI::on_doorButton_clicked()
{
    tc.setDoorsOpen(!tc.getDoorsOpen());
}

void TrainControllerGUI::on_lightButton_clicked()
{
    tc.setLightsOn(!tc.getLightsOn());
}


void TrainControllerGUI::on_serviceBrake_clicked()
{
    tc.setPowerCommand(0.0);
    tc.setServiceBrake(true);
}


void TrainControllerGUI::on_mode_clicked()
{
    tc.setAutomaticMode(!tc.getAutomaticMode());
}

void TrainControllerGUI::receiveTimeDialation(double td)
{
    tc.setT(td);
}

void TrainControllerGUI::on_eBrakeButton_clicked()
{
    tc.setPowerCommand(0);
    tc.setEmergencyBrake(!tc.getEmergencyBrakeFlag());
}


void TrainControllerGUI::on_adButton_clicked()
{
    train->setAdSpace(!tc.getAdvertisements());
    tc.setAdvertisements(!tc.getAdvertisements());

}


void TrainControllerGUI::on_incTempButton_clicked()
{
    double currentTemp = tc.getTemp() + 1;
    tc.setTemp(currentTemp);
    train->setTemperature(currentTemp);
}


void TrainControllerGUI::on_decTempButton_clicked()
{
    double currentTemp = tc.getTemp() - 1;
    tc.setTemp(currentTemp);
    train->setTemperature(currentTemp);

}


void TrainControllerGUI::on_tempSubmit_clicked()
{
    QString tempNum = ui->tempTextbox->toPlainText();
    double tempVal = tempNum.toDouble();
    tc.setNewTemp(tempVal);
}


void TrainControllerGUI::on_kpkiSubmit_clicked()
{
    QString kpNum = ui -> kpTextbox -> toPlainText();
    QString kiNum = ui -> kiTextbox -> toPlainText();
    double kpVal = kpNum.toDouble();
    double kiVal = kiNum.toDouble();
    tc.setKp(kpVal);
    tc.setKi(kiVal);
    startMoving();
}
void TrainControllerGUI::setPaused(bool b)
{
    isPaused = b;
}

