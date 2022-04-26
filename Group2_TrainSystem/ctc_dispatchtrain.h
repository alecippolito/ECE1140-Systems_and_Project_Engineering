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
    void receiveStationData(bool,QVector<double>,QVector<QString>,QVector<int>,QVector<QVector<bool>>);
    void on_DepartureCheck_stateChanged(int arg1);
    void on_ArrivalCheck_stateChanged(int arg1);
    void updateTimeDisplay(int,int);
    void receiveSystemTime(int,int);
    void on_DispatchButton_clicked();
    void on_ScheduleButton_clicked();
    void receiveCTCMode(bool);

signals:
    void requestSystemTime();
    void dispatchImmediate(bool,int,double,QVector<bool>,int,QTime,QString);
    void dispatchStandby(bool,int,double,int,QVector<bool>,int,QTime,QString);
    void dispatchSchedule(bool,int,double,QVector<bool>,int,QTime,int,QTime,QString);
    void requestCTCMode();

private:
    Ui::CTC_DispatchTrain *ui;

    //internal functions
    double returnSuggestedSpeed();
    int returnAuthority();
    QVector<bool> returnAuthorityVector();

    //all vectors and variables
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
