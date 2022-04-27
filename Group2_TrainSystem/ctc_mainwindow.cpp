#include "ctc_mainwindow.h"
#include "ui_ctc_mainwindow.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

CTC_MainWindow::CTC_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CTC_MainWindow)
{
    ui->setupUi(this);

    //initialize the UI to the correct values
    days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    initializeTrackVector();
    number = 0;
    ui->previousButton->setVisible(false);
    ui->NextButton->setVisible(false);
    trainSet = 0;
    trackSetRed = 0;
    trackSetGreen = 0;
    setSize = 20;
    TrainNumber = 0;

    //you WILL set the font to Consolas
    QFont font("Consolas",9);
    ui->DataLabel->setFont(font);
    ui->Data->setFont(font);

    //make a connection to make sure the view Trains function works properly
    QObject::connect(this, SIGNAL(sendTrainData(int,bool,QString)), this, SLOT(updateTrainDisplay()));
}

CTC_MainWindow::~CTC_MainWindow()
{
    delete ui;
}

//slot to receive time from the central timer
//inputs: day value, seconds since midnight
//Central Timer will periodically send the time data the CTC, CTC will update its own values
//Every time update, the CTC will check to see if there are any trains to update
void CTC_MainWindow::receiveTime(int day_temp, int secondsSinceMidnight_temp)
{
    currentDay = day_temp;
    currentSecondsSinceMidnight = secondsSinceMidnight_temp;
    displayTime();

    checkDispatch();
}

void CTC_MainWindow::on_actionDispatch_Train_triggered()
{
    //call a choose line window
    cl = new CTC_ChooseTrackLine();
    cl->show();


    //connect the signals generated from the choose line ui to the main window - different data will be sent to the dispatch window depending
    // on what the user selects
    QObject::connect(cl, SIGNAL(dispatchRed()), this, SLOT(RedLineSelected()));
    QObject::connect(cl, SIGNAL(dispatchGreen()), this, SLOT(GreenLineSelected()));

}

void CTC_MainWindow::RedLineSelected()
{
    //call a new dispatch window
    dp = new CTC_DispatchTrain();
    dp->show();

    //send the red line stations to the dispatch window
    QObject::connect(this, SIGNAL(sendStationData(bool,QVector<double>,QVector<QString>)),dp,SLOT(receiveStationData(bool,QVector<double>,QVector<QString>)));
    emit sendStationData(true,stationDistancesRed,stationNamesRed);

    //send current time to dispatch window
    QObject::connect(this, SIGNAL(sendInitialTime(int,int)), dp, SLOT(updateTimeDisplay(int,int)));
    emit sendInitialTime(currentDay,currentSecondsSinceMidnight);

    //if the dispatch window needs it, send the current time
    QObject::connect(dp, SIGNAL(requestSystemTime()), this, SLOT(receiveTimeRequest()));
    QObject::connect(this, SIGNAL(sendTime(int,int)),dp, SLOT(receiveSystemTime(int,int)));

    //connect the actual dispatch signals
    QObject::connect(dp, SIGNAL(dispatchImmediate(bool,double,int,QTime,QString)), this, SLOT(receiveDispatchImmediate(bool,double,int,QTime,QString)));
    QObject::connect(dp, SIGNAL(dispatchStandby(bool,double,int,int,QTime,QString)), this, SLOT(receiveDispatchStandby(bool,double,int,int,QTime,QString)));
    QObject::connect(dp, SIGNAL(dispatchSchedule(bool,double,int,int,QTime,int,QTime,QString)), this, SLOT(receiveDispatchSchedule(bool,double,int,int,QTime,int,QTime,QString)));

    //connect the signals for requesting and receiving the system mode
    QObject::connect(dp, SIGNAL(requestCTCMode()), this, SLOT(receiveModeRequest()));
    QObject::connect(this, SIGNAL(sendCTCmode(bool)), dp, SLOT(receiveCTCMode(bool)));
}

