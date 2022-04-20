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
    Q_INIT_RESOURCE(trainResources);    //resources folder contains csv folders
    //set status light colors for UI
    ui->greenLineStatusLight->setStyleSheet("background-color: green");
    ui->redLineStatusLight->setStyleSheet("background-color: red");
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

//load red line onto array of blocks from the redline.csv file
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

    for(int i=0; i<=76; i++)     //allocate space for track
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
        }   else
            {
                break;
            }   //break if at 76
    }

        //last is yard block
        redline[76]->lineType = "Red";
        redline[76]->section = "AA";
        redline[76]->blockNumber = 77;
        redline[76]->blockLength = 100;
        redline[76]->blockGrade = 0;
        redline[76]->speedLimitKmHr = 50;
        redline[76]->infrastructure = "";
        redline[76]->stationSide = "";
        redline[76]->elevation = 0;
        redline[76]->cumElevation = 0;
        redline[76]->secondsToTraverseBlock = 6;
    inFile.close();
}

//load green line onto array of blocks from the greenline.csv file
void TrackModel::loadGreenLine()
{
    QFile inFile(":/resources/greenline.csv");
    inFile.open(QIODevice::ReadOnly);

    if(!inFile.isOpen())
    {
        cout << "FILE NOT OPENED" << endl;
    }

    QTextStream stream(&inFile);

    for(int i=0; i<=151; i++)     //allocate space for track
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
        }   else
            {
                break;
            }   //break if at 77
    }


    //last two are yard blocks

    greenline[150]->lineType = "Green";
    greenline[150]->section = "AA";
    greenline[150]->blockNumber = 151;
    greenline[150]->blockLength = 100;
    greenline[150]->blockGrade = 0;
    greenline[150]->speedLimitKmHr = 50;
    greenline[150]->infrastructure = "";
    greenline[150]->stationSide = "";
    greenline[150]->elevation = 0;
    greenline[150]->cumElevation = 0;
    greenline[150]->secondsToTraverseBlock = 6;
    greenline[151]->lineType = "Green";
    greenline[151]->section = "AA";
    greenline[151]->blockNumber = 152;
    greenline[151]->blockLength = 100;
    greenline[151]->blockGrade = 0;
    greenline[151]->speedLimitKmHr = 50;
    greenline[151]->infrastructure = "";
    greenline[151]->stationSide = "";
    greenline[151]->elevation = 0;
    greenline[151]->cumElevation = 0;
    greenline[151]->secondsToTraverseBlock = 6;

    inFile.close();

}

//parse infrastructure parses the "Infrastructure" column of the redline/greenline csv files to check for what infrastructure criteria it meets (station, switches, underground tracks, or railway crossings)
void TrackModel::parseInfrastructure()
{
    //red line
    for(int i=0; i<76; i++)
    {
        if(redline[i]->infrastructure != "")
        {
            if(redline[i]->infrastructure.find("UNDERGROUND") != string::npos)
            {
                redline[i]->isUnderground = true;
            }
            if(redline[i]->infrastructure.find("STATION") != string::npos)
            {
                //figure out what station it is
                string parsedStation = redline[i]->infrastructure.erase(0,8); //STATION:
                if(redline[i]->isUnderground == true){
                    parsedStation = parsedStation.substr(0, parsedStation.size()-13);
                }
                redline[i]->isStation = true;
                redline[i]->stationName = parsedStation;
            }
            if(redline[i]->infrastructure.find("CROSSING") != std::string::npos)
            {
                redline[i]->isRailwayCrossing = true;
            }
            if(redline[i]->infrastructure.find("SWITCH") != std::string::npos)
            {
                redline[i]->isSwitch = true;
                redline[i]->switchData = redline[i]->infrastructure;
            }
        }
    }

    //green line
    for(int i=0; i<151; i++)
    {
        if(greenline[i]->infrastructure != "")
        {
            if(greenline[i]->infrastructure.find("UNDERGROUND") != string::npos)
            {
                greenline[i]->isUnderground = true;
            }
            if(greenline[i]->infrastructure.find("STATION") != string::npos)
            {
                //figure out what station it is
                string parsedStation = greenline[i]->infrastructure.erase(0,8); //STATION:
                if(greenline[i]->isUnderground == true){
                    parsedStation = parsedStation.substr(0, parsedStation.size()-13);
                }
                greenline[i]->isStation = true;
                greenline[i]->stationName = parsedStation;
            }
            if(greenline[i]->infrastructure.find("CROSSING") != std::string::npos)
            {
                greenline[i]->isRailwayCrossing = true;
            }
            if(greenline[i]->infrastructure.find("SWITCH") != std::string::npos)
            {
                greenline[i]->isSwitch = true;
                greenline[i]->switchData = greenline[i]->infrastructure;
            }
        }
    }
}



//toggle green/redline
void TrackModel::on_pushButton_clicked()
{
    if(greenLineBlockInfoShowing)   //if greenline showing, toggle to show red
    {
        ui->greenLineStatusLight->setStyleSheet("background-color: red");
        ui->redLineStatusLight->setStyleSheet("background-color: green");
        greenLineBlockInfoShowing = false;
        updateUI();
    }
    else    //if redline showing, toggle to show green
    {
        ui->greenLineStatusLight->setStyleSheet("background-color: green");
        ui->redLineStatusLight->setStyleSheet("background-color: red");
        greenLineBlockInfoShowing = true;
        updateUI();
    }
}


