#include "system_centraltimer_connector.h"
#include "ui_system_centraltimer_connector.h"

#include <QDate>
#include <QTime>
#include <QDebug>
#include <QTimer>

//Central Timer and connector class
//All modules are created in this class; signals/slots between modules are connected here

//Day value
// 0: Monday
// 1: Tuesday
// 2: Wednesday
// 3: Thursday
// 4: Friday
// 5: Saturday
// 6: Sunday

//secondsInDay value: measures the seconds elapsed since midnight of that day.
// there are 86400 seconds in a day. This function will add 1 second at a certain frequency.

System_CentralTimer_Connector::System_CentralTimer_Connector(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::System_CentralTimer_Connector)
{
    ui->setupUi(this);

    //in order for the modules and their UI's to run, execute them here, in the central file constructor
    ctc = new CTC_MainWindow();
    ctc->show();
    trackController = new Track_mainwindow();
    trackController->show();

    //initialize the timing variables
    //Timer starts at the CURRENT TIME
    days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    timeDialation = 1;
    QDate currentDate = QDate::currentDate();
    day = currentDate.dayOfWeek()-1;
    QTime currentTime = QTime::currentTime();
    secondsInDay = currentTime.msecsSinceStartOfDay()/1000;

    //display the inital time
    displayDateTime();


    //set up a continuous timer. It will go off at a user specified frequency; but the default will be every 1 second
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);


    //CONNECTIONS BETWEEN MODULES vvvvvvv

    //send time to CTC
    QObject::connect(this,SIGNAL(sendTime(int,int)),ctc,SLOT(receiveTime(int,int)));

    //testing purposes: receiving a dispatch signal from the CTC
    QObject::connect(ctc, SIGNAL(sendTrainData(int,bool,int,QVector<double>,QVector<bool>)), this, SLOT(receiveDispatchSignal_test(int,bool,int,QVector<double>,QVector<bool>)));

    //send speed and authority from CTC to Wayside
    QObject::connect(ctc, SIGNAL(sendTrainData(int,bool,int,QVector<double>,QVector<bool>)), trackController, SLOT(receiveTrainData(int,bool,int,QVector<double>,QVector<bool>)));
}

System_CentralTimer_Connector::~System_CentralTimer_Connector()
{
    delete ui;
}

void System_CentralTimer_Connector::receiveDispatchSignal_test(int TrainNum_temp, bool redline_temp, int authority_temp, QVector<double> speed_temp,QVector<bool> authorityVector_temp)
{
    qDebug() << "Dispatch signal received!";
    qDebug() << "Train Number: " << QString::number(TrainNum_temp);
    qDebug() << (redline_temp == true ? "Line: Red line" : "Line: Green line");

    /*
    qDebug() << "Authority: " << QString::number(authority_temp);
    for (unsigned int i = 0; i < authorityVector_temp.size(); i++)
    {
        qDebug() << QString::number(i+1) << speed_temp[i];
    }

    for (unsigned int i = 0; i < authorityVector_temp.size(); i++)
    {
        qDebug() << QString::number(i+1) << authorityVector_temp[i];
    }*/

    qDebug();

    //load track
    realTrackModel.loadRedLine();
    realTrackModel.loadGreenLine();
    realTrackModel.parseInfrastructure();
    realTrackModel.updateUI();
    realTrackModel.show();

    //create a new Train Controller GUI

    tcGUI = new TrainControllerGUI();
    tcGUI->show();

    if(redline_temp)
    {
        qDebug() << "Track made on red line";
        Train *t = new Train(1, realTrackModel.redline[0], &realTrackModel); //redline
        tcGUI->setTrain(t);
    }
    else
    {
        qDebug() << "Track made on green line";
        Train *t = new Train(1, realTrackModel.greenline[0], &realTrackModel);
        tcGUI->setTrain(t);
    }


    //connect the time dialation to the train controller
    QObject::connect(this, SIGNAL(sendTimeDialation(double)),tcGUI,SLOT(receiveTimeDialation(double)));
    emit sendTimeDialation(timeDialation);

}

void System_CentralTimer_Connector::updateTime()
{
    //there are 86400 seconds in a day. Add 1 to the seconds value, if it exceeds that number, reset it back to 0,
    //and it adds 1 to the date value
    day = (secondsInDay == 86399 ? (day == 6 ? 0 : day + 1) : day);
    secondsInDay = (secondsInDay+1)%86400;


    emit sendTime(day,secondsInDay);
    emit sendTimeUpdate(timeDialation);

    displayDateTime();
}



void System_CentralTimer_Connector::on_OneTimesSpeed_clicked()
{
    timeDialation = 1;
    timer->setInterval(1000/timeDialation);
    emit sendTimeDialation(timeDialation);
}


void System_CentralTimer_Connector::on_TenTimesSpeed_clicked()
{
    timeDialation = 10;
    timer->setInterval(1000/timeDialation);
    emit sendTimeDialation(timeDialation);
}

void System_CentralTimer_Connector::on_SixtyTimesSpeed_clicked()
{
    timeDialation = 60;
    timer->setInterval(1000/timeDialation);
    emit sendTimeDialation(timeDialation);
}

void System_CentralTimer_Connector::on_HundredTimesSpeed_clicked()
{
    timeDialation = 100;
    timer->setInterval(1000/timeDialation);
    emit sendTimeDialation(timeDialation);
}

void System_CentralTimer_Connector::on_ThousandTimesSpeed_clicked()
{
    timeDialation = 1000;
    timer->setInterval(1000/timeDialation);
    emit sendTimeDialation(timeDialation);
}

void System_CentralTimer_Connector::displayDateTime()
{
    //display the time on the central timer module
    ui->DayDisplay->setText(days[day]);
    ui->TimeDisplay->setText(QTime::fromMSecsSinceStartOfDay(secondsInDay*1000).toString("h:mm:ss A"));
}



void System_CentralTimer_Connector::on_MonButton_clicked()
{
    day = 0;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_TuesButton_clicked()
{
    day = 1;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_WedButton_clicked()
{
    day = 2;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_ThursButton_clicked()
{
    day = 3;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_FriButton_clicked()
{
    day = 4;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_SatButton_clicked()
{
    day = 5;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_SunButton_clicked()
{
    day = 6;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_TimeButton_1pm_clicked()
{
    secondsInDay = 46800;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}


void System_CentralTimer_Connector::on_TimeButton_2pm_clicked()
{
    secondsInDay = 50400;
    displayDateTime();
    emit sendTime(day,secondsInDay);
}
