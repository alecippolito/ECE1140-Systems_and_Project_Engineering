#include "trackmodel.h"
#include "ui_trackmodel.h"

#include <QDebug>

TrackModel::TrackModel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrackModel)
{
    ui->setupUi(this);
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