void CTC_MainWindow::GreenLineSelected()
{
    //call a new dispatch window
    dp = new CTC_DispatchTrain();
    dp->show();

    //send the green line stations to the dispatch window
    QObject::connect(this, SIGNAL(sendStationData(bool,QVector<double>,QVector<QString>)),dp,SLOT(receiveStationData(bool,QVector<double>,QVector<QString>)));
    emit sendStationData(false,stationDistancesGreen,stationNamesGreen);

    //send current time to dispatch window
    QObject::connect(this, SIGNAL(sendInitialTime(int,int)), dp, SLOT(updateTimeDisplay(int,int)));
    emit sendInitialTime(currentDay,currentSecondsSinceMidnight);

    //if the dispatch window needs it, send the current time
    QObject::connect(dp, SIGNAL(requestSystemTime()), this, SLOT(receiveTimeRequest()));
    QObject::connect(this, SIGNAL(sendTime(int,int)),dp, SLOT(receiveSystemTime(int,int)));

    //connect the actual dispatch signals
    QObject::connect(dp, SIGNAL(dispatchImmediate(bool,double,int,QTime,QString)), this, SLOT(receiveDispatchImmediate(bool,double,int,QTime,QString)));
    QObject::connect(dp, SIGNAL(dispatchStandby(bool,double,int,int,QTime,QString)), this, SLOT(receiveDispatchStandby(bool,double,int,int,QTime,QString)));
    QObject::connect(dp, SIGNAL(dispatchSchedule(bool,double,int,int,QTime,int,QTime,QString)), this, SLOT(receiveDispatchSchedule(bool,double,int,int,QTime,int,QTime,QString)));

    //connect the signals for requesting and receiving the system mode
    QObject::connect(dp, SIGNAL(requestCTCMode()), this, SLOT(receiveModeRequest()));
    QObject::connect(this, SIGNAL(sendCTCmode(bool)), dp, SLOT(receiveCTCMode(bool)));
}

void CTC_MainWindow::receiveDispatchImmediate(bool redline_temp, double sugg_speed_temp, int arrivalDate_temp, QTime arrivalTime_temp, QString destination_temp)
{
    cl->hide();

    //initialize a train class to be added to the train vectors
    Train_CTC tempTrain;

    //calculate the suggested speed vectors
    if (redline_temp == true)
    {
        //redline
        tempTrain.suggestedSpeedVectors = speedBasedVectorRed;
        for (unsigned int i = 0; i < speedBasedVectorRed.size(); i++)
        {
            for (unsigned int j = 0; j < speedBasedVectorRed[i].size(); j++)
            {
                tempTrain.suggestedSpeedVectors[i][j] = speedBasedVectorRed[i][j]*sugg_speed_temp;
            }
        }
    }
    else
    {
        //green line
        tempTrain.suggestedSpeedVectors = speedBaseVectorGreen;
        for (unsigned int i = 0; i < speedBaseVectorGreen.size(); i++)
        {
            for (unsigned int j = 0; j < speedBaseVectorGreen[i].size(); j++)
            {
                tempTrain.suggestedSpeedVectors[i][j] = speedBaseVectorGreen[i][j]*sugg_speed_temp;
            }
        }
    }

    //initialize everything else
    tempTrain.dispatchTimeMinute = 0;     //not needed here in an immediate dispatch
    tempTrain.redline = redline_temp;
    tempTrain.suggestedSpeed = sugg_speed_temp;
    tempTrain.currentBlock = (redline_temp == true ? 77 : 152);
    tempTrain.nextStation = (redline_temp == true ? nextStationsRed[0] : nextStationsGreen[0]);
    tempTrain.nextStationBlock = (redline_temp == true ? nextStationBlockRed[0] : nextStationBlockGreen[0]);
    tempTrain.progressIndex = 0;
    tempTrain.destination = destination_temp;
    tempTrain.ArriveDay = days[arrivalDate_temp];
    tempTrain.arrivalTime = arrivalTime_temp;
    tempTrain.progressIndex = 0;

    //check if block outside of yard is open
    if ((redline_temp == true ? TrackVectorRed[76].open : TrackVectorGreen[151].open) == true)
    {
        TrainNumber++;
        tempTrain.TrainNumber = TrainNumber;
        TrainsDispatched.push_back(tempTrain);
        emit sendAuthAndSpeed(redline_temp == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],tempTrain.suggestedSpeedVectors[0]);
        emit sendTrainData(TrainNumber,redline_temp, destination_temp);
    }
    else
    {
        //if it isn't, add train to the queue, wait for next opportunity
        TrainQueue.push_back(tempTrain);
    }
}

