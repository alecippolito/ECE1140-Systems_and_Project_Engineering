#include "ctc_dispatchtrain.h"
#include "ui_ctc_dispatchtrain.h"

CTC_DispatchTrain::CTC_DispatchTrain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_DispatchTrain)
{
    ui->setupUi(this);
}

CTC_DispatchTrain::~CTC_DispatchTrain()
{
    delete ui;
}

void CTC_DispatchTrain::receiveStationData(QVector<double> distances, QVector<QString> names, QVector<int> authority)
{
    //copy the received data into the the UI's internal vectors
    stationNames = names;
    stationDistances = distances;
    stationAuthorities = authority;

    //add the names to the list widget in order for the user to select one of them
    for (unsigned int i = 0; i < stationNames.size(); i++)
    {
        ui->StationList->addItem(stationNames[i]);
    }
    ui->StationList->setCurrentRow(0);
}
