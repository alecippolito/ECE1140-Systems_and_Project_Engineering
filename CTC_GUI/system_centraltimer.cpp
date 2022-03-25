#include "system_centraltimer.h"
#include "ui_system_centraltimer.h"

#include <QTimer>

//purpose of this UI:

//Creates a centralized time that will be sent to the modules. When the time in this UI changes, a signal will be sent to the slots in all
//modules that need it.

//How the time will be encoded:
//dayOfWeek: integer
//0 -> Monday
//1 -> Tuesday
//2 -> Wednesday
//3 -> Thursday
//4 -> Friday
//5 -> Saturday
//6 -> Sunday

//secondsInDay: integer
//measure of the seconds elapsed since 12:00am on that specific day.
//Min = 0, 12:00:00am
//Max = 86399, 11:59:59pm

//time is updated through an Interrupt generated with the QTimer class. Frequency of the interrupt can change with user input
// 1x speed: normal speed (default)
// 10x speed: 1 system second will be added every 1/10th of a second
// 100x speed: 1 system second will be added every 1/100th of a second

System_CentralTimer::System_CentralTimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::System_CentralTimer)
{
    ui->setupUi(this);

    //initialize the secondsInDay value to 0
    secondsInDay = 0;
    dayOfWeek = 0;
    ui->label->setText(QString::number(secondsInDay));

    //run the Main CTC UI from here: the central timer
    ctc = new CTC();
    ctc->show();

    //set up the timer interrupt
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);

}

System_CentralTimer::~System_CentralTimer()
{
    delete ui;
}

void System_CentralTimer::updateTime()
{
    secondsInDay++;
    ui->label->setText(QString::number(secondsInDay));
}
