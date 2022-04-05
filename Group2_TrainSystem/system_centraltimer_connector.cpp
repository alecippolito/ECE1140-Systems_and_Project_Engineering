#include "system_centraltimer_connector.h"
#include "ui_system_centraltimer_connector.h"

#include <QDate>
#include <QTime>
#include <QDebug>
#include <QTimer>

//Central Timer and connector class
//All modules are created in this class; signals/slots between modules are connected here

//Day value
// 1: Monday
// 2: Tuesday
// 3: Wednesday
// 4: Thursday
// 5: Friday
// 6: Saturday
// 7: Sunday

//secondsInDay value: measures the seconds elapsed since midnight of that day.
// there are 86400 seconds in a day. This function will add 1 second at a certain frequency.

System_CentralTimer_Connector::System_CentralTimer_Connector(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::System_CentralTimer_Connector)
{
    ui->setupUi(this);

    //in order for the modules and their UI's to run, execute them here, in the constructor
    ctc = new CTC_MainWindow();
    ctc->show();

    //initialize the timing variables
    //Timer starts at the CURRENT TIME
    timeDialation = 1;
    QDate currentDate = QDate::currentDate();
    day = currentDate.dayOfWeek();
    QTime currentTime = QTime::currentTime();
    secondsInDay = currentTime.msecsSinceStartOfDay()/1000;

    //display the inital time
    displayDateTime();


    //set up a continuous timer. It will go off at a user specified frequency; but the default will be every 1 second
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);
}

System_CentralTimer_Connector::~System_CentralTimer_Connector()
{
    delete ui;
}

void System_CentralTimer_Connector::updateTime()
{
    //there are 86400 seconds in a day. Add 1 to the seconds value, if it exceeds that number, reset it back to 0,
    //and it adds 1 to the date value
    if (secondsInDay == 86399)
    {
        secondsInDay = 0;

        //day goes from 1-7. If it exceeds 7, reset back to 1
        if (day == 7)
        {
            day = 1;
        }
        else
        {
            day++;
        }
    }
    else
    {
        secondsInDay++;
    }

    emit sendTime(day,secondsInDay);
    emit sendTimeUpdate();

    displayDateTime();
}



void System_CentralTimer_Connector::on_OneTimesSpeed_clicked()
{
    timer->setInterval(1000);
}


void System_CentralTimer_Connector::on_TenTimesSpeed_clicked()
{
    timer->setInterval(100);
}

void System_CentralTimer_Connector::on_SixtyTimesSpeed_clicked()
{
    timer->setInterval(1000/60);
}

void System_CentralTimer_Connector::on_HundredTimesSpeed_clicked()
{
    timer->setInterval(10);
}

void System_CentralTimer_Connector::displayDateTime()
{
    //display the time on the central timer module
    if (day == 1)
    {
        ui->DayDisplay->setText("Monday");
    }
    else if (day == 2)
    {
        ui->DayDisplay->setText("Tuesday");
    }
    else if (day == 3)
    {
        ui->DayDisplay->setText("Wednesday");
    }
    else if (day == 4)
    {
        ui->DayDisplay->setText("Thursday");
    }
    else if (day == 5)
    {
        ui->DayDisplay->setText("Friday");
    }
    else if (day == 6)
    {
        ui->DayDisplay->setText("Saturday");
    }
    else if (day == 7)
    {
        ui->DayDisplay->setText("Sunday");
    }

    int tempHour, tempMinute, tempSecond;
    QString tempTime;
    tempHour = secondsInDay/3600;
    tempMinute = (secondsInDay - 3600*tempHour)/60;
    tempSecond = (secondsInDay - 3600*tempHour - 60*tempMinute);
    tempTime = QString::number(tempHour) + ":" + QString::number(tempMinute) + ":" + QString::number(tempSecond);
    ui->TimeDisplay->setText(tempTime);
}


