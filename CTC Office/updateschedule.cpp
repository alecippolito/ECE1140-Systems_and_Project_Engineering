#include "updateschedule.h"
#include "ui_updateschedule.h"

UpdateSchedule::UpdateSchedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateSchedule)
{
    ui->setupUi(this);
}

UpdateSchedule::~UpdateSchedule()
{
    delete ui;
}
