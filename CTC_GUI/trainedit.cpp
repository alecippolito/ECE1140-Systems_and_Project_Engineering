#include "trainedit.h"
#include "ui_trainedit.h"

TrainEdit::TrainEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrainEdit)
{
    ui->setupUi(this);
}

TrainEdit::~TrainEdit()
{
    delete ui;
}
