// *************************************************
//              Alec Ippolito
//              main.cpp
// *************************************************

// *************************************************
//              Includes
// *************************************************
#include "TrainControllerGUI.h"
// *************************************************
//              Added Includes
// *************************************************
#include "TrainModelUI.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // construct train here

    QApplication a(argc, argv);
    TrainControllerGUI w;
    w.show();

    MainWindow x;
    x.show();
    return a.exec();
}

