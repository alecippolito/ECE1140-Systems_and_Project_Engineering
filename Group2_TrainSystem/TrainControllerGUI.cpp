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
TrainControllerGUI::TrainControllerGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TrainControllerGUI)
{

     ui->setupUi(this);
     timer = startTimer(1000);
}

TrainControllerGUI::~TrainControllerGUI()
{
    killTimer(timer);
    delete ui;
}

// *************************************************
//              Timer Event
// *************************************************

void TrainControllerGUI :: timerEvent(QTimerEvent *event)
{
    if(train != nullptr){
    if (dispatch == false){
            dispatchTrain();
    }
    tc.calculatePower();
    /*
     * if(train->brakeFailure || train->signalPickupFailure || train->engineFailure || train->passengerBrake)
    {
        tc.setPassengerEBrake(true);
        tc.setPowerCommand(0);
        tc.setSetpointSpeed(0);
        updatePower();
        updateSpeed();
        updateBrake();
    }
    else{
    updateSpeed();
    updatePower();
    updateDoors();
    updateLights();
    updateBrake();
    updateMode();
    dispatchTrain();
    updateStatus();
    }
    */
    updateSpeed();
    updatePower();
    updateDoors();
    updateLights();
    updateBrake();
    updateMode();
    dispatchTrain();
    updateStatus();
    updateAdvertisements();
    updateTemp();
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
    if( train->getNextBlock() == nullptr){
        tc.setPowerCommand(0);
    }
    tc.setTrainVelocity(train -> getCurrentVelocity());
    double curPower = tc.getPowerCommand();
    train -> setPower(curPower, setpointSpeedForModel);
    ui -> currentPower -> display(curPower);
}


void TrainControllerGUI :: updateSpeed()
{
    double curSpeed = tc.getSetpointSpeed() * 0.621371;
    double comSpeed = tc.getCommandedSpeed() * 0.621371;
    setpointSpeedForModel = curSpeed;
    if(tc.getServiceBrakeFlag()==true || tc.getEmergencyBrakeFlag()==true || tc.getPassengerEBrake()==true ){
        curSpeed = 0;
    }
    ui -> currentSetpoint -> display(floor(curSpeed));
    ui -> currentCommanded -> display(floor(comSpeed));

    if(tc.getCommandedSpeed() < 40){
        tc.setCommandedSpeed(tc.getCommandedSpeed() + 2);
    }

}

void TrainControllerGUI :: updateDoors()
{
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
}

void TrainControllerGUI :: updateLights()
{
    bool curLightStatus = tc.getLightsOn();
    if(curLightStatus == 0){
        ui -> lightStatus -> setText("Light Staus: OFF");
        train->lightsOff();
    }
    else{
        ui -> lightStatus -> setText("Light Staus: ON");
        train->lights_On();
    }
}

void TrainControllerGUI :: updateMode()
{
    bool currentModeStatus = tc.getAutomaticMode();
    if(currentModeStatus == 0){
        ui -> modeStatus -> setText("Mode: Manual");
    }
    else{
        ui -> modeStatus -> setText("Mode: Automatic");
    }
}

void TrainControllerGUI :: updateBrake()
{

    tc.setEmergencyBrake(tc.getEmergencyBrakeFlag());
    tc.setPassengerEBrake(train->passengerBrake);

    if(tc.getEmergencyBrakeFlag()==true){
        slowTrain();
    }
}

void TrainControllerGUI :: dispatchTrain()
{
    if (tc.getAutomaticMode()==1){
        tc.setKi(225); // default ki
        tc.setKp(225); // defult kp
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
    // * E brake flag
    if (tc.getEmergencyBrakeFlag() == false){
        ui->emergencyBrakeStatus->setStyleSheet("background-color:red");
    } else {
        ui->emergencyBrakeStatus->setStyleSheet("background-color:green");
    }
    // * Passenger E brake flag
    if (tc.getPassengerEBrake() == false){
        ui->passengerEmergencyBrakeStatus->setStyleSheet("background-color:red");
    } else {
        ui->passengerEmergencyBrakeStatus->setStyleSheet("background-color:green");
    }
    // * Brake Failure

    if (train -> brakeFailure == false){
        ui->brakeFailureStatus->setStyleSheet("background-color:red");
    } else {
        ui->brakeFailureStatus->setStyleSheet("background-color:green");
    }
    // * Signal Pickup Failure
    if (train -> signalPickupFailure == false){
        ui->signalPickupFailureStatus->setStyleSheet("background-color:red");
    } else{
        ui->signalPickupFailureStatus->setStyleSheet("background-color:green");
    }
    // * Engine Failure
    if (train -> engineFailure == false){
        ui->engineFailureStatus->setStyleSheet("background-color:red");
    } else{
        ui->engineFailureStatus->setStyleSheet("background-color:green");
    }
}
int TrainControllerGUI :: getSpeedLimit(){
    return train->getCurrentBlock()->speedLimitKmHr;
}
void TrainControllerGUI :: slowTrain()
{
    tc.setPowerCommand(0);
}
void TrainControllerGUI :: updateAdvertisements(){
    //true = snowpiercer, false = train to busan
    if (tc.getAdvertisements() == true){
        ui->adLabelMovie->setText("Snowpiercer");
    } else{
        ui->adLabelMovie->setText("Train to Busan");
    }
}
void TrainControllerGUI :: updateTemp(){
    ui->currentTemp->display(tc.getTemp());
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

void TrainControllerGUI::on_submit_clicked()
{
    QString kpNum = ui -> kpTextbox -> toPlainText();
    QString kiNum = ui -> kiTextbox -> toPlainText();
    double kpVal = kpNum.toDouble();
    double kiVal = kiNum.toDouble();
    tc.setKp(kpVal);
    tc.setKi(kiVal);
    startMoving();
}

void TrainControllerGUI::receiveTimeDialation(double td)
{
    tc.setT(td);
}

void TrainControllerGUI::on_eBrakeButton_clicked()
{
    tc.setPowerCommand(0.0);
    tc.setEmergencyBrake(true);
}


void TrainControllerGUI::on_adButton_clicked()
{
    train->setAdSpace(!tc.getAdvertisements());
    tc.setAdvertisements(!tc.getAdvertisements());

}


void TrainControllerGUI::on_incTempButton_clicked()
{
    double currentTemp = tc.getTemp();
    tc.setTemp(currentTemp + 1);
    train->setTemperature(currentTemp);
}


void TrainControllerGUI::on_decTempButton_clicked()
{
    double currentTemp = tc.getTemp();
    tc.setTemp(currentTemp - 1);
    train->setTemperature(currentTemp);

}

void TrainControllerGUI::on_announcement1_clicked()
{
    tc.setAnnouncement("Announcement 1");
    train->setAnnouncement(tc.getAnnouncement());
}


void TrainControllerGUI::on_announcement2_clicked()
{
    tc.setAnnouncement("Announcement 2");
    train->setAnnouncement(tc.getAnnouncement());
}


void TrainControllerGUI::on_announcment3_clicked()
{
    tc.setAnnouncement("Announcement 3");
    train->setAnnouncement(tc.getAnnouncement());
}


void TrainControllerGUI::on_announcement4_clicked()
{
    tc.setAnnouncement("Announcement 4");
    train->setAnnouncement(tc.getAnnouncement());
}