void TrackModel::on_blockNumberSpinBox_valueChanged(int arg1)
{
    //number restraints for minimum and then line-specific maximums
    if(arg1 <= 0)
    {
        arg1 = 1;
        ui->blockNumberSpinBox->setValue(1);
    }
    if(greenLineBlockInfoShowing)
    {
        if(arg1 > 152)
        {
            arg1 = 152;
            ui->blockNumberSpinBox->setValue(152);
        }
    }
    else
    {
        if(arg1 > 77)
        {
            arg1 = 77;
            ui->blockNumberSpinBox->setValue(77);
        }
    }

    if(greenLineBlockInfoShowing)   //if green line showing
    {
        QTableWidgetItem *lineItem = new QTableWidgetItem();
        lineItem->setText(QString::fromStdString(greenline[arg1-1]->lineType));
        ui->tableWidget->setItem(0,0, lineItem);
        QTableWidgetItem *secItem = new QTableWidgetItem();
        secItem->setText(QString::fromStdString(greenline[arg1-1]->section));
        ui->tableWidget->setItem(1,0, secItem);
        QTableWidgetItem *numItem = new QTableWidgetItem();
        numItem->setText(QString::number(greenline[arg1-1]->blockNumber));
        ui->tableWidget->setItem(2,0, numItem);
        QTableWidgetItem *lengthItem = new QTableWidgetItem();
        lengthItem->setText(QString::number(greenline[arg1-1]->blockLength));
        ui->tableWidget->setItem(3,0, lengthItem);
        QTableWidgetItem *gradeItem = new QTableWidgetItem();
        gradeItem->setText(QString::number(greenline[arg1-1]->blockGrade));
        ui->tableWidget->setItem(4,0, gradeItem);
        QTableWidgetItem *speedItem = new QTableWidgetItem();
        speedItem->setText(QString::number(greenline[arg1-1]->speedLimitKmHr));
        ui->tableWidget->setItem(5,0, speedItem);
        QTableWidgetItem *infraItem = new QTableWidgetItem();
        infraItem->setText(QString::fromStdString(greenline[arg1-1]->infrastructure));
        ui->tableWidget->setItem(6,0, infraItem);
        QTableWidgetItem *stationItem = new QTableWidgetItem();
        stationItem->setText(QString::fromStdString(greenline[arg1-1]->stationSide));
        ui->tableWidget->setItem(7,0, stationItem);
        QTableWidgetItem *elItem = new QTableWidgetItem();
        elItem->setText(QString::number(greenline[arg1-1]->elevation));
        ui->tableWidget->setItem(8,0, elItem);
        QTableWidgetItem *cumElItem = new QTableWidgetItem();
        cumElItem->setText(QString::number(greenline[arg1-1]->cumElevation));
        ui->tableWidget->setItem(9,0, cumElItem);
        QTableWidgetItem *secondItem = new QTableWidgetItem();
        secondItem->setText(QString::number(greenline[arg1-1]->secondsToTraverseBlock));
        ui->tableWidget->setItem(10,0, secondItem);
        QTableWidgetItem *occupancyItem = new QTableWidgetItem();
        occupancyItem->setText(QString::number(greenline[arg1-1]->occupied));
        ui->tableWidget->setItem(11,0, occupancyItem);
    }
    else
    {
        QTableWidgetItem *lineItem = new QTableWidgetItem();
        lineItem->setText(QString::fromStdString(redline[arg1-1]->lineType));
        ui->tableWidget->setItem(0,0, lineItem);
        QTableWidgetItem *secItem = new QTableWidgetItem();
        secItem->setText(QString::fromStdString(redline[arg1-1]->section));
        ui->tableWidget->setItem(1,0, secItem);
        QTableWidgetItem *numItem = new QTableWidgetItem();
        numItem->setText(QString::number(redline[arg1-1]->blockNumber));
        ui->tableWidget->setItem(2,0, numItem);
        QTableWidgetItem *lengthItem = new QTableWidgetItem();
        lengthItem->setText(QString::number(redline[arg1-1]->blockLength));
        ui->tableWidget->setItem(3,0, lengthItem);
        QTableWidgetItem *gradeItem = new QTableWidgetItem();
        gradeItem->setText(QString::number(redline[arg1-1]->blockGrade));
        ui->tableWidget->setItem(4,0, gradeItem);
        QTableWidgetItem *speedItem = new QTableWidgetItem();
        speedItem->setText(QString::number(redline[arg1-1]->speedLimitKmHr));
        ui->tableWidget->setItem(5,0, speedItem);
        QTableWidgetItem *infraItem = new QTableWidgetItem();
        infraItem->setText(QString::fromStdString(redline[arg1-1]->infrastructure));
        ui->tableWidget->setItem(6,0, infraItem);
        QTableWidgetItem *stationItem = new QTableWidgetItem();
        stationItem->setText(QString::fromStdString(redline[arg1-1]->stationSide));
        ui->tableWidget->setItem(7,0, stationItem);
        QTableWidgetItem *elItem = new QTableWidgetItem();
        elItem->setText(QString::number(redline[arg1-1]->elevation));
        ui->tableWidget->setItem(8,0, elItem);
        QTableWidgetItem *cumElItem = new QTableWidgetItem();
        cumElItem->setText(QString::number(redline[arg1-1]->cumElevation));
        ui->tableWidget->setItem(9,0, cumElItem);
        QTableWidgetItem *secondItem = new QTableWidgetItem();
        secondItem->setText(QString::number(redline[arg1-1]->secondsToTraverseBlock));
        ui->tableWidget->setItem(10,0, secondItem);
        QTableWidgetItem *occupancyItem = new QTableWidgetItem();
        occupancyItem->setText(QString::number(redline[arg1-1]->occupied));
        ui->tableWidget->setItem(11,0, occupancyItem);
    }
}

void TrackModel::updateUI()
{
    on_blockNumberSpinBox_valueChanged(1);
    ui->blockNumberSpinBox->setValue(1);
}

