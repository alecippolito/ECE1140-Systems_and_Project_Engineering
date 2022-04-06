#ifndef CTC_DISPATCHTRAIN_H
#define CTC_DISPATCHTRAIN_H

#include <QDialog>

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
    void receiveStationData(bool,QVector<double>,QVector<QString>,QVector<int>);
    void on_DepartureCheck_stateChanged(int arg1);
    void on_ArrivalCheck_stateChanged(int arg1);
    void updateTimeDisplay(int,int);
    void receiveSystemTime(int,int);
    void on_DispatchButton_clicked();

signals:
    void requestSystemTime();
    void dispatchImmediate(bool,int,double);
    void dispatchSchedule(bool,int,double,int);

private:
    Ui::CTC_DispatchTrain *ui;

    //internal functions
    double returnSuggestedSpeed();
    int returnAuthority();

    //all vectors and variables
    QVector<QString> stationNames;
    QVector<double> stationDistances;
    QVector<int> stationAuthorities;
    bool redline;
    double standardSpeed;
    int currentDay;
    int currentSeconds;
    int departTimeMinute;
};

#endif // CTC_DISPATCHTRAIN_H
