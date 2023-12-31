#include "ctc_mainwindow.h"
#include "ui_ctc_mainwindow.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

//constructor for the main window UI
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

//destructor for the main window UI
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

    //dispatch trains if needed
    checkDispatch();

    //update track occupancies and authority

    //update next train block values if needed
    checkNextBlocks();
}

//internal slot - runs when the Dispatch Train button from the menu is pressed
//no inputs/outputs
//runs the Choose Track Line UI
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

//internal slot - runs when the user selects "Red Line" in the Choose Track Line UI
//no inputs/outputs
//shows the dispatch UI, makes the required connections
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

//internal slot - runs when the user selects "Green Line" in the Choose Track Line UI
//no inputs/outputs
//shows the dispatch UI, makes the required connections
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

//internal slot - runs when the Dispatch UI sends a "dispatch immediate" signal - meaning the train should leave right now
//inputs - which line the train is on, a suggested speed value, an arrival day, an arrival time, and the destination
//intializes all required variables for a train - including all the suggested speed vectors it will send
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
                if (speedBasedVectorRed[i][j] != 0)
                {
                    tempTrain.suggestedSpeedVectors[i][j] = speedBasedVectorRed[i][j]*sugg_speed_temp;
                }
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
                if (speedBaseVectorGreen[i][j] != 0)
                {
                    tempTrain.suggestedSpeedVectors[i][j] = speedBaseVectorGreen[i][j]*sugg_speed_temp;
                }
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
    tempTrain.routeIndex = 0;

    //check if block outside of yard is open
    if ((redline_temp == true ? TrackVectorRed[76].open : TrackVectorGreen[151].open) == true)
    {
        TrainNumber++;
        tempTrain.TrainNumber = TrainNumber;
        TrainsDispatched.push_back(tempTrain);
        emit sendAuthAndSpeed(redline_temp,redline_temp == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],tempTrain.suggestedSpeedVectors[0]);
        emit sendTrainData(TrainNumber,redline_temp, destination_temp);
    }
    else
    {
        //if it isn't, add train to the queue, wait for next opportunity
        TrainQueue.push_back(tempTrain);
    }
}

//internal slot - runs when the Dispatch UI sends a "Dispatch Standy" signal - meaning the train will dispatch at a future time
//inputs - which line the train is on, a suggested speed value, the depart time in minutes since 12:00am Monday, an arrival date, an arrival time, and a destination
//initializes the values for the train, and adds the given values, including vectors of suggested speed
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
                if (speedBasedVectorRed[i][j] != 0)
                {
                    tempTrain.suggestedSpeedVectors[i][j] = speedBasedVectorRed[i][j]*sugg_speed_temp;
                }
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
                if (speedBaseVectorGreen[i][j] != 0)
                {
                    tempTrain.suggestedSpeedVectors[i][j] = speedBaseVectorGreen[i][j]*sugg_speed_temp;
                }
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
    tempTrain.routeIndex = 0;
    TrainStandby.push_back(tempTrain);
}

