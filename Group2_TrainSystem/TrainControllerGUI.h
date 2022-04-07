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
#include "Block.h"


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
    Block *block;
    // *************************************************
    //              Added Functions
    // *************************************************
    void updatePower();
    void updateSpeed();
    void updateDoors();
    void updateLights();
    void updateMode();
    void updateBrake();
    void dispatchTrain();
    void startMoving();
    void setTrain(Train *t);

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
    void on_serviceBrake_pressed();
    void on_eBrakeButton_clicked();
    void on_submit_clicked();

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

protected:
    // *************************************************
    //              Timer Event Function
    // *************************************************
    void timerEvent(QTimerEvent *Event) override;


};
#endif // TRAINCONTROLLERGUI_H
