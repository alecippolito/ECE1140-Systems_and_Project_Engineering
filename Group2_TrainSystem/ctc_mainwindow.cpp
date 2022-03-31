#include "ctc_mainwindow.h"
#include "ui_ctc_mainwindow.h"

CTC_MainWindow::CTC_MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_MainWindow)
{
    ui->setupUi(this);
}

CTC_MainWindow::~CTC_MainWindow()
{
    delete ui;
}
