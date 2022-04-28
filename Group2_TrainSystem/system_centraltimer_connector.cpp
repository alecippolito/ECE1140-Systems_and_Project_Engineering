#include "system_centraltimer_connector.h"
#include "ui_system_centraltimer_connector.h"

#include <QDate>
#include <QTime>
#include <QDebug>
#include <QTimer>

//helper function to find route
int findRoute(QString, bool);

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
    QObject::connect(ctc, SIGNAL(sendTrainData(int,bool,QString)), this, SLOT(receiveDispatchSignal_test(int,bool,QString)));

    //send speed and authority from CTC to Wayside
    QObject::connect(ctc, SIGNAL(sendAuthAndSpeed(bool,QVector<bool>,QVector<double>)), trackController, SLOT(receiveTrainData(bool,QVector<bool>,QVector<double>)));


    //make the day edits invisible, we only need it for testing
    ui->MonButton->setVisible(false);
    ui->TuesButton->setVisible(false);
    ui->WedButton->setVisible(false);
    ui->ThursButton->setVisible(false);
    ui->FriButton->setVisible(false);
    ui->SatButton->setVisible(false);
    ui->SunButton->setVisible(false);
    ui->ThousandTimesSpeed->setVisible(false);
    ui->TimeButton_1pm->setVisible(false);
    ui->TimeButton_2pm->setVisible(false);
}

System_CentralTimer_Connector::~System_CentralTimer_Connector()
{
    delete ui;
}

void System_CentralTimer_Connector::receiveDispatchSignal_test(int TrainNum_temp, bool redline_temp, QString trainDestination)
{
    qDebug() << "Dispatch signal received!";
    qDebug() << "Train Number: " << QString::number(TrainNum_temp);
    qDebug() << (redline_temp == true ? "Line: Red line" : "Line: Green line");
    qDebug() << "Destination: " << trainDestination;
    qDebug();

    //load track
    realTrackModel.loadRedLine();
    realTrackModel.loadGreenLine();
    realTrackModel.parseInfrastructure();
    realTrackModel.updateUI();
    realTrackModel.show();

    //find station number for routing
    int routeNum = findRoute(trainDestination, redline_temp);



    tcGUI = new TrainControllerGUI(TrainNum_temp);

    // tcGUI = new TrainControllerGUI();
    tcGUI->show();
    if(redline_temp)
    {
        qDebug() << "Track made on red line";
        Train *t = new Train(1, routeNum, !redline_temp, realTrackModel.redline, trainDestination); //redline
        tcGUI->setTrain(t);
    }
    else
    {
        qDebug() << "Track made on green line";
        Train *t = new Train(1, routeNum, !redline_temp, realTrackModel.greenline, trainDestination);
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
    if(tcGUI != NULL){
    tcGUI->timerEvent(NULL);
       }
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

void System_CentralTimer_Connector::on_pausePlayButton_clicked()
{
    if(isPaused == false)
    {
        isPaused = true;
        timer->stop();
        tcGUI->setPaused(true);
        ui->pausePlayButton->setText("Play");
    }
    else
    {
        isPaused = false;
        timer->start();
        tcGUI->setPaused(false);
        ui->pausePlayButton->setText("Pause");
    }
}

int findRoute(QString destination, bool isRedline)
{
    if(!isRedline)  //is greenline
    {
        if(destination == "Pioneer")
        {
            return 1;
        }
        else if(destination == "Edgebrook")
        {
            return 2;
        }
        else if(destination == "Station")
        {
            return 3;
        }
        else if(destination == "Whited")
        {
            return 4;
        }
        else if(destination == "South bank")
        {
            return 5;
        }
        else if(destination == "Central")
        {
            return 6;
        }
        else if(destination == "Inglewood")
        {
            return 7;
        }
        else if(destination == "Overbrook")
        {
            return 8;
        }
        else if(destination == "Glenbury")
        {
            return 9;
        }
        else if(destination == "Dormont")
        {
            return 10;
        }
        else if(destination == "Mt. Lebanon")
        {
            return 11;
        }
        else if(destination == "Poplar")
        {
            return 12;
        }
        else if(destination == "Castle Shannon")
        {
            return 13;
        }
        else
        {
            qDebug() <<"ERROR: Invalid destination:" + destination;
            return 1;
        }
    }
    else    //is redline
    {
        if(destination == "Shadyside")
        {
            return 14;
        }
        else if(destination == "Herron Ave")
        {
            return 15;
        }
        else if(destination == "Swissville")
        {
            return 16;
        }
        else if(destination == "Penn station")
        {
            return 17;
        }
        else if(destination == "Steel Plaza")
        {
            return 18;
        }
        else if(destination == "First Ave")
        {
            return 19;
        }
        else if(destination == "Station Square")
        {
            return 20;
        }
        else if(destination == "South Hills Junction")
        {
            return 21;
        }
        else if(destination == "Herron Ave")
        {
            return 22;
        }
        else
        {
            qDebug() <<"ERROR: Invalid destination:" + destination;
            return 1;
        }
    }

}

//internal slot - activated when user presses the CTC UI button
//shows the CTC test UI, makes connections
void System_CentralTimer_Connector::on_CTCTestUIButton_clicked()
{
    ctcTestUI = new CTC_TestUI();
    ctcTestUI->show();

    //connections
    QObject::connect(ctc, SIGNAL(sendTrackEditCommand(bool,int,bool)),ctcTestUI,SLOT(receiveTrackEdit(bool,int,bool)));
    QObject::connect(ctc,SIGNAL(sendSwitchEditCommand(bool,int,int)),ctcTestUI,SLOT(receiveSwitchEdit(bool,int,int)));
    QObject::connect(ctcTestUI, SIGNAL(sendOccupancies(QVector<bool>,QVector<bool>)), ctc, SLOT(receiveOccupancies(QVector<bool>,QVector<bool>)));
    QObject::connect(ctc, SIGNAL(sendAuthAndSpeed(bool,QVector<bool>,QVector<double>)), ctcTestUI, SLOT(receiveNewAuthority(bool,QVector<bool>,QVector<double>)));
}

