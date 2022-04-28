#ifndef CTC_MAINWINDOW_H
#define CTC_MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include "ctc_choosetrackline.h"
#include "ctc_dispatchtrain.h"
#include "ctc_openclosetrack.h"
#include "ctc_changeswitches.h"

//struct for the Train - how train values are stored inside the CTC for display, and to hold values for dispatch signals
struct Train_CTC{
    bool redline;
    int dispatchTimeMinute;
    int authority;
    double suggestedSpeed;
    QVector<bool> authorityVector;
    QVector<QVector<double>> suggestedSpeedVectors;
    QString DepartDay;
    QString ArriveDay;
    QTime arrivalTime;
    QTime departureTime;
    QString nextStation;
    int nextStationBlock;
    QString destination;
    int currentBlock;
    int TrainNumber;
    bool dispatched;    //used for trains in schedule
    int progressIndex;  //used for dynamic authority routing
    int routeIndex;     //used for dynamic authority routing
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
    void receiveDispatchImmediate(bool,double,int,QTime,QString);
    void receiveDispatchStandby(bool,double,int,int,QTime,QString);
    void receiveBlockStatus(bool,int,int,bool);
    void updateTrainDisplay();
    void on_actionView_Schedule_triggered();
    void receiveDispatchSchedule(bool,double,int,int,QTime,int,QTime,QString);
    void on_actionManual_triggered();
    void on_actionAutomatic_triggered();
    void receiveModeRequest();
    void on_actionOpen_Close_Track_triggered();
    void receiveTrackEdit(bool,int,bool);
    void on_actionChange_Switch_Locations_triggered();
    void receiveSwitchUpdate(bool,int,int);
    void receiveOccupancies(QVector<bool>,QVector<bool>);
    void receiveTrackStatuses(QVector<bool>,QVector<bool>);

signals:
    //bool = redline, QVector<double> = station distances from yard, QVector<QString> = station names
    void sendStationData(bool,QVector<double>,QVector<QString>);

    //signal to create new instance of train controller and train model
    //int = train number, bool = redline, QString = station name
    void sendTrainData(int,bool,QString);

    //signal sending authority and speed to wayside
    void sendAuthAndSpeed(bool,QVector<bool>,QVector<double>);

    //send time to dispatch UI - day, then second within day
    void sendTime(int,int);

    //same as send time, except it is run in the beginning
    void sendInitialTime(int,int);

    //used to send data about whether or not CTC is in manual mode to dispatch UI
    void sendCTCmode(bool);

    //used to send an open/close track command to the wayside
    void sendTrackEditCommand(bool,int,bool);

    //used to send an edit switch command to wayside
    void sendSwitchEditCommand(bool,int,int);

private:
    //internal functions
    void initializeTrackVector();
    void checkDispatch();
    void dispatchTrain();
    void displayTime();
    void updateTrainVector(int,bool,QTime,int,double,int,QString);
    void checkNextBlocks();
    QString spaces(int);

    //initializing all sub UI's
    Ui::CTC_MainWindow *ui;
    CTC_ChooseTrackLine *cl;
    CTC_DispatchTrain *dp;
    CTC_OpenCloseTrack *oc;
    CTC_ChangeSwitches *cs;

    //all internal variables and vectors
    QVector<Train_CTC> TrainsDispatched;
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
    QVector<QVector<bool> > stationAuthorityVectorsRed;
    QVector<QVector<bool> > stationAuthorityVectorsGreen;
    QVector<double> stationDistancesGreen;
    QVector<double> stationDistancesRed;
    QVector<QString> days;
    QVector<bool> redTrackOccupancies;
    QVector<bool> greenTrackOccupancies;
    QVector<bool> redTrackOpenClose;
    QVector<bool> greenTrackOpenClose;

    int number;
    int trainSet;
    int trackSetRed;
    int trackSetGreen;
    int setSize;
    int currentDay;
    int currentSecondsSinceMidnight;
    int TrainNumber;

    //all authority between stations
    QVector<QVector<bool>> authorityBetweenStationsGreen;
    QVector<QString> nextStationsGreen;
    QVector<int> nextStationBlockGreen;
    QVector<QVector<bool>> authorityBetweenStationsRed;
    QVector<QString> nextStationsRed;
    QVector<int> nextStationBlockRed;
    QVector<QVector<double>> speedBaseVectorGreen;
    QVector<QVector<double>> speedBasedVectorRed;
    QVector<int> greenRoute;
    QVector<int> redRoute;
};

#endif // CTC_MAINWINDOW_H
