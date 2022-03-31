#include "ctc.h"
#include "ui_ctc.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>

//test to see if Github will read this

//auto-updating from QT creator - still sent to github test

CTC::CTC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CTC)
{
    ui->setupUi(this);

    //initialize the Track Vector
    initializeTrackVector();
    number = 0;
    ui->previousButton->setVisible(false);
    ui->nextButton->setVisible(false);
    trainSet = 0;
    trackSetRed = 0;
    trackSetGreen = 0;
    setSize = 20;

    //you WILL set the font to Consolas
    QFont font("Consolas",9);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
}

CTC::~CTC()
{
    delete ui;
}

void CTC::updateTrainStatuses()
{
    //first test if we are able to dispatch a train on the track
    //error cases:
    //1). Track right outside of yard is closed
    //2). Too many trains on the block of track
    QMessageBox *message = new QMessageBox();

    int tempOccupancy = (redline == true ? TrackVectorRed[0].occupancy : TrackVectorGreen[1].occupancy);
    bool tempOpen = (redline == true ? TrackVectorRed[0].open : TrackVectorGreen[1].open);


    if (tempOpen == false)
    {
        message->setText("Error: Track right outside\nof the yard is closed!");
        message->exec();
    }
    else if (tempOccupancy > 1)
    {
        message->setText("Error: Too many trains are on the\nblock right outside of the track!");
        message->exec();
    }
    else
    {
        //update the train vector
        number++;
        Train_CTC tempTrain;
        tempTrain.TrainNumber = "Train #" + QString::number(number);
        tempTrain.destination = dp->returnName();
        tempTrain.departure = dp->returnDepartDT();
        tempTrain.arrival = dp->returnArriveDT();
        tempTrain.authority = dp->returnAuthority();
        tempTrain.suggestedSpeed = dp->returnSpeed();
        TrainVector.push_back(tempTrain);


        //update the track vector - Track Red 0 South
        //TrackVector[0].occupancy++;
        //send signal to Wayside Controller - a new train data


        //if the track/train statuses are already displayed, make it look like it does a live update
        if (ui->label->text() == "Train Statuses")
        {
            on_actionView_Train_Statuses_triggered();
        }
        else if (ui->label->text() == "Red Line Track Block Statuses")
        {
            on_actionView_Red_Line_Status_triggered();
        }
        else if (ui->label->text() == "Green Line Track Block Statuses")
        {
            on_actionView_Green_Line_Status_triggered();
        }

        cl->hide();
        cl->close();
        dp->close();
    }

    delete message;
}

void CTC::on_actionDispatch_Train_triggered()
{
    cl = new ChooseLine();
    //connect buttons from Choose Line to dispatch signals here
    QObject::connect(cl, SIGNAL(dispatchRed()), this, SLOT(dispatchRedLine()));
    QObject::connect(cl, SIGNAL(dispatchGreen()), this, SLOT(dispatchGreenLine()));
    cl->exec();
}

void CTC::dispatchRedLine()
{
    redline = true;
    dp = new CustomDispatch();

    //send station data to dispatch window
    QObject::connect(this, SIGNAL(sendTrackData(QVector<double>,QVector<QString>,QVector<int>)), dp, SLOT(receiveTrackData(QVector<double>,QVector<QString>,QVector<int>)));
    emit sendTrackData(stationDistancesRed,stationNamesRed,stationAuthoritiesRed);

    //receive train data from dispatch window
    QObject::connect(dp, SIGNAL(dispatchSuccessful()), this, SLOT(updateTrainStatuses()));

    dp->exec();

}

void CTC::dispatchGreenLine()
{
    redline = false;
    dp = new CustomDispatch();

    //send station data to dispatch window
    QObject::connect(this, SIGNAL(sendTrackData(QVector<double>,QVector<QString>,QVector<int>)), dp, SLOT(receiveTrackData(QVector<double>,QVector<QString>,QVector<int>)));
    emit sendTrackData(stationDistancesGreen,stationNamesGreen,stationAuthoritiesGreen);

    //receive train data from dispatch window
    QObject::connect(dp, SIGNAL(dispatchSuccessful()), this, SLOT(updateTrainStatuses()));

    dp->exec();
}