void CTC_MainWindow::receiveDispatchStandby(bool redline_temp, double sugg_speed_temp, int departTime_temp,int arrivalDate_temp, QTime arrivalTime_temp, QString destination_temp)
{
    cl->hide();

    //add train to list of trains on standby
    Train_CTC tempTrain;

    //calculate the suggested speed vectors
    if (redline_temp == true)
    {
        //redline
        tempTrain.suggestedSpeedVectors = speedBasedVectorRed;
        for (unsigned int i = 0; i < speedBasedVectorRed.size(); i++)
        {
            for (unsigned int j = 0; j < speedBasedVectorRed[i].size(); j++)
            {
                tempTrain.suggestedSpeedVectors[i][j] = speedBasedVectorRed[i][j]*sugg_speed_temp;
            }
        }
    }
    else
    {
        //green line
        tempTrain.suggestedSpeedVectors = speedBaseVectorGreen;
        for (unsigned int i = 0; i < speedBaseVectorGreen.size(); i++)
        {
            for (unsigned int j = 0; j < speedBaseVectorGreen[i].size(); j++)
            {
                tempTrain.suggestedSpeedVectors[i][j] = speedBaseVectorGreen[i][j]*sugg_speed_temp;
            }
        }
    }

    tempTrain.dispatchTimeMinute = departTime_temp;
    tempTrain.redline = redline_temp;
    tempTrain.suggestedSpeed = sugg_speed_temp;
    tempTrain.currentBlock = (redline_temp == true ? 77 : 152);
    tempTrain.nextStation = (redline_temp == true ? nextStationsRed[0] : nextStationsGreen[0]);
    tempTrain.nextStationBlock = (redline_temp == true ? nextStationBlockRed[0] : nextStationBlockGreen[0]);
    tempTrain.arrivalTime = arrivalTime_temp;
    tempTrain.ArriveDay = days[arrivalDate_temp];
    tempTrain.destination = destination_temp;
    tempTrain.progressIndex = 0;
    TrainStandby.push_back(tempTrain);
}