//this function will run in the constructor
//no inputs and outputs
//initialized the station names and distances, the block names, the routes (in terms of block numbers, authority, and suggested speed values)
// as well as the occupancy and status vectors for the track blocks
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



    //define the route that the train will take in the green line - a vector of track block indexes
    greenRoute.push_back(152);
    for (unsigned int i = 63; i <= 100; i++)
    {
        greenRoute.push_back(i);
    }
    for (unsigned int i = 85; i >= 77; i--)
    {
        greenRoute.push_back(i);
    }
    for (unsigned int i = 101; i <= 150; i++)
    {
        greenRoute.push_back(i);
    }
    for (unsigned int i = 29; i >= 1; i--)
    {
        greenRoute.push_back(i);
    }
    for (unsigned int i = 13; i <= 57; i++)
    {
        greenRoute.push_back(i);
    }
    greenRoute.push_back(151);

    /*
    for (unsigned int i = 0; i < greenRoute.size(); i++)
    {
        qDebug() << greenRoute[i];
    }
    */

    //int pioneerBlockNumbers[139] = {152, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
    //QVector<int> greenRoute = {152,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90}


    //new functionality - all authorities and speed between stations in GREEN LINE

    //all steps:
    //1). yard to glebury - 152 --> 63-65, 63,64,65
    //2). glenbury to dormont = 66-73, 71-72-73
    //3). dormont to mt lebanon - 74-77, 75-76-77
    //4). mt lebanon to poplar - 78-88, 86-87-88
    //5). poplar to castle shannon = 89-96, 94-95-96
    //6). castle shannon to mt lebanon = 97-100-->85-77, 79-78-77
    //7). mount lebanon to dormont = 101-105, 103-104-105
    //8). dormont to glenbury = 106-114, 112-113-114
    //9). glenbury to overbrook = 115-123, 121-122-123
    //10). overbrook to inglewood = 124-132, 130-131-132
    //11). inglewood to central = 133-141, 139-140-141
    //12). central to whited = 142-150 --> 29-22, 24-23-22
    //13). whited to station = 21-16, 18-17-16
    //14). station to edgebrook = 15-9, 11-10-9
    //15). edgebrook to pioneer = 8-2, 4-3-2
    //16). pioneer to station = 1 --> 13-16, 14-15-16
    //17). station to whited = 17-22, 20-21-22
    //18). whited to south bank = 23-31, 29-30-31
    //19). south bank to central = 32-39, 37-38-39
    //20). central to inglewood = 40-48, 46-47-48
    //21). inglewood to overbrook = 49-57, 55-56-57
    //22). overbrook to yard = 151

    //authority vectors in this vector will be the process listed above
    QVector<bool> tempAuthorityVector = QVector<bool>(152,false);
    QVector<double> tempSpeedVector = QVector<double>(152,0);

    //make this code extendable: define the multiplication of the the speed two blocks and one block before the station for the train to
    // slow down in it's automatic mode
    double speedTwoBlockBefore = 0.5;
    double speedOneBlockBefore = 0.25;

    //step 1
    tempAuthorityVector[151] = true;
    tempSpeedVector[151] = 1;
    for (unsigned int i = 62; i < 65; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[62] = speedTwoBlockBefore;
    tempSpeedVector[63] = speedOneBlockBefore;
    tempSpeedVector[64] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Glenbury");
    nextStationBlockGreen.push_back(64);

    //step 2
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 65; i < 73; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[70] = speedTwoBlockBefore;
    tempSpeedVector[71] = speedOneBlockBefore;
    tempSpeedVector[72] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Dormont");
    nextStationBlockGreen.push_back(72);

    //step 3
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 73; i < 77; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[74] = speedTwoBlockBefore;
    tempSpeedVector[75] = speedOneBlockBefore;
    tempSpeedVector[76] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Mt. Lebanon");
    nextStationBlockGreen.push_back(76);


    //step 4
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 77; i < 88; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[85] = speedTwoBlockBefore;
    tempSpeedVector[86] = speedOneBlockBefore;
    tempSpeedVector[87] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Poplar");
    nextStationBlockGreen.push_back(87);

    //step 5
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 88; i < 96; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[93] = speedTwoBlockBefore;
    tempSpeedVector[94] = speedOneBlockBefore;
    tempSpeedVector[95] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Castle Shannon");
    nextStationBlockGreen.push_back(95);

    //step 6
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 96; i < 100; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    for (unsigned int i = 76; i < 85; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[78] = speedTwoBlockBefore;
    tempSpeedVector[77] = speedOneBlockBefore;
    tempSpeedVector[76] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Mt. Lebanon");
    nextStationBlockGreen.push_back(76);

    //step 7
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 100; i < 105; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[102] = speedTwoBlockBefore;
    tempSpeedVector[103] = speedOneBlockBefore;
    tempSpeedVector[104] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Dormont");
    nextStationBlockGreen.push_back(104);

    //step 8
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 105; i < 114; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[111] = speedTwoBlockBefore;
    tempSpeedVector[112] = speedOneBlockBefore;
    tempSpeedVector[113] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Glenbury");
    nextStationBlockGreen.push_back(113);

    //step 9
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 114; i < 123; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[120] = speedTwoBlockBefore;
    tempSpeedVector[121] = speedOneBlockBefore;
    tempSpeedVector[122] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Overbrook");
    nextStationBlockGreen.push_back(122);

    //step 10
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 123; i < 132; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[129] = speedTwoBlockBefore;
    tempSpeedVector[130] = speedOneBlockBefore;
    tempSpeedVector[131] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Inglewood");
    nextStationBlockGreen.push_back(131);

    //step 11
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 132; i < 141; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[138] = speedTwoBlockBefore;
    tempSpeedVector[139] = speedOneBlockBefore;
    tempSpeedVector[140] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Central");
    nextStationBlockGreen.push_back(140);

    //step 12
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 141; i < 150; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    for (unsigned int i = 21; i < 29; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[23] = speedTwoBlockBefore;
    tempSpeedVector[22] = speedOneBlockBefore;
    tempSpeedVector[21] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Whited");
    nextStationBlockGreen.push_back(21);

    //step 13
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 15; i < 21; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[17] = speedTwoBlockBefore;
    tempSpeedVector[16] = speedOneBlockBefore;
    tempSpeedVector[15] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Station");
    nextStationBlockGreen.push_back(15);

    //step 14
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 8; i < 15; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[10] = speedTwoBlockBefore;
    tempSpeedVector[9] = speedOneBlockBefore;
    tempSpeedVector[8] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Edgebrook");
    nextStationBlockGreen.push_back(8);

    //step 15
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 1; i < 8; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[3] = speedTwoBlockBefore;
    tempSpeedVector[2] = speedOneBlockBefore;
    tempSpeedVector[1] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Pioneer");
    nextStationBlockGreen.push_back(1);

    //step 16
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    tempAuthorityVector[0] = true;
    tempSpeedVector[0] = 1;
    for (unsigned int i = 12; i < 16; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[13] = speedTwoBlockBefore;
    tempSpeedVector[14] = speedOneBlockBefore;
    tempSpeedVector[15] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Station");
    nextStationBlockGreen.push_back(15);

    //step 17
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 16; i < 22; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[19] = speedTwoBlockBefore;
    tempSpeedVector[20] = speedOneBlockBefore;
    tempSpeedVector[21] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Whited");
    nextStationBlockGreen.push_back(21);

    //step 18
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 22; i < 31; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[28] = speedTwoBlockBefore;
    tempSpeedVector[29] = speedOneBlockBefore;
    tempSpeedVector[30] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("South Bank");
    nextStationBlockGreen.push_back(30);

    //step 19
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 31; i < 39; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[36] = speedTwoBlockBefore;
    tempSpeedVector[37] = speedOneBlockBefore;
    tempSpeedVector[38] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Central");
    nextStationBlockGreen.push_back(38);

    //step 20
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 39; i < 48; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[45] = speedTwoBlockBefore;
    tempSpeedVector[46] = speedOneBlockBefore;
    tempSpeedVector[47] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Inglewood");
    nextStationBlockGreen.push_back(47);

    //step 21
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    for (unsigned int i = 48; i < 57; i++)
    {
        tempAuthorityVector[i] = true;
        tempSpeedVector[i] = 1;
    }
    tempSpeedVector[54] = speedTwoBlockBefore;
    tempSpeedVector[55] = speedOneBlockBefore;
    tempSpeedVector[56] = 0;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Overbrook");
    nextStationBlockGreen.push_back(56);

    //step 22
    tempAuthorityVector = QVector<bool>(152,false);
    tempSpeedVector = QVector<double>(152,0);
    tempAuthorityVector[150] = true;
    tempSpeedVector[150] = 1;
    speedBaseVectorGreen.push_back(tempSpeedVector);
    authorityBetweenStationsGreen.push_back(tempAuthorityVector);
    nextStationsGreen.push_back("Yard");
    nextStationBlockGreen.push_back(151);

    /*
    //temp: test if authority is correct in every scenario
    for (unsigned int i = 0; i < authorityBetweenStationsGreen.size(); i++)
    {
        qDebug() << "Step " << i+1 << ": " << nextStationsGreen[i] << ", Block " << nextStationBlockGreen[i]+1;
        for (unsigned int j = 0; j < authorityBetweenStationsGreen[i].size(); j++)
        {
            qDebug() << "Block " << j+1 << ": " << authorityBetweenStationsGreen[i][j];
        }
        qDebug();
    }*/

    /*
    //temp: test if speed is correct in every scenario
    for (unsigned int i = 0; i < speedBaseVectorGreen.size(); i++)
    {
        qDebug() << "Step " << i+1 << ": " << nextStationsGreen[i] << ", Block " << nextStationBlockGreen[i]+1;
        for (unsigned int j = 0; j < speedBaseVectorGreen[i].size(); j++)
        {
            qDebug() << "Block " << j+1 << ": " << speedBaseVectorGreen[i][j];
        }
        qDebug();
    }
    */


    //ROUTING AND SPEED RED LINE

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


    //initialize occupancy and open/close vectors for the track
    greenTrackOccupancies = QVector<bool>(152,false);
    redTrackOccupancies = QVector<bool>(77,false);
    greenTrackOpenClose = QVector<bool>(152,false);
    redTrackOpenClose = QVector<bool>(77,false);
}

//internal slot - runs when the user presses the "Previous" button
//no inputs/outputs
//navigates through the lists of the track blocks/ dispatched trains / train schedule
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

//internal slot - runs when the user presses the "Next" button
//no inputs/outputs
//navigates through the lists of the track blocks/ dispatched trains / train schedule
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

//internal slot - runs when the user selects the "View Green Line Statuses" button
//no inputs/outputs
//Views the names, occupancies, and statuses(open/closed) of the green line
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
        TrackString += (greenTrackOpenClose[i] == true ? "Open" : "Closed") + spaces(10-(greenTrackOpenClose[i] == true ? 4 : 5));
        TrackString += QString::number(greenTrackOccupancies[i]) + spaces(13-QString::number(greenTrackOccupancies[i]).length()) + "\n";
    }


    ui->DataLabel->setText("Green Line Track Block Statuses");
    ui->Data->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}

//internal slot - runs when the user selects the "View Red Line Statuses" button
//no inputs/outputs
//Views the names, occupancies, and statuses(open/closed) of the red line
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
        TrackString += (redTrackOpenClose[i] == true ? "Open" : "Closed") + spaces(10-(redTrackOpenClose[i] == true ? 4 : 5));
        TrackString += QString::number(redTrackOccupancies[i]) + spaces(13-QString::number(redTrackOccupancies[i]).length()) + "\n";
    }


    ui->DataLabel->setText("Red Line Track Block Statuses");
    ui->Data->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}

