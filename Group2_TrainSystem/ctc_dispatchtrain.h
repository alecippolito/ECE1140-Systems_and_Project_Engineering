#ifndef CTC_DISPATCHTRAIN_H
#define CTC_DISPATCHTRAIN_H

#include <QDialog>
#include <QTime>


namespace Ui {
class CTC_DispatchTrain;
}

class CTC_DispatchTrain : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_DispatchTrain(QWidget *parent = nullptr);
    ~CTC_DispatchTrain();

private slots:
    void receiveStationData(bool,QVector<double>,QVector<QString>);
    void on_DepartureCheck_stateChanged(int arg1);
    void on_ArrivalCheck_stateChanged(int arg1);
    void updateTimeDisplay(int,int);
    void receiveSystemTime(int,int);
    void on_DispatchButton_clicked();
    void on_ScheduleButton_clicked();
    void receiveCTCMode(bool);

signals:
    void requestSystemTime();

    //bool = redline, double = suggestedSpeed,int = arrival day QTime = arrival Time, QString = station name
    void dispatchImmediate(bool,double,int,QTime,QString);

    //bool = redline, double = suggestedSpeed, int = departure Time MINUTE,int = arrival day, QTime = arrival Time, QString = station name
    void dispatchStandby(bool,double,int,int,QTime,QString);

    //bool = redline, double = suggestedSpeed,int = depart Time MINUTE, int = arrival day, QTime = arrival time, int = departure day, QTime = departure time, QString = station name
    void dispatchSchedule(bool,double,int,int,QTime,int,QTime,QString);
    void requestCTCMode();

private:
    Ui::CTC_DispatchTrain *ui;

    //internal functions
    double returnSuggestedSpeed();
    //QVector<double> createSpeedVector(double);

    //all vectors and variables
    //QVector<double> speedVectorBase;
    QVector<QString> stationNames;
    QVector<double> stationDistances;
    QVector<int> stationAuthorities;
    QVector<QVector<bool>> stationAuthorityVectors;
    bool redline;
    double standardSpeed;
    int currentDay;
    int currentSeconds;
    int departTimeMinute;
    int arriveTimeMinute;
    bool manualMode;
};

#endif // CTC_DISPATCHTRAIN_H
