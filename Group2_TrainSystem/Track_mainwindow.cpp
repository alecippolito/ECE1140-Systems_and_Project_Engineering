#include "Track_mainwindow.h"
#include "ui_Track_mainwindow.h"
//#include "Track_controller.h"
#include "PLC.h"
#include <iostream>
#include <QString>
#include <QTimer>
#include <QObject>
#include <QDebug>

Track_mainwindow::Track_mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    plc = new PLC(63,10,62);

    timer = startTimer(100);

    track = new Track_controller(100,1,105,62,109);

    plc->Run_PLC();
}

Track_mainwindow::~Track_mainwindow()
{
    killTimer(timer);

    delete ui;
}

void Track_mainwindow::timerEvent(QTimerEvent *Event)
{
    update_PLC();

}
void Track_mainwindow::update_PLC()
{
    //Display current block train is on
    ui -> currentBlockVal -> display(track->Get_currblock());

    //Set switch position
    if(track->Get_switchtrack() == true)
    {
        ui -> label_3 -> setText("Block 62(True)");
    }
    else
    {
        ui -> label_3 -> setText("Block 152(False)");
    }

    //Set state of track
    if(track->Get_trackcondition() == true)
    {
         ui -> label_17 -> setText("Operational");
    }
    else
    {
        ui -> label_17 -> setText("Damaged");
    }

    //Set signal
    if(track->Get_signal_status() == true)
    {
         ui -> label_16 -> setText("ON");
    }
    else
    {
        ui -> label_16 -> setText("OFF");
    }

    //Display maintenence mode
    if(track->Get_maintenancemode() == true)
    {
         ui -> label_15 -> setText("ON");
    }
    else
    {
        ui -> label_15 -> setText("OFF");
    }

    //Display suggested speed
    ui -> lcdNumber_2 -> display(track->Get_suggestedspeed());

    //Display commanded speed
    ui -> lcdNumber_6 -> display(track->Get_commandedspeed());

    //Display train presence
    ui -> lcdNumber_3 -> display(track->Get_trackoccupancy());

    //Display railway
    if(track->Get_crossbar_status() == true)
    {
         ui -> label_18 -> setText("DROP");
    }
    else
    {
        ui -> label_18 -> setText("LIFT UP");
    }

    //Display speed limit
    ui -> lcdNumber_4 -> display(track->Get_speedlimit());

    //Display authority
    ui -> lcdNumber_5 -> display(track->Get_authority());

}
