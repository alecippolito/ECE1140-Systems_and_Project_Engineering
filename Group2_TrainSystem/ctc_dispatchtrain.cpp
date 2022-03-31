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