//internal slot - activated when a dispatch signal is emitted
//no inputs/outputs
//if the user is currently viewing the statuses of the Dispatched Trains, re-run it so that it updates
void CTC_MainWindow::updateTrainDisplay()
{
    if (ui->DataLabel->text() == "Dispatched Trains")
    {
        on_actionView_Train_Statuses_triggered();
    }
}

//internal slot - runs when the user selects the "View Train Statuses" button
//no inputs/outputs
//shows the data on the train itself (Train Number, which line its on, the Estimated Arrival Time, and its destination)
// also shows the current status (current block, its next station
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

//internal function - used for the displaying track and train statuses
//inputs: number of spaces
//outputs: a string of spaces
//this function takes the number of spaces specified from the view Track/Train functions, and outputs a string of all spaces of length
//  equal to the specified number
QString CTC_MainWindow::spaces(int num)
{
    QString temp = "";
    for (int i = 0; i < num; i++)
    {
        temp += " ";
    }
    return temp;
}

//internal function - runs when the CTC receives a new time value
//no inputs/outputs
//displays the day of the week and the time, accurate down to the second
void CTC_MainWindow::displayTime()
{
    //display the time on the central timer module
    ui->DayLabel->setText(days[currentDay]);
    ui->TimeLabel->setText(QTime::fromMSecsSinceStartOfDay(currentSecondsSinceMidnight*1000).toString("h:mm:ss A"));
}

