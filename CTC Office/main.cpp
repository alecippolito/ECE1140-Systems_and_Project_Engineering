#include "system_centraltimer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    System_CentralTimer CT;
    CT.show();
    return a.exec();
}
