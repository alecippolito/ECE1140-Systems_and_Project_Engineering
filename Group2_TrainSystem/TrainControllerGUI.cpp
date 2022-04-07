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
    updatePower();
    updateSpeed();
    updateDoors();
    updateLights();
    updateBrake();
    updateMode();
    dispatchTrain();
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
    tc.setTrainVelocity(train -> getCurrentVelocity());
    double curPower = tc.getPowerCommand();
    train -> setPower(curPower);
    ui -> currentPower -> display(curPower);
    qDebug() << "POWER: " << curPower;
}


void TrainControllerGUI :: updateSpeed()
{
    double curSpeed = tc.getSetpointSpeed();
    if(tc.getServiceBrakeFlag()==true || tc.getEmergencyBrakeFlag()==true || tc.getPassengerEBrake()==true ){
        curSpeed = 0;
    }
    ui -> currentSetpoint -> display(curSpeed);
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
    if(tc.getServiceBrakeFlag()==true || tc.getEmergencyBrakeFlag()==true || tc.getPassengerEBrake()==true){
        train->setFailureBrake(true);
        tc.setPowerCommand(0);
    }


}

void TrainControllerGUI :: dispatchTrain()
{
    if (tc.getAutomaticMode()==0){
        tc.setKi(225); // default ki
        tc.setKp(225); // defult kp
        startMoving();
    }
    dispatch = true;
}
void TrainControllerGUI :: startMoving()
{
    // train ->
    // tc.setCommandedSpeed();
    tc.setSetpointSpeed(tc.getCommandedSpeed());
    tc.calculatePower();
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
    tc.setEmergencyBrake(true);
}


void TrainControllerGUI::on_mode_clicked()
{
    tc.setAutomaticMode(!tc.getAutomaticMode());
}

void TrainControllerGUI::on_serviceBrake_pressed()
{
    tc.setPowerCommand(0.0);
    tc.setServiceBrake(true);
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

