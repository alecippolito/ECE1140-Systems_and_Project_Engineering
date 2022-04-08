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
    if(train->brakeFailure || train->signalPickupFailure || train->engineFailure || train->passengerBrake)
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
    double curSpeed = tc.getSetpointSpeed();
    setpointSpeedForModel = curSpeed;
    if(tc.getServiceBrakeFlag()==true || tc.getEmergencyBrakeFlag()==true || tc.getPassengerEBrake()==true ){
        curSpeed = 0;
    }
    ui -> currentSetpoint -> display(curSpeed);

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
    tc.setPassengerEBrake(train->brakeFailure);
    if(tc.getPassengerEBrake() == true){
        train->setPassengerBrake(true);
        tc.setPowerCommand(0);
    }
    if(tc.getEmergencyBrakeFlag()==true){
        tc.setPowerCommand(0);
        ui -> eBrakeStatus -> setText("E-Brake Status: ON");
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
    if(tc.getAutomaticMode() == true && tc.getPowerCommand() > 0){
        ui -> statusLabel -> setText("Train is moving in Automatic Mode");
    }
    if(tc.getAutomaticMode() == false && tc.getPowerCommand() > 0){
        ui -> statusLabel -> setText("Train is moving in Manuel Mode");
    }
    if(tc.getServiceBrakeFlag()==true){
        ui -> statusLabel -> setText("Service Brake Detected");
    }
    if(tc.getEmergencyBrakeFlag()==true){
        ui -> statusLabel -> setText("Emergency Brake Detected");
    }
    if(tc.getPassengerEBrake()==true){
        ui -> statusLabel -> setText("Passenger Emergency Brake Detected");
    }
    if(tc.getAuthority()==1){
        ui -> statusLabel -> setText("Train is close to stop");
    }
   if(train->getNextBlock() == nullptr){
        ui -> statusLabel -> setText("Train is at station");
    }
}
int TrainControllerGUI :: getSpeedLimit(){
    return train->getCurrentBlock()->speedLimitKmHr;
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


void TrainControllerGUI::on_eBrakeButton_clicked()
{
    tc.setPowerCommand(0.0);
    tc.setEmergencyBrake(true);
    train->setPassengerBrake(true);
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
