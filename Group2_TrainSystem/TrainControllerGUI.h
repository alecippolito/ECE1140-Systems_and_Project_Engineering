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
    TrainControllerGUI(int newTrainNum, QWidget *parent = nullptr);
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
    void updateBrake();
    void updateStatus();
    void dispatchTrain();
    void startMoving();
    void updateTrain();
    void setTrain(Train *t);
    void getInfo();
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
    void receiveTimeDialation(double);
    void on_eBrakeButton_clicked();
    void on_adButton_clicked();
    void on_incTempButton_clicked();
    void on_decTempButton_clicked();
    void on_tempSubmit_clicked();
    void on_kpkiSubmit_clicked();

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
    int trainNum = 0;
// protected:
public:
    // *************************************************
    //              Timer Event Function
    // *************************************************
    void timerEvent(QTimerEvent *Event) override;

};
#endif // TRAINCONTROLLERGUI_H