void CTC::on_actionView_Train_Statuses_triggered()
{

    //display all trains and their statuses
    QString TrainString = "Train Number    Destination             Departure Time            Estimated Arrival Time    Authority         Suggested Speed    \n";
    //16, 24, 26, 26, 18, 14, 19

    //loop through Train Vector and add the data to the display string
    trackSetRed = 0;
    trackSetGreen = 0;
    for (unsigned int i = setSize*trainSet; i < qMin(TrainVector.size(), setSize*trainSet+setSize); i++)
    {
        TrainString += TrainVector[i].TrainNumber + spaces(16-TrainVector[i].TrainNumber.length());
        TrainString += TrainVector[i].destination + spaces(24-TrainVector[i].destination.length());
        TrainString += TrainVector[i].departure.toString("MM/dd/yyyy hh:mm A") + spaces(26-(TrainVector[i].departure.toString("MM/dd/yyyy hh:mm A")).length());
        TrainString += TrainVector[i].arrival.toString("MM/dd/yyyy hh:mm A") + spaces(26-(TrainVector[i].arrival.toString("MM/dd/yyyy hh:mm A")).length());
        TrainString += QString::number(TrainVector[i].authority) + " blocks" + spaces(11-QString::number(TrainVector[i].authority).length());
        TrainString += QString::number(TrainVector[i].suggestedSpeed) + " km/hr" + spaces(13-QString::number(TrainVector[i].suggestedSpeed).length()) + "\n";
    }

    ui->label->setText("Train Statuses");
    ui->label_2->setText(TrainString);

    ui->previousButton->setVisible(true);
    ui->nextButton->setVisible(true);
}

void CTC::on_actionView_Red_Line_Status_triggered()
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


    ui->label->setText("Red Line Track Block Statuses");
    ui->label_2->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->nextButton->setVisible(true);
}

void CTC::on_actionView_Green_Line_Status_triggered()
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


    ui->label->setText("Green Line Track Block Statuses");
    ui->label_2->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->nextButton->setVisible(true);
}

void CTC::initializeTrackVector()
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
    stationAuthoritiesGreen ={125,117,111,105,145,89,80,71,4,12,16,27,35};  //track blocks

    stationDistancesRed = {250,625,1875,2225,2745,3265,3465,4183.2};
    stationAuthoritiesRed = {4,11,16,20,30,40,42,54};


    //Read in data from text files that I made
    //Names for Red Line Track Blocks
    QFile file("C:/Users/username/Documents/CTC_GUI/redLineNames.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            //qFatal("Unable to load input file");
            return;
        }
    QTextStream in(&file);


    //Green Line Names
    QFile file4("C:/Users/username/Documents/CTC_GUI/greenLineNames.txt");
        if (!file4.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qFatal("Unable to load input file");
            return;
        }
    QTextStream in4(&file4);

    //add data for red line
    while (!in.atEnd()) {
        //QString line = in.readLine();

        tempTrack.name = in.readLine();
        tempTrack.occupancy = 0;
        tempTrack.open = true;
        TrackVectorRed.push_back(tempTrack);
    }

    //add data for green line
    while (!in4.atEnd()) {
        tempTrack.name = in4.readLine();
        tempTrack.occupancy = 0;
        tempTrack.open = true;
        TrackVectorGreen.push_back(tempTrack);
    }
}

void CTC::on_actionClear_triggered()
{
    ui->label->setText(" ");
    ui->label_2->setText(" ");

    trainSet = 0;
    trackSetRed = 0;
    trackSetGreen = 0;

    ui->previousButton->setVisible(false);
    ui->nextButton->setVisible(false);
}

QString CTC::spaces(int num)
{
    QString temp = "";
    for (int i = 0; i < num; i++)
    {
        temp += " ";
    }
    return temp;
}

void CTC::on_previousButton_clicked()
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

    if (ui->label->text() == "Train Statuses")
    {
        on_actionView_Train_Statuses_triggered();
    }
    else if (ui->label->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Status_triggered();
    }
    else if (ui->label->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Status_triggered();
    }
}

void CTC::on_nextButton_clicked()
{
    if (setSize*(trainSet+1) <= TrainVector.size()-1)
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

    if (ui->label->text() == "Train Statuses")
    {
        on_actionView_Train_Statuses_triggered();
    }
    else if (ui->label->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Status_triggered();
    }
    else if (ui->label->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Status_triggered();
    }
}

void CTC::on_actionOpen_Close_Track_triggered()
{
    //OPEN EDIT TRACK FORM
    TrackEdit *et = new TrackEdit();
    et->exec();
}

void CTC::updateTrackStatuses()
{

}







