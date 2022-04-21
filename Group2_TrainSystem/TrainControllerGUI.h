// *************************************************
//              Alec Ippolito
//              TrainControllerGUI.h
// *************************************************

#ifndef TRAINCONTROLLERGUI_H
#define TRAINCONTROLLERGUI_H

#include <QMainWindow>
#include "TrainController.h"
// *************************************************
//              Added Includes
// *************************************************
#include "Train.h"


QT_BEGIN_NAMESPACE
namespace Ui { class TrainControllerGUI; }
QT_END_NAMESPACE

class TrainControllerGUI : public QMainWindow
{
    Q_OBJECT

public:
    // *************************************************
    //              Generated
    // *************************************************
    TrainControllerGUI(QWidget *parent = nullptr);
    ~TrainControllerGUI();
    // *************************************************
    //              Added Instances
    // *************************************************
    TrainController tc;
    double setpointSpeedForModel;
    // *************************************************
    //              Added Functions
    // *************************************************
    void updatePower();
    void updateSpeed();
    void updateDoors();
    void updateLights();
    void updateMode();
    void updateBrake();
    void updateStatus();
    void updateAdvertisements();
    void dispatchTrain();
    void startMoving();
    void slowTrain();
    void updateTemp();
    void setTrain(Train *t);
    void setPaused(bool);

private slots:
    // *************************************************
    //              Generated Slots
    // *************************************************
    void on_incSpeed_clicked();
    void on_decSpeed_clicked();
    void on_doorButton_clicked();
    void on_lightButton_clicked();
    void on_serviceBrake_clicked();
    void on_mode_clicked();
    void on_submit_clicked();
    void receiveTimeDialation(double);
    void on_eBrakeButton_clicked();
    void on_adButton_clicked();
    void on_incTempButton_clicked();
    void on_decTempButton_clicked();

    void on_announcement1_clicked();

    void on_announcement2_clicked();

    void on_announcment3_clicked();

    void on_announcement4_clicked();

private:
    // *************************************************
    //              Generated Instance
    // *************************************************
    Ui::TrainControllerGUI *ui;
    // *************************************************
    //              Added
    // *************************************************
    Train *train = nullptr;
    int timer;
    bool dispatch = false;
    bool brake = false;
    int getSpeedLimit();
    bool isPaused = false;


protected:
    // *************************************************
    //              Timer Event Function
    // *************************************************
    void timerEvent(QTimerEvent *Event) override;


};
#endif // TRAINCONTROLLERGUI_H
