#include "chooseline.h"
#include "ui_chooseline.h"

ChooseLine::ChooseLine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseLine)
{
    ui->setupUi(this);
}

ChooseLine::~ChooseLine()
{
    delete ui;
}

void ChooseLine::on_pushButton_clicked()
{
    emit dispatchRed();
}


void ChooseLine::on_pushButton_2_clicked()
{
    emit dispatchGreen();
}

