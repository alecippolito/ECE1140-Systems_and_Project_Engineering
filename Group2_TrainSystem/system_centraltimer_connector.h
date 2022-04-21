#ifndef SYSTEM_CENTRALTIMER_CONNECTOR_H
#define SYSTEM_CENTRALTIMER_CONNECTOR_H

#include <QMainWindow>

//to include the modules inside this project, include the .h files here
#include "ctc_mainwindow.h"
#include "TrainControllerGUI.h"
#include "Train.h"
#include "Block.h"
//#include "yardToDormontTrackModel.h"
#include "trackmodel.h"
#include "Track_controller.h"
#include "PLC.h"
#include "Track_mainwindow.h"


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
    void on_MonButton_clicked();
    void on_TuesButton_clicked();
    void on_WedButton_clicked();
    void on_ThursButton_clicked();
    void on_FriButton_clicked();
    void on_SatButton_clicked();
    void on_SunButton_clicked();
    void on_ThousandTimesSpeed_clicked();
    void on_TimeButton_1pm_clicked();
    void receiveDispatchSignal_test(int,bool,int,QVector<double>,QVector<bool>);
    void on_TimeButton_2pm_clicked();

    void on_pausePlayButton_clicked();

signals:
    void sendTime(int,int);
    void sendTimeUpdate(int);
    void sendTimeDialation(double);

private:
    Ui::System_CentralTimer_Connector *ui;

    //create pointers to all modules
    CTC_MainWindow *ctc;

    //pointer to a QTimer class
    QTimer *timer;

    //variables in order to keep track of the time
    int day;
    int secondsInDay;
    int secondsInWeek;
    double timeDialation;
    QVector<QString> days;
    bool isPaused = false;

    //internal functions
    void displayDateTime();

    TrainControllerGUI *tcGUI;
    MainWindow *tm;
    //YardDormontTrackModel trackModel;
    TrackModel realTrackModel;
    Track_mainwindow *trackController;
};
#endif // SYSTEM_CENTRALTIMER_CONNECTOR_H
