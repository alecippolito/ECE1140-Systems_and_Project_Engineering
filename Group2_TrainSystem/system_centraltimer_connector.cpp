#include "system_centraltimer_connector.h"
#include "ui_system_centraltimer_connector.h"

System_CentralTimer_Connector::System_CentralTimer_Connector(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::System_CentralTimer_Connector)
{
    ui->setupUi(this);

    //in order for the modules and their UI's to run, execute them here, in the constructor
    ctc = new CTC_MainWindow();
    ctc->show();
}

System_CentralTimer_Connector::~System_CentralTimer_Connector()
{
    delete ui;
}

