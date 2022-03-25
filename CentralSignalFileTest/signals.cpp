#include "signals.h"
#include "ui_signals.h"

Signals::Signals(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Signals)
{
    ui->setupUi(this);
}

Signals::~Signals()
{
    delete ui;
}

