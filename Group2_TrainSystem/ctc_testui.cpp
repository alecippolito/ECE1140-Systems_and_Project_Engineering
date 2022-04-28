#include "ctc_testui.h"
#include "ui_ctc_testui.h"


//constructor for CTC test UI
CTC_TestUI::CTC_TestUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_TestUI)
{
    ui->setupUi(this);

    //initialize variables
    message = new QMessageBox();
    routeIndex = 1;

    //have its own version of the green route
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

    occupancyVectorGreen = QVector<bool>(152,false);
    occupancyVectorGreen[routeIndex] = true;

    ui->LocationLabel->setText("New Train Location: " + QString::number(greenRoute[routeIndex]));

    occupancyVectorBlockOrderGreen = QVector<bool>(152,false);
    occupancyVectorBlockOrderGreen[greenRoute[routeIndex]-1] = true;
}

//destructor for CTC test UI
CTC_TestUI::~CTC_TestUI()
{
    delete message;
    delete ui;
}

//internal slot - used to show that a signal is generated from the CTC containing an edit track command
//inputs - which line it is on, the track block number, and its new state
void CTC_TestUI::receiveTrackEdit(bool line, int blockNum, bool status)
{
    QString lineString = (line == true ? "Red" : "Green");
    QString statusString = (status == true ? "Open" : "Close");
    message->setText("Track Edit Request received!\nLine: " + lineString + "\nBlock number: " + QString::number(blockNum) + "\nNew status: " + statusString);
    message->show();
}

//internal slot - used to show that a signal is generated from the CTC containing an edit Switch command
//inputs - which line it is on, the switch block number, the destinaion block number
void CTC_TestUI::receiveSwitchEdit(bool line, int switchBlockNum, int destinationBlockNum)
{
    QString lineString = (line == true ? "Red" : "Green");
    message->setText("Switch Edit Request received!\nLine: " + lineString + "\nSwitch block number: " + QString::number(switchBlockNum) + "\nDestination block number: " + QString::number(destinationBlockNum));
    message->show();
}

//internal slot - activated when user selects the minus button
//no inputs/ outputs
//simulates a wayside - changes location of the train
void CTC_TestUI::on_minusButton_clicked()
{
    if (routeIndex > 0)
    {
        routeIndex--;
        occupancyVectorGreen = QVector<bool>(152,false);
        occupancyVectorGreen[routeIndex] = true;
        occupancyVectorBlockOrderGreen = QVector<bool>(152,false);
        occupancyVectorBlockOrderGreen[greenRoute[routeIndex]-1] = true;
        ui->LocationLabel->setText("New Train Location: " + QString::number(greenRoute[routeIndex]));
    }
}

//internal slot - activated when user selects the plus button
//no inputs/ outputs
//simulates a wayside - changes location of the train
void CTC_TestUI::on_plusButton_clicked()
{
    if (routeIndex < 151)
    {
        routeIndex++;
        occupancyVectorGreen = QVector<bool>(152,false);
        occupancyVectorGreen[routeIndex] = true;
        occupancyVectorBlockOrderGreen = QVector<bool>(152,false);
        occupancyVectorBlockOrderGreen[greenRoute[routeIndex]-1] = true;
        ui->LocationLabel->setText("New Train Location: " + QString::number(greenRoute[routeIndex]));
    }
}

//internal slot - activate when user selects the send new occupancy button
//no inputs/outputs
//simulates a wayside - sends occupancies to CTC
void CTC_TestUI::on_newOccupancyButton_clicked()
{
    QVector<bool> redlineTemp = QVector<bool>(77,false);
    emit sendOccupancies(occupancyVectorBlockOrderGreen,redlineTemp);
}

//internal slot - receives the authority signals from the wayside
//inputs - which line the train is on, the new authority, the new speed
void CTC_TestUI::receiveNewAuthority(bool line, QVector<bool> authority, QVector<double> suggestedSpeed)
{
    message->setText("New Authority Received from CTC!");
    message->show();
}

