#include "trackmodel.h"
#include "ui_trackmodel.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QDebug>
#include <QFile>
#include <QStringList>
#include <QApplication>
#include <QFileInfo>

using namespace std;

TrackModel::TrackModel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrackModel)
{
    ui->setupUi(this);
    Q_INIT_RESOURCE(trainResources);
}

TrackModel::~TrackModel()
{
    delete ui;
}

void TrackModel::changeOccupancy(bool redline, int blockNumber, int newOccupancy)
{
    if (redline == true)
    {
        trackOccupanciesRed[blockNumber-1] = newOccupancy;
        emit sendOccupancy(redline,blockNumber,newOccupancy);
        emit sendOccupancyVector(trackOccupanciesRed);
    }
    else
    {
        trackOccupanciesGreen[blockNumber-1] = newOccupancy;
        emit sendOccupancy(redline,blockNumber,newOccupancy);
        emit sendOccupancyVector(trackOccupanciesGreen);
    }
}

void TrackModel::changeStatuses(bool redline, int blockNumber, bool newStatus)
{
    if (redline == true)
    {
        trackStatusesRed[blockNumber-1] = newStatus;
        emit sendStatuses(redline,blockNumber,newStatus);
        emit sendStatusesVector(trackStatusesRed);
    }
    else
    {
        trackStatusesGreen[blockNumber-1] = newStatus;
        emit sendStatuses(redline,blockNumber,newStatus);
        emit sendStatusesVector(trackStatusesGreen);
    }
}

void TrackModel::loadRedLine()
{
    //QFileInfo().setFile("redline.csv");
    //QString filename = QFileInfo().absoluteFilePath() + "redline.csv";
    //cout << filename.toStdString() << endl;
    QFile inFile(":/resources/redline.csv");
    inFile.open(QIODevice::ReadOnly);

    if(!inFile.isOpen())
    {
        cout << "FILE NOT OPENED" << endl;
    }

    QTextStream stream(&inFile);

    for(int i=0; i<77; i++)     //allocate space for track
    {
        redline[i] = new Block(i);
    }

    int numRows = 0; //CHANGE FOR GREEN LINE IN WHILE LOOP
    while(!stream.atEnd())
    {
        if(numRows != 76) {
        QString line = stream.readLine();
        redline[numRows]->lineType = line.split(',').at(0).toStdString();
        redline[numRows]->section = line.split(',').at(1).toStdString();
        redline[numRows]->blockNumber = line.split(',').at(2).toInt();
        redline[numRows]->blockLength = line.split(',').at(3).toDouble();
        redline[numRows]->blockGrade = line.split(',').at(4).toDouble();
        redline[numRows]->speedLimitKmHr = line.split(',').at(5).toInt();
        redline[numRows]->infrastructure = line.split(',').at(6).toStdString();
        redline[numRows]->stationSide = line.split(',').at(7).toStdString();
        redline[numRows]->elevation = line.split(',').at(8).toDouble();
        redline[numRows]->cumElevation = line.split(',').at(9).toDouble();
        redline[numRows]->secondsToTraverseBlock = line.split(',').at(10).toDouble();
        numRows++;
        } else { break; }   //break if at 77
    }

    //last two are going to be yard blocks -- TO DO

    inFile.close();
}

void TrackModel::loadGreenLine()
{
    QFile inFile(":/resources/greenline.csv");
    inFile.open(QIODevice::ReadOnly);

    if(!inFile.isOpen())
    {
        cout << "FILE NOT OPENED" << endl;
    }

    QTextStream stream(&inFile);

    for(int i=0; i<151; i++)     //allocate space for track
    {
        greenline[i] = new Block(i);
    }

    int numRows = 0; //CHANGE FOR GREEN LINE IN WHILE LOOP
    while(!stream.atEnd())
    {
        if(numRows != 150) {
        QString line = stream.readLine();
        greenline[numRows]->lineType = line.split(',').at(0).toStdString();
        greenline[numRows]->section = line.split(',').at(1).toStdString();
        greenline[numRows]->blockNumber = line.split(',').at(2).toInt();
        greenline[numRows]->blockLength = line.split(',').at(3).toDouble();
        greenline[numRows]->blockGrade = line.split(',').at(4).toDouble();
        greenline[numRows]->speedLimitKmHr = line.split(',').at(5).toInt();
        greenline[numRows]->infrastructure = line.split(',').at(6).toStdString();
        greenline[numRows]->stationSide = line.split(',').at(7).toStdString();
        greenline[numRows]->elevation = line.split(',').at(8).toDouble();
        greenline[numRows]->cumElevation = line.split(',').at(9).toDouble();
        greenline[numRows]->secondsToTraverseBlock = line.split(',').at(10).toDouble();
        numRows++;
        } else { break; }   //break if at 77
    }

    //last two are going to be yard blocks -- TO DO

    inFile.close();

}



