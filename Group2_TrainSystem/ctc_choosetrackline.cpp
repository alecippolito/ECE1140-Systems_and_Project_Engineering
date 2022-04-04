#include "ctc_choosetrackline.h"
#include "ui_ctc_choosetrackline.h"

CTC_ChooseTrackLine::CTC_ChooseTrackLine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_ChooseTrackLine)
{
    ui->setupUi(this);
}

CTC_ChooseTrackLine::~CTC_ChooseTrackLine()
{
    delete ui;
}


void CTC_ChooseTrackLine::on_RedLineButton_clicked()
{
    emit dispatchRed();
}


void CTC_ChooseTrackLine::on_GreenLineButton_clicked()
{
    emit dispatchGreen();
}

