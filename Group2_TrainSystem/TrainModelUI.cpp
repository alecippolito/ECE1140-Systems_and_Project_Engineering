#include "TrainModelUI.h"
#include "ui_TrainModelUI.h"
#include <QAbstractButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->BrakeFailureStatusLight->setStyleSheet("background-color:red");
    ui->EngineFailureStatusLight->setStyleSheet("background-color:red");
    ui->SignalPickupFailureStatusLight->setStyleSheet("background-color:red");
    ui->EmergencyBrakeStatusLight->setStyleSheet("background-color:red");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTrain(Train *t)
{
    train = t;
}


void MainWindow::on_BrakeFailureButton_clicked()
{
    if(train->brakeFailure == false){
    train->setFailureBrake(true);
    }
    else{
        train->setFailureBrake(false);
    }
}

void MainWindow::on_EngineFailureButton_clicked()
{
    if(train->engineFailure == false){
    train->setFailureEngine(true);
    }
    else{
        train->setFailureEngine(false);
    }
}

void MainWindow::on_SignalPickupFailureButton_clicked()
{
    if(train->signalPickupFailure == false){
    train->setFailureSignalPickup(true);
    }
    else{
        train->setFailureSignalPickup(false);
    }
}

void MainWindow::on_EmergencyBrakeButton_clicked()
{
    if(train->passengerBrake == false){
    train->setPassengerBrake(true);
    }
    else{
        train->setPassengerBrake(false);
    }
}



void MainWindow::updateNumCars(int num)
{
    ui->numCarsLabel->setText(QString::number(num));
}

void MainWindow::updateLength(double d)
{
    ui->lengthLabel->setText(QString::number(d));
}

void MainWindow::updatePassengers(int p)
{
    ui->passengerCountLabel->setText(QString::number(p));
}

void MainWindow::updateCrewCount(int c)
{
    ui->crewCountLabel->setText(QString::number(c));
}

void MainWindow::updateWeight(double w)
{
    ui->weightLabel->setText(QString::number(w));
}

void MainWindow::updateLeftDoors(bool d)
{
    ui->leftDoorsLabel->setText(QString::number(d));
}

void MainWindow::updateRightDoors(bool d)
{
    ui->rightDoorsLabel->setText(QString::number(d));
}

void MainWindow::updateLights(bool l)
{
    ui->lightsLabel->setText(QString::number(l));
}

void MainWindow::updateTemperature(double t)
{
    ui->temperatureLabel->setText(QString::number(t));
}

void MainWindow::updateIntercom(std::string s)
{
    ui->intercomLabel->setText(QString::fromStdString(s));
}

void MainWindow::updateDestination(std::string d)
{
    ui->destinationLabel->setText(QString::fromStdString(d));
}

void MainWindow::updateCurrentBlock(Block *b)
{
    ui->currentBlockLabel->setText(QString::number(b->blockNumber));
}

void MainWindow::updateNextBlock(Block *b)
{
    ui->nextBlockLabel->setText(QString::number(b->blockNumber));
}

void MainWindow::updatePower(double p)
{
    ui->powerLabel->setText(QString::number(p));
}

void MainWindow::updateVelocity(double v)
{
    ui->velocityLabel->setText(QString::number(v * 2.23694) + "mph");
}

void MainWindow::updateAcceleration(double a)
{
    ui->accelerationLabel->setText(QString::number(a) + "m/s^2");
}

void MainWindow::updateBrakeFailureStatus(bool f)
{
    if(f == false)
    {
    ui->BrakeFailureStatusLight->setStyleSheet("background-color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->BrakeFailureStatusLight->setStyleSheet("background-color:green");
    }
}

void MainWindow::updateSignalPickupFailureStatus(bool f)
{
    if(f == false)
    {
    ui->SignalPickupFailureStatusLight->setStyleSheet("background-color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->SignalPickupFailureStatusLight->setStyleSheet("background-color:green");
    }
}

void MainWindow::updateEngineFailureStatus(bool f)
{
    if(f == false)
    {
    ui->EngineFailureStatusLight->setStyleSheet("background-color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->EngineFailureStatusLight->setStyleSheet("background-color:green");
    }
}

void MainWindow::updateEmergencyBrakeStatus(bool f)
{
    if(f == false)
    {
    ui->EmergencyBrakeStatusLight->setStyleSheet("background-color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->EmergencyBrakeStatusLight->setStyleSheet("background-color:green");
    }
}

void MainWindow::updateAdSpace(bool movie)
{
    if(movie == true)
    {
        //snowpiercer
        ui->snowpiercerImage->setVisible(true);
        ui->traintobusanImage->setVisible(false);
    }
    else
    {
        //train to busan
        ui->snowpiercerImage->setVisible(false);
        ui->traintobusanImage->setVisible(true);
    }


}
