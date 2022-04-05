#ifndef SYSTEM_CENTRALTIMER_CONNECTOR_H
#define SYSTEM_CENTRALTIMER_CONNECTOR_H

#include <QMainWindow>

//to include the modules inside this project, include the .h files here
#include "ctc_mainwindow.h"
#include "TrainControllerGUI.h"
#include "Train.h"
#include "Block.h"

QT_BEGIN_NAMESPACE
namespace Ui { class System_CentralTimer_Connector; }
QT_END_NAMESPACE

class System_CentralTimer_Connector : public QMainWindow
{
    Q_OBJECT

public:
    System_CentralTimer_Connector(QWidget *parent = nullptr);
    ~System_CentralTimer_Connector();

private slots:
    void updateTime();
    void on_OneTimesSpeed_clicked();

    void on_TenTimesSpeed_clicked();

    void on_SixtyTimesSpeed_clicked();

    void on_HundredTimesSpeed_clicked();

signals:
    void sendTime(int,int);
    void sendTimeUpdate();

private:
    Ui::System_CentralTimer_Connector *ui;

    //create pointers to all modules
    CTC_MainWindow *ctc;
<<<<<<< HEAD

    //pointer to a QTimer class
    QTimer *timer;

    //variables in order to keep track of the time
    int day;
    int secondsInDay;
    double timeDialation;

    //internal functions
    void displayDateTime();

=======
    TrainControllerGUI *tc;
    MainWindow *tm;
>>>>>>> 6bcfa8b8de533ee80c77ceb57504963c8388e391
};
#endif // SYSTEM_CENTRALTIMER_CONNECTOR_H
