#include "system_centraltimer_connector.h"

#include <QApplication>

//the main file where the Central Timer UI is called

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    System_CentralTimer_Connector w;
    w.show();
    return a.exec();
}
