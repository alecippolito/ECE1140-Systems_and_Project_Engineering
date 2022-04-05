#ifndef SYSTEM_CENTRALTIMER_CONNECTOR_H
#define SYSTEM_CENTRALTIMER_CONNECTOR_H

#include <QMainWindow>

//to include the modules inside this project, include the .h files here
#include "ctc_mainwindow.h"
#include "TrainControllerGUI.h"
#include "Train.h"
#include "Block.h"
#include "yardToDormontTrackModel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class System_CentralTimer_Connector; }
QT_END_NAMESPACE

class System_CentralTimer_Connector : public QMainWindow
{
    Q_OBJECT

public:
    System_CentralTimer_Connector(QWidget *parent = nullptr);
    ~System_CentralTimer_Connector();

private:
    Ui::System_CentralTimer_Connector *ui;

    //create pointers to all modules
    CTC_MainWindow *ctc;
    TrainControllerGUI *tcGUI;
    MainWindow *tm;
    YardDormontTrackModel trackModel;
};
#endif // SYSTEM_CENTRALTIMER_CONNECTOR_H
