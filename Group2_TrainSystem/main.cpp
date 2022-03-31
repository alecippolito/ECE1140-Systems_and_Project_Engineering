#include "system_centraltimer_connector.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    System_CentralTimer_Connector w;
    w.show();
    return a.exec();
}
