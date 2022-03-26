#include "central.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //call the central class - constructor code will run
    Central c;

    return a.exec();
}
