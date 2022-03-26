#include "ctc_test.h"
#include "ui_ctc_test.h"

CTC_test::CTC_test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_test)
{
    ui->setupUi(this);
}

CTC_test::~CTC_test()
{
    delete ui;
}

void CTC_test::on_pushButton_clicked()
{
    //when the button is pressed, emit the signal
    emit sendTrainData(80,40);
}

