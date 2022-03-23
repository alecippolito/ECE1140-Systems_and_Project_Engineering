#include "choosedispatch.h"
#include "ui_choosedispatch.h"

ChooseDispatch::ChooseDispatch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseDispatch)
{
    ui->setupUi(this);
}

ChooseDispatch::~ChooseDispatch()
{
    delete ui;
}

void ChooseDispatch::on_pushButton_3_clicked()
{
    cd2 = new CustomDispatch();
    //send Track Data to custom dispatch window
    QObject::connect(this, SIGNAL(sendTrackData_custom(QVector<double>,QVector<QString>,QVector<double>)), cd2, SLOT(receiveTrackData_custom(QVector<double>,QVector<QString>,QVector<double>)));
    emit sendTrackData_custom(SA_choose,stations,stationsAVGSL);

    //receive the go-ahead to dispatch from the custom dispatcher window
    QObject::connect(cd2, SIGNAL(dispatchSuccessful_custom()), this, SLOT(DispatchTrainFunction()));
    cd2->exec();
}

void ChooseDispatch::DispatchTrainFunction()
{
    //send out the signal to the CTC
    emit DispatchTrain();
    hide();
}

int ChooseDispatch::getRow_custom()
{
    return cd2->returnRow();
}

double ChooseDispatch::getSpeed_custom()
{
    return cd2->returnSpeed();
}

QDateTime ChooseDispatch::getArriveDT_custom()
{
    return cd2->returnArriveDT();
}

QDateTime ChooseDispatch::getDepartDT_custom()
{
    return cd2->returnDepartDT();
}

QString ChooseDispatch::getStatus_custom()
{
    return cd2->returnStatus();
}

void ChooseDispatch::receiveTrackData_choose(QVector<double> temp1, QVector<QString> temp2, QVector<double> temp3)
{
    SA_choose = temp1;
    stations = temp2;
    stationsAVGSL = temp3;
}

