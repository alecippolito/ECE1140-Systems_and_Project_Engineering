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