void CTC_MainWindow::initializeTrackVector()
{
    //go through every block and station in the Pittsburgh RED LINE rail system
    TrackBlock tempTrack;

    //define the list of station names HERE
    stationNamesRed = {"Shadyside","Herron Ave","Swissville","Penn station","Steel Plaza","First Ave","Station Sqaure","South Hills Junction"};
    stationNamesGreen = {"Pioneer","Edgebrook","Station","Whited","South bank","Central","Inglewood","Overbrook","Glenbury","Dormont"
                         ,"Mt. Lebanon", "Poplar","Castle Shannon"};


    //initialize the authorities and distances for every station from the YARD
    //parallel block means one track going one direction, and other block going the other direction
    stationDistancesGreen = {15452.6,14652.6,13852.6,12652.6,18552.6,11043.6,10593.6,10143.6,300,1300,1700,4586.6,5211.6}; //measured in km
    stationDistancesRed = {250,625,1875,2225,2745,3265,3465,4183.2};


    QVector<QString> BlockNamesRed = {"Red A1","Red A2","Red A3","Red B4","Red B5","Red B6","Red C7","Red C8","Red C9","Red D10","Red D11",
                                      "Red D12","Red E13","Red E14","Red E15","Red F16","Red F17","Red F18","Red F19","Red F20","Red G21","Red G22",
                                      "Red G23","Red H24","Red H25","Red H26","Red H27","Red H28","Red H29","Red H30","Red H31","Red H32","Red H33",
                                      "Red H34", "Red H35","Red H36","Red H37","Red H38","Red H39","Red H40","Red H41", "Red H42","Red H43","Red H44",
                                      "Red H45","Red I46","Red I47","Red I48","Red J49","Red J50","Red J51","Red J52","Red J53","Red J54", "Red K55",
                                      "Red K56","Red K57","Red L58","Red L59","Red L60","Red M61","Red M62","Red M63","Red N64","Red N65","Red N66",
                                      "Red O67","Red P68","Red P69","Red P70","Red Q71","Red R72","Red S73","Red S74","Red S75","Red T76","Red AA1"};

    QVector<QString> BlockNamesGreen = {"Green A1","Green A2","Green A3","Green B4","Green B5","Green B6","Green C7", "Green C8",
                                        "Green C9","Green C10","Green C11","Green C12","Green D13","Green D14","Green D15","Green D16","Green E17","Green E18",
                                        "Green E19","Green E20", "Green F21","Green F22","Green F23","Green F24","Green F25","Green F26","Green F27","Green F28",
                                        "Green G29","Green G30","Green G31","Green G32","Green H33","Green H34","Green H35","Green I36","Green I37","Green I38",
                                        "Green I39", "Green I40","Green I41","Green I42","Green I43","Green I44","Green I45","Green I46","Green I47","Green I48",
                                        "Green I49","Green I50","Green I51","Green I52","Green I53","Green I54","Green I55","Green I56","Green I57",
                                        "Green J58","Green J59","Green J60","Green J61","Green J62","Green K63","Green K64","Green K65","Green K66","Green K67",
                                        "Green K68","Green L69","Green L70","Green L71","Green L72","Green L73","Green M74","Green M75","Green M76","Green N77",
                                        "Green N78","Green N79","Green N80","Green N81","Green N82","Green N83","Green N84","Green N85","Green O86", "Green O87",
                                        "Green O88","Green P89","Green P90","Green P91","Green P92","Green P93","Green P94","Green P95","Green P96","Green P97",
                                        "Green Q98","Green Q99","Green Q100","Green R101","Green S102","Green S103","Green S104","Green T105","Green T106",
                                        "Green T107","Green T108","Green T109","Green U110","Green U111","Green U112","Green U113","Green U114","Green U115",
                                        "Green U116","Green V117","Green V118","Green V119","Green V120","Green V121","Green W122","Green W123","Green W124",
                                        "Green W125","Green W126","Green W127","Green W128","Green W129","Green W130","Green W131","Green W132","Green W133",
                                        "Green W134","Green W135","Green W136","Green W137","Green W138","Green W139","Green W140","Green W141","Green W142",
                                        "Green W143","Green X144","Green X145","Green X146","Green Y147","Green Y148","Green Y149","Green Z150","Green AA1","Green AA2"};



    //loop through both vectors and add all data
    for (unsigned i = 0; i < BlockNamesRed.size(); i++)
    {
        tempTrack.name = BlockNamesRed[i];
        tempTrack.occupancy = 0;
        tempTrack.open = true;
        TrackVectorRed.push_back(tempTrack);
    }

    //loop through both vectors and add all data
    for (unsigned i = 0; i < BlockNamesGreen.size(); i++)
    {
        tempTrack.name = BlockNamesGreen[i];
        tempTrack.occupancy = 0;
        tempTrack.open = true;
        TrackVectorGreen.push_back(tempTrack);
    }



    //new functionality - all authorities and speed between stations in GREEN LINE

    //all steps:
    //1). yard to glebury - 152 --> 63-65, 63,64,65
    //2). glenbury to dormont = 66-73, 71-72-73
    //3). dormont to mt lebanon - 74-77, 75-76-77
    //4). mt lebanon to poplar - 78-88, 86-87-88
    //5). poplar to castle shannon = 89-96, 94-95-96
    //6). castle shannon to dormont = 97-105, 103-104-105
    //7). dormont to glenbury = 106-114, 112-113-114
    //8). glenbury to overbrook = 115-123, 121-122-123
    //9). overbrook to inglewood = 124-132, 130-131-132
    //10). inglewood to central = 133-141, 139-140-141
    //11). central to whited = 142-150 --> 29-22, 24-23-22
    //12). whited to station = 21-16, 18-17-16
    //13). station to edgebrook = 15-9, 11-10-9
    //14). edgebrook to pioneer = 8-2, 4-3-2
    //15). pioneer to station = 1 --> 13-16, 14-15-16
    //16). station to whited = 17-22, 20-21-22
    //17). whited to south bank = 23-31, 29-30-31
    //18). south bank to central = 32-39, 37-38-39
    //19). central to inglewood = 40-48, 46-47-48
    //20). inglewood to overbrook = 49-57, 55-56-57
    //21). overbrook to yard = 151

    //authority vectors in this vector will be the process listed above
    QVector<bool> tempAuthorityVector = QVector<bool>(152,false);
    QVector<double> tempSpeedVector = QVector<double>(152,false);

    //step 1
    tempAuthorityVector[151] = true;
    tempSpeedVector[151] = 1;
    for (unsigned int i = 62; i < 65; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[62] = 0.5;
    tempSpeedVector[63] = 0.25;
    tempSpeedVector[64] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Glenbury");
    nextStationBlockGreen.push_back(64);

    //step 2
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 65; i < 73; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Dormont");
    nextStationBlockGreen.push_back(72);

    //step 3
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 73; i < 77; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Mt. Lebanon");
    nextStationBlockGreen.push_back(76);


    //step 4
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 77; i < 88; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Poplar");
    nextStationBlockGreen.push_back(87);

    //step 5
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 88; i < 96; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Castle Shannon");
    nextStationBlockGreen.push_back(95);

    //step 6
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 96; i < 105; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Dormont");
    nextStationBlockGreen.push_back(104);

    //step 7
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 105; i < 114; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Glenbury");
    nextStationBlockGreen.push_back(113);

    //step 8
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 114; i < 123; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Overbrook");
    nextStationBlockGreen.push_back(122);

    //step 9
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 123; i < 132; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Inglewood");
    nextStationBlockGreen.push_back(131);

    //step 10
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 132; i < 141; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Central");
    nextStationBlockGreen.push_back(140);

    //step 11
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 141; i < 149; i++)
    {
        tempAuthorityVector[i] = true;
    }
    for (unsigned int i = 21; i < 29; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Whited");
    nextStationBlockGreen.push_back(21);

    //step 12
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 15; i < 21; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Station");
    nextStationBlockGreen.push_back(15);

    //step 13
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 8; i < 15; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Edgebrook");
    nextStationBlockGreen.push_back(8);

    //step 14
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 1; i < 8; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Pioneer");
    nextStationBlockGreen.push_back(1);

    //step 15
    tempAuthorityVector = QVector<bool>(152,false);
    tempAuthorityVector[0] = true;
    for (unsigned int i = 12; i < 16; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Station");
    nextStationBlockGreen.push_back(15);

    //step 16
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 16; i < 22; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Whited");
    nextStationBlockGreen.push_back(21);

    //step 17
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 22; i < 31; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("South Bank");
    nextStationBlockGreen.push_back(30);

    //step 18
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 31; i < 39; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Central");
    nextStationBlockGreen.push_back(38);

    //step 19
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 39; i < 48; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Inglewood");
    nextStationBlockGreen.push_back(47);

    //step 20
    tempAuthorityVector = QVector<bool>(152,false);
    for (unsigned int i = 48; i < 57; i++)
    {
        tempAuthorityVector[i] = true;
    }
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Overbrook");
    nextStationBlockGreen.push_back(56);

    //step 21
    tempAuthorityVector = QVector<bool>(152,false);
    tempAuthorityVector[150] = true;
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Yard");
    //nextStationBlock.push_back(64);



    //RED LINE

    //step 1 - 77-->9,8,7, 9-8-7
    tempAuthorityVector = QVector<bool>(77,false);
    tempSpeedVector = QVector<double>(77,false);
    tempAuthorityVector[76] = true;
    tempSpeedVector[76] = 1;
    for (unsigned int i = 6; i < 9; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[8] = 0.5;
    tempSpeedVector[7] = 0.25;
    tempSpeedVector[6] = 0;
    speedBasedVectorRed.push_back(tempSpeedVector);
    authorityBetweenStationsRed.push_back(tempAuthorityVector);
    nextStationsRed.push_back("Shadyside");
    nextStationBlockRed.push_back(8);



}

void CTC_MainWindow::on_previousButton_clicked()
{
    if (trainSet != 0)
    {
        trainSet--;
    }

    if (trackSetRed != 0)
    {
        trackSetRed--;
    }

    if (trackSetGreen != 0)
    {
        trackSetGreen--;
    }

    if (ui->DataLabel->text() == "Train Statuses")
    {
        on_actionView_Train_Statuses_triggered();
    }
    else if (ui->DataLabel->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Statuses_triggered();
    }
    else if (ui->DataLabel->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Statuses_triggered();
    }
}

void CTC_MainWindow::on_NextButton_clicked()
{
    if (setSize*(trainSet+1) <= TrainsDispatched.size()-1)
    {
        trainSet++;
    }

    if (setSize*(trackSetRed+1) <= TrackVectorRed.size()-1)
    {
        trackSetRed++;
    }

    if (setSize*(trackSetGreen+1) <= TrackVectorGreen.size()-1)
    {
        trackSetGreen++;
    }

    if (ui->DataLabel->text() == "Train Statuses")
    {
        on_actionView_Train_Statuses_triggered();
    }
    else if (ui->DataLabel->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Statuses_triggered();
    }
    else if (ui->DataLabel->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Statuses_triggered();
    }
}

void CTC_MainWindow::on_actionView_Green_Line_Statuses_triggered()
{
    //display all Tracks Blocks/ Stations and their statuses as a string on the GUI screen
    //do not include the authority value - used for internal purposes

    QString TrackString = "Track Name    Status    Occupancy    \n";
    //14, 10, 13, 12, 28, 21, 11, 18

    trainSet = 0;
    trackSetRed = 0;
    for (unsigned int i = setSize*trackSetGreen; i < qMin(TrackVectorGreen.size(), setSize*trackSetGreen+setSize); i++)
    {
        TrackString += TrackVectorGreen[i].name + spaces(14-TrackVectorGreen[i].name.length());
        TrackString += (TrackVectorGreen[i].open == true ? "Open" : "Closed") + spaces(10-(TrackVectorGreen[i].open == true ? 4 : 5));
        TrackString += QString::number(TrackVectorGreen[i].occupancy) + spaces(13-QString::number(TrackVectorGreen[i].occupancy).length()) + "\n";
    }


    ui->DataLabel->setText("Green Line Track Block Statuses");
    ui->Data->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}

void CTC_MainWindow::on_actionView_Red_Line_Statuses_triggered()
{
    //display all Tracks Blocks/ Stations and their statuses as a string on the GUI screen
    //do not include the authority value - used for internal purposes

    QString TrackString = "Track Name    Status    Occupancy    \n";
    //14, 10, 13


    trainSet = 0;
    trackSetGreen = 0;
    for (unsigned int i = setSize*trackSetRed; i < qMin(TrackVectorRed.size(), setSize*trackSetRed+setSize); i++)
    {
        TrackString += TrackVectorRed[i].name + spaces(14-TrackVectorRed[i].name.length());
        TrackString += (TrackVectorRed[i].open == true ? "Open" : "Closed") + spaces(10-(TrackVectorRed[i].open == true ? 4 : 5));
        TrackString += QString::number(TrackVectorRed[i].occupancy) + spaces(13-QString::number(TrackVectorRed[i].occupancy).length()) + "\n";
    }


    ui->DataLabel->setText("Red Line Track Block Statuses");
    ui->Data->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}

void CTC_MainWindow::updateTrainDisplay()
{
    if (ui->DataLabel->text() == "Dispatched Trains")
    {
        on_actionView_Train_Statuses_triggered();
    }
}

void CTC_MainWindow::on_actionView_Train_Statuses_triggered()
{
    //Display the values of the trains you have dispatched by looping through a vector of dispatch Train values

    QString displayString = "Train Number    Line    Current Block    Next Station               Destination                Arrival Date    Arrival Time    \n";
    //16,8,17,27,27,16,16

    for (unsigned int i = 0; i < TrainsDispatched.size(); i++)
    {
        displayString += QString::number(TrainsDispatched[i].TrainNumber) + spaces(16-QString::number(TrainsDispatched[i].TrainNumber).size());
        displayString += (TrainsDispatched[i].redline == true ? "Red" : "Green") + spaces(8 - (TrainsDispatched[i].redline == true ? 3 : 5));
        displayString += QString::number(TrainsDispatched[i].currentBlock) + spaces(17 - QString::number(TrainsDispatched[i].currentBlock).size());
        displayString += TrainsDispatched[i].nextStation + spaces(27 - TrainsDispatched[i].nextStation.size());
        displayString += TrainsDispatched[i].destination + spaces(27 - TrainsDispatched[i].destination.size());
        displayString += TrainsDispatched[i].ArriveDay + spaces(16-TrainsDispatched[i].ArriveDay.size());
        displayString += TrainsDispatched[i].arrivalTime.toString("hh:mm A") + "\n";
    }

    ui->DataLabel->setText("Dispatched Trains");
    ui->Data->setText(displayString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}

QString CTC_MainWindow::spaces(int num)
{
    QString temp = "";
    for (int i = 0; i < num; i++)
    {
        temp += " ";
    }
    return temp;
}

void CTC_MainWindow::displayTime()
{
    //display the time on the central timer module
    ui->DayLabel->setText(days[currentDay]);
    ui->TimeLabel->setText(QTime::fromMSecsSinceStartOfDay(currentSecondsSinceMidnight*1000).toString("h:mm:ss A"));
}

void CTC_MainWindow::checkDispatch()
{
    //loop through all track vectors and dispatch one of them

    //highest priority is the queue - trains that needed to be dispatched already have experienced delays
    if (TrainQueue.size() != 0)
    {
        if ((TrainQueue[0].redline == true ? TrackVectorRed[76].open : TrackVectorGreen[151].open) == true)
        {
            TrainNumber++;
            TrainQueue[0].TrainNumber = TrainNumber;
            TrainsDispatched.push_back(TrainQueue[0]);
            emit sendAuthAndSpeed(TrainQueue[0].redline == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],TrainQueue[0].suggestedSpeedVectors[0]);
            emit sendTrainData(TrainQueue[0].TrainNumber,TrainQueue[0].redline, TrainQueue[0].destination);

            //remove this train from the list, break out of the function
            TrainQueue.removeFirst();
            //return;
        }
    }

    //next, loop through the list of trains on standby
    int tempMinute = (currentDay*86400 + currentSecondsSinceMidnight)/60;
    for (unsigned int i = 0; i < TrainStandby.size(); i++)
    {
        if (tempMinute == TrainStandby[i].dispatchTimeMinute)
        {
            if ((TrainStandby[i].redline == true ? TrackVectorRed[76].open : TrackVectorGreen[151].open) == true)
            {
                TrainNumber++;
                TrainStandby[i].TrainNumber = TrainNumber;
                TrainsDispatched.push_back(TrainStandby[i]);
                emit sendAuthAndSpeed(TrainStandby[i].redline == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],TrainStandby[i].suggestedSpeedVectors[0]);
                emit sendTrainData(TrainStandby[i].TrainNumber,TrainStandby[i].redline,TrainStandby[i].destination);

                //remove this train from the list, break out of the function
                TrainStandby.remove(i);
                //return;
            }
            else
            {
                TrainQueue.push_back(TrainStandby[i]);
            }
        }
    }

    //finally, (lowest priority) loop through trains in the schedule, only in automatic mode
    if (ui->actionAutomatic->isChecked() == true)
    {
        for (unsigned int i = 0; i < TrainSchedule.size(); i++)
        {
            if (tempMinute == TrainSchedule[i].dispatchTimeMinute)
            {
                if (TrainSchedule[i].dispatched == false)
                {
                    if ((TrainSchedule[i].redline == true ? TrackVectorRed[76].open : TrackVectorGreen[151].open) == true)
                    {
                        TrainsDispatched.push_back(TrainSchedule[i]);
                        emit sendAuthAndSpeed(TrainSchedule[0].redline == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],TrainSchedule[0].suggestedSpeedVectors[0]);
                        emit sendTrainData(TrainSchedule[i].TrainNumber,TrainSchedule[i].redline,TrainSchedule[i].destination);
                        TrainSchedule[i].dispatched = true;
                    }
                    else
                    {
                        TrainQueue.push_back(TrainSchedule[i]);
                    }
                }
            }
        }
    }
}

void CTC_MainWindow::receiveTimeRequest()
{
    emit sendTime(currentDay,currentSecondsSinceMidnight);
}

//slot to receive the data about the track block from wayside - update internal TrackBlockVector
//input - data about SINGLE trackblock
//no outputs
void CTC_MainWindow::receiveBlockStatus(bool redline_temp, int trackNumber, int occupancy_temp, bool open_temp)
{
    if (redline_temp == true)
    {
        TrackVectorRed[trackNumber].occupancy = occupancy_temp;
        TrackVectorRed[trackNumber].open = open_temp;
    }
    else
    {
        TrackVectorGreen[trackNumber].occupancy = occupancy_temp;
        TrackVectorGreen[trackNumber].open = open_temp;
    }
}

void CTC_MainWindow::on_actionView_Schedule_triggered()
{
    //view the list of scheduled trains
    //Display the values of the trains you have dispatched by looping through a vector of dispatch Train values

    QString displayString = "Train Number    Line    Departure Day    Departure Time    Arrival Day    Arrival Time    Destination                \n";
    //16,8,17,18,15,16,27

    for (unsigned int i = 0; i < TrainSchedule.size(); i++)
    {
        displayString += QString::number(TrainSchedule[i].TrainNumber) + spaces(16-QString::number(TrainSchedule[i].TrainNumber).size());
        displayString += (TrainSchedule[i].redline == true ? "Red" : "Green") + spaces(8 - (TrainSchedule[i].redline == true ? 3 : 5));
        displayString += TrainSchedule[i].DepartDay + spaces(17-TrainSchedule[i].DepartDay.size());
        displayString += TrainSchedule[i].departureTime.toString("hh:mm A") + spaces(18-TrainSchedule[i].departureTime.toString("hh:mm A").size());
        displayString += TrainSchedule[i].ArriveDay + spaces(15-TrainSchedule[i].ArriveDay.size());
        displayString += TrainSchedule[i].arrivalTime.toString("hh:mm A") + spaces(16-TrainSchedule[i].arrivalTime.toString("hh:mm A").size());
        displayString += TrainSchedule[i].destination + spaces(27 - TrainSchedule[i].destination.size()) + "\n";
    }

    ui->DataLabel->setText("Train Schedule");
    ui->Data->setText(displayString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}

void CTC_MainWindow::receiveDispatchSchedule(bool redline_temp, double speed_temp, int departTimeMinute_temp,int arriveDate_temp, QTime arrivalTime_temp,int departDate_temp, QTime departTime_temp, QString destination_temp)
{
    cl->hide();

    //calculate the suggested speed vectors
    Train_CTC tempTrain;

    if (redline_temp == true)
    {
        //redline
        tempTrain.suggestedSpeedVectors = speedBasedVectorRed;
        for (unsigned int i = 0; i < speedBasedVectorRed.size(); i++)
        {
            for (unsigned int j = 0; j < speedBasedVectorRed[i].size(); j++)
            {
                tempTrain.suggestedSpeedVectors[i][j] = speedBasedVectorRed[i][j]*speed_temp;
            }
        }
    }
    else
    {
        //green line
        tempTrain.suggestedSpeedVectors = speedBaseVectorGreen;
        for (unsigned int i = 0; i < speedBaseVectorGreen.size(); i++)
        {
            for (unsigned int j = 0; j < speedBaseVectorGreen[i].size(); j++)
            {
                tempTrain.suggestedSpeedVectors[i][j] = speedBaseVectorGreen[i][j]*speed_temp;
            }
        }
    }

    //add train to list of trains on standby
    TrainNumber++;
    tempTrain.TrainNumber = TrainNumber;
    tempTrain.dispatchTimeMinute = departTimeMinute_temp;
    tempTrain.redline = redline_temp;
    tempTrain.suggestedSpeed = speed_temp;
    tempTrain.currentBlock = (redline_temp == true ? 77 : 152);
    tempTrain.nextStation = (redline_temp == true ? nextStationsRed[0] : nextStationsGreen[0]);
    tempTrain.nextStationBlock = (redline_temp == true ? nextStationBlockRed[0] : nextStationBlockGreen[0]);
    tempTrain.arrivalTime = arrivalTime_temp;
    tempTrain.destination = destination_temp;
    tempTrain.departureTime = departTime_temp;
    tempTrain.ArriveDay = days[arriveDate_temp];
    tempTrain.DepartDay = days[departDate_temp];
    tempTrain.dispatched = false;
    tempTrain.progressIndex = 0;
    TrainSchedule.push_back(tempTrain);

    //if the user is already viewing the train schedule, update the list
    if (ui->DataLabel->text() == "Train Schedule")
    {
        on_actionView_Schedule_triggered();
    }
}

void CTC_MainWindow::on_actionManual_triggered()
{
    ui->actionAutomatic->setChecked(false);
    ui->CTCModeLabel->setText("Manual Mode");
}

void CTC_MainWindow::on_actionAutomatic_triggered()
{
    ui->actionManual->setChecked(false);
    ui->CTCModeLabel->setText("Automatic Mode");
}

void CTC_MainWindow::receiveModeRequest()
{
    emit sendCTCmode(ui->actionManual->isChecked());
}

