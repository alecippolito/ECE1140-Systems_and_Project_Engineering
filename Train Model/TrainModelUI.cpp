#include "TrainModelUI.h"
#include "ui_mainwindow.h"
#include <QAbstractButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    train->setFailureBrake(true);
}

void MainWindow::on_EngineFailureButton_clicked()
{
    train->setFailureEngine(true);
}

void MainWindow::on_SignalPickupFailureButton_clicked()
{
    train->setFailureSignalPickup(true);
}

void MainWindow::on_EmergencyBrakeButton_clicked()
{
    train->setPassengerBrake(true);
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

//void updateNextBlock(Block);

void MainWindow::updatePower(double p)
{
    ui->powerLabel->setText(QString::number(p));
}

void MainWindow::updateVelocity(double v)
{
    ui->velocityLabel->setText(QString::number(v));
}

void MainWindow::updateAcceleration(double a)
{
    ui->accelerationLabel->setText(QString::number(a));
}

void MainWindow::updateBrakeFailureStatus(bool f)
{
    if(f == false)
    {
    ui->BrakeFailureStatusLight->setStyleSheet("color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->BrakeFailureStatusLight->setStyleSheet("color:green");
    }
}

void MainWindow::updateSignalPickupFailureStatus(bool f)
{
    if(f == false)
    {
    ui->SignalPickupFailureStatusLight->setStyleSheet("color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->SignalPickupFailureStatusLight->setStyleSheet("color:green");
    }
}

void MainWindow::updateEngineFailureStatus(bool f)
{
    if(f == false)
    {
    ui->EngineFailureStatusLight->setStyleSheet("color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->EngineFailureStatusLight->setStyleSheet("color:green");
    }
}

void MainWindow::updateEmergencyBrakeStatus(bool f)
{
    if(f == false)
    {
    ui->EmergencyBrakeStatusLight->setStyleSheet("color:red");     //SET COLOR TO GREEN/RED
    }
    else
    {
        ui->EmergencyBrakeStatusLight->setStyleSheet("color:green");
    }
}
