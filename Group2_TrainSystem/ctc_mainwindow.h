#ifndef CTC_MAINWINDOW_H
#define CTC_MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include "ctc_choosetrackline.h"
#include "ctc_dispatchtrain.h"

//struct for the Train - how train values are stored inside the CTC for display
struct Train_CTC{
    bool redline;
    int dispatchTime;
    int authority;
    double suggestedSpeed;
};

//struct for TrackBlocks - the only required data for the CTC
struct TrackBlock{
    QString name;
    int occupancy;
    bool open;
};

namespace Ui {
class CTC_MainWindow;
}

class CTC_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CTC_MainWindow(QWidget *parent = nullptr);
    ~CTC_MainWindow();

private slots:
    void on_actionDispatch_Train_triggered();
    void RedLineSelected();
    void GreenLineSelected();
    void on_previousButton_clicked();
    void on_NextButton_clicked();
    void on_actionView_Green_Line_Statuses_triggered();
    void on_actionView_Red_Line_Statuses_triggered();
    void on_actionView_Train_Statuses_triggered();
    void receiveTime(int,int);
    void receiveTimeRequest();
    void receiveDispatchImmediate(bool,int,double);
    void receiveDispatchSchedule(bool,int,double,int);
    void receiveBlockStatus(bool,int,int,bool);

signals:
    void sendStationData(bool,QVector<double>, QVector<QString>, QVector<int>);
    void sendTrainData(bool,int, double);
    void sendTime(int,int);

private:
    //internal functions
    void initializeTrackVector();
    void checkDispatch();
    void dispatchTrain();
    void displayTime();

    //initializing all sub UI's
    Ui::CTC_MainWindow *ui;
    CTC_ChooseTrackLine *cl;
    CTC_DispatchTrain *dp;

    //all internal variables and vectors
    QVector<Train_CTC> TrainVector;
    QVector<Train_CTC> TrainSchedule;
    QVector<Train_CTC> TrainStandby;
    QVector<Train_CTC> TrainQueue;
    QVector<TrackBlock> TrackVector;
    QVector<TrackBlock> TrackVectorRed;
    QVector<TrackBlock> TrackVectorGreen;
    QVector<QString> stationNamesRed;
    QVector<QString> stationNamesGreen;
    QVector<int> stationAuthoritiesRed;
    QVector<int> stationAuthoritiesGreen;
    QVector<double> stationDistancesGreen;
    QVector<double> stationDistancesRed;
    QString spaces(int);
    QVector<QString> days;
    int number;
    int trainSet;
    int trackSetRed;
    int trackSetGreen;
    int setSize;
    int currentDay;
    int currentSecondsSinceMidnight;
};

#endif // CTC_MAINWINDOW_H