//internal function - runs when the time is updated
//no inputs/outputs
//check if it needs to dispatch any trains - they will dispatch if they match the current time.
// if in automatic mode, it will also dispatch trains on the schedule if the times match.
void CTC_MainWindow::checkDispatch()
{
    //loop through all track vectors and dispatch one of them

    //highest priority is the queue - trains that needed to be dispatched already have experienced delays
    if (TrainQueue.size() != 0)
    {
        if ((TrainQueue[0].redline == true ? redTrackOpenClose[76] : greenTrackOpenClose[76]) == true)
        {
            TrainNumber++;
            TrainQueue[0].TrainNumber = TrainNumber;
            TrainsDispatched.push_back(TrainQueue[0]);
            emit sendAuthAndSpeed(TrainQueue[0].redline,TrainQueue[0].redline == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],TrainQueue[0].suggestedSpeedVectors[0]);
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
            if ((TrainQueue[0].redline == true ? redTrackOpenClose[76] : greenTrackOpenClose[76]) == true)
            {
                TrainNumber++;
                TrainStandby[i].TrainNumber = TrainNumber;
                TrainsDispatched.push_back(TrainStandby[i]);
                emit sendAuthAndSpeed(TrainStandby[i].redline,TrainStandby[i].redline == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],TrainStandby[i].suggestedSpeedVectors[0]);
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
                    if ((TrainQueue[0].redline == true ? redTrackOpenClose[76] : greenTrackOpenClose[76]) == true)
                    {
                        TrainsDispatched.push_back(TrainSchedule[i]);
                        emit sendAuthAndSpeed(TrainSchedule[0].redline,TrainSchedule[0].redline == true ? authorityBetweenStationsRed[0] : authorityBetweenStationsGreen[0],TrainSchedule[0].suggestedSpeedVectors[0]);
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

//internal slot - runs when the Dispatch UI needs the current time (sends a request signal)
//no inputs/outputs
//if the Dispatch UI sends a request signal for the current time, the main window will respond with the current time by
// sending its own signal to the Dispatch UI
void CTC_MainWindow::receiveTimeRequest()
{
    emit sendTime(currentDay,currentSecondsSinceMidnight);
}

//slot to receive the data about the track block from wayside - update internal TrackBlockVector
//input - data about SINGLE trackblock
//no outputs
//takes data about a specific block and updates its values
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

//internal slot - runs when the user selects the "View Schedule" button in the menu
//no inputs/outputs
//shows the train schedule - which line it will dispatch to, its dispatch date/time, arrival date/time, and destination
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

//internal slot - runs when the Dispatch UI sends a signal to add to the Schedule
//inputs - which line the train is on, its suggested speed, the depart time in minutes, the arrival day, the arrival time, the departure date, the departure time, and the destination
//no outputs
//initializes the train data values (including defining its suggested speed vectors), and adds the train to the schedule
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
                if (speedBasedVectorRed[i][j] != 0)
                {
                    tempTrain.suggestedSpeedVectors[i][j] = speedBasedVectorRed[i][j]*speed_temp;
                }
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
                if (speedBaseVectorGreen[i][j] != 0)
                {
                    tempTrain.suggestedSpeedVectors[i][j] = speedBaseVectorGreen[i][j]*speed_temp;
                }
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
    tempTrain.routeIndex = 0;
    TrainSchedule.push_back(tempTrain);

    //if the user is already viewing the train schedule, update the list
    if (ui->DataLabel->text() == "Train Schedule")
    {
        on_actionView_Schedule_triggered();
    }
}

//internal slot - runs when the user selects the Manual Mode button
//no inputs/outputs
//switches to manual mode
void CTC_MainWindow::on_actionManual_triggered()
{
    ui->actionAutomatic->setChecked(false);
    ui->CTCModeLabel->setText("Manual Mode");
}

//internal slot - runs when the user selects the Manual Mode button
//no inputs/outputs
//switches to automatic mode
void CTC_MainWindow::on_actionAutomatic_triggered()
{
    ui->actionManual->setChecked(false);
    ui->CTCModeLabel->setText("Automatic Mode");
}

//internal slot - runs when the Dispatch UI/ Edit Switch UI need to know the current CTC mode
//no inputs/outputs
//responds with a signal specifying the mode that they will both receive
void CTC_MainWindow::receiveModeRequest()
{
    emit sendCTCmode(ui->actionManual->isChecked());
}


//internal function (no inputs/ outputs) that can dynamically track the train,
//based off its current block number and where it is supposed to go next
void CTC_MainWindow::checkNextBlocks()
{
    //loop through the vector of dispatched trains, constantly check if the next block is now occupied
    for (unsigned int i = 0; i < TrainsDispatched.size(); i++)
    {
        if (TrainsDispatched[i].redline == true)
        {
            //redline
            if (TrainsDispatched[i].currentBlock != 76 && TrainsDispatched[i].progressIndex != 0)
            {
                if (redTrackOccupancies[redRoute[TrainsDispatched[i].routeIndex+1]-1] == true)
                {
                    //train has moved forward
                    TrainsDispatched[i].routeIndex++;
                    TrainsDispatched[i].currentBlock = redRoute[TrainsDispatched[i].routeIndex];

                    //test if its now at a station
                    if (TrainsDispatched[i].currentBlock-1 == TrainsDispatched[i].nextStationBlock)
                    {
                        TrainsDispatched[i].progressIndex++;
                        TrainsDispatched[i].nextStation = nextStationsRed[TrainsDispatched[i].progressIndex];
                        TrainsDispatched[i].nextStationBlock = nextStationBlockRed[TrainsDispatched[i].progressIndex];
                        emit sendAuthAndSpeed(TrainsDispatched[i].redline,authorityBetweenStationsGreen[TrainsDispatched[i].progressIndex],TrainsDispatched[i].suggestedSpeedVectors[TrainsDispatched[i].progressIndex]);
                    }

                    if (ui->DataLabel->text() == "Dispatched Trains")
                    {
                        on_actionView_Train_Statuses_triggered();
                    }
                }
            }
        }
        else
        {
            //green line
            if (TrainsDispatched[i].currentBlock != 151)
            {
                if (greenTrackOccupancies[greenRoute[TrainsDispatched[i].routeIndex+1]-1] == true)
                {
                    //train has moved forward
                    TrainsDispatched[i].routeIndex++;
                    TrainsDispatched[i].currentBlock = greenRoute[TrainsDispatched[i].routeIndex];

                    //test if its now at a station
                    if (TrainsDispatched[i].currentBlock-1 == TrainsDispatched[i].nextStationBlock)
                    {
                        TrainsDispatched[i].progressIndex++;
                        TrainsDispatched[i].nextStation = nextStationsGreen[TrainsDispatched[i].progressIndex];
                        TrainsDispatched[i].nextStationBlock = nextStationBlockGreen[TrainsDispatched[i].progressIndex];

                        //emit new authority
                        emit sendAuthAndSpeed(TrainsDispatched[i].redline,authorityBetweenStationsGreen[TrainsDispatched[i].progressIndex],TrainsDispatched[i].suggestedSpeedVectors[TrainsDispatched[i].progressIndex]);
                    }

                    if (ui->DataLabel->text() == "Dispatched Trains")
                    {
                        on_actionView_Train_Statuses_triggered();
                    }
                }
            }
        }
    }
}

//internal slot (no inputs/ outputs) - activated when the Open/Close Track drop down menu button is clicked
//pressing this button opens the open/close track UI
void CTC_MainWindow::on_actionOpen_Close_Track_triggered()
{
    //show the open close track UI
    oc = new CTC_OpenCloseTrack();
    oc->show();

    //connect its signal to a slot in this UI
    QObject::connect(oc, SIGNAL(sendUpdatedTrackBlock(bool,int,bool)), this, SLOT(receiveTrackEdit(bool,int,bool)));
}

//internal slot (no inputs/outputs) - activated when the signal is generated from the open close track UI
//receives that signal from the open close track UI, and dispatches its own signal to be received by the wayside
void CTC_MainWindow::receiveTrackEdit(bool line, int blockNum, bool status)
{
    oc->close();
    emit sendTrackEditCommand(line,blockNum,status);
}

//internal slot (no inputs/ outputs) - activated when the Change Switch Locations menu button is clicked
//opens the change switch UI, connects required signals/slots
void CTC_MainWindow::on_actionChange_Switch_Locations_triggered()
{
    //show the change switch UI
    cs = new CTC_ChangeSwitches();
    cs->show();

    //connect required signals and slots
    QObject::connect(cs, SIGNAL(requestCTCMode()), this, SLOT(receiveModeRequest()));
    QObject::connect(this, SIGNAL(sendCTCmode(bool)), cs, SLOT(receiveCTCMode(bool)));
    QObject::connect(cs, SIGNAL(sendSwitchData(bool,int,int)), this, SLOT(receiveSwitchUpdate(bool,int,int)));
}

//internal slot - activated switch change switch UI sends a signal containing new switch data
//receives that signal, sends out its own signal to the wayside
//inputs: bool - whether or not line is the red line, int - the switch block number, int - the switch connection block number
void CTC_MainWindow::receiveSwitchUpdate(bool line, int switchLocationNum, int switchConnectionLocationNum)
{
    cs->close();
    emit sendSwitchEditCommand(line,switchLocationNum, switchConnectionLocationNum);
}

//internal slot - activated when either the wayside or Test UI sends occupancies
//inputs - occupancies for green line, occupancies for red line
void CTC_MainWindow::receiveOccupancies(QVector<bool> greenLine, QVector<bool> redLine)
{
    greenTrackOccupancies = greenLine;
    redTrackOccupancies = redLine;

    if (ui->DataLabel->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Statuses_triggered();
    }
    else if (ui->DataLabel->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Statuses_triggered();
    }
}

//internal slot - activated when either the wayside or Test UI sends track statuses
//inputs - occupancies for green line, occupancies for red line
void CTC_MainWindow::receiveTrackStatuses(QVector<bool> greenLine, QVector<bool> redLine)
{
    greenTrackOpenClose = greenLine;
    redTrackOpenClose = redLine;

    if (ui->DataLabel->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Statuses_triggered();
    }
    else if (ui->DataLabel->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Statuses_triggered();
    }
}

