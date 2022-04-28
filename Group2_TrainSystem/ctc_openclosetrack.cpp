#include "ctc_openclosetrack.h"
#include "ui_ctc_openclosetrack.h"

#include <QDebug>

//constructor for this UI - initialize variables
CTC_OpenCloseTrack::CTC_OpenCloseTrack(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_OpenCloseTrack)
{
    ui->setupUi(this);

    //initialize the the line to RED
    ui->BlockNumberBox->clear();
    for (unsigned int i = 0; i < 77; i++)
    {
        ui->BlockNumberBox->addItem(QString::number(i+1));
    }

    ui->BlockNumberBox->setCurrentIndex(0);
    ui->LineNameBox->setCurrentIndex(0);
}

//destructor for this UI
CTC_OpenCloseTrack::~CTC_OpenCloseTrack()
{
    delete ui;
}

//internal slot (no inputs/ outputs) - activated when the Change Track Button button is clicked
//signal is emitted containing all required data
void CTC_OpenCloseTrack::on_ChangeTrackButton_clicked()
{
    emit sendUpdatedTrackBlock(ui->LineNameBox->currentIndex() == 0 ? true : false,ui->BlockNumberBox->currentIndex(),ui->OpenCloseBox->currentIndex() == 0 ? true : false);
}

//internal slot - activated when the user changes the line name
//shows different blocks to edit depending on the line
void CTC_OpenCloseTrack::on_LineNameBox_currentIndexChanged(int index)
{
    ui->BlockNumberBox->clear();
    if (index == 0)
    {
        //red line
        for (unsigned int i = 0; i < 77; i++)
        {
            ui->BlockNumberBox->addItem(QString::number(i+1));
        }
    }
    else
    {
        //green line
        for (unsigned int i = 0; i < 151; i++)
        {
            ui->BlockNumberBox->addItem(QString::number(i+1));
        }
    }
}

