#include "wayside_test.h"
#include "ui_wayside_test.h"

Wayside_test::Wayside_test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wayside_test)
{
    ui->setupUi(this);
}

Wayside_test::~Wayside_test()
{
    delete ui;
}

void Wayside_test::receiveTrainData(int temp1, double temp2)
{
    //slot function to receive a signal, hopefully from the CTC
    ui->label->setText(QString::number(temp1));
    ui->label_2->setText(QString::number(temp2));
}
