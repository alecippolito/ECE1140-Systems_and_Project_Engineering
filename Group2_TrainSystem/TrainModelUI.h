#ifndef TRAINMODELUI_H
#define TRAINMODELUI_H

#include <QMainWindow>
#include <QApplication>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "Train.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateTrain(Train *t);
    void updateNumCars(int);
    void updateLength(double);
    void updatePassengers(int);
    void updateCrewCount(int);
    void updateWeight(double);
    void updateLeftDoors(bool);
    void updateRightDoors(bool);
    void updateLights(bool);
    void updateTemperature(double);
    void updateIntercom(std::string);
    void updateDestination(std::string);
    void updateCurrentBlock(Block *b);
    void updateNextBlock(Block *b);
    void updatePower(double);
    void updateVelocity(double);
    void updateAcceleration(double);
    void updateBrakeFailureStatus(bool);
    void updateSignalPickupFailureStatus(bool);
    void updateEngineFailureStatus(bool);
    void updateEmergencyBrakeStatus(bool);

private slots:
    void on_BrakeFailureButton_clicked();
    void on_EngineFailureButton_clicked();
    void on_SignalPickupFailureButton_clicked();
    void on_EmergencyBrakeButton_clicked();
private:
    Ui::MainWindow *ui;
    Train *train;
};
#endif // TRAINMODELUI_H
