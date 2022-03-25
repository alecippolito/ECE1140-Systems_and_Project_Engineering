#ifndef CTC_H
#define CTC_H

#include <QMainWindow>
#include "choosedispatch.h"
#include "trackedit.h"
#include "trainedit.h"
#include "chooseline.h"
#include "updateschedule.h"

struct Train_CTC{
    QString TrainNumber;
    QString destination;
    QDateTime departure;
    QDateTime arrival;
    int authority;
    double suggestedSpeed;
};


struct Train {
    int TrainNumber;
    int authority;
    double suggestedSpeed;
};


QT_BEGIN_NAMESPACE
namespace Ui { class CTC; }
QT_END_NAMESPACE

class CTC : public QMainWindow
{
    Q_OBJECT

public:
    CTC(QWidget *parent = nullptr);
    ~CTC();

private slots:
    void on_actionDispatch_Train_triggered();
    void updateTrainStatuses();
    void on_actionView_Train_Statuses_triggered();
    void on_actionClear_triggered();
    void on_previousButton_clicked();
    void on_nextButton_clicked();
    void on_actionOpen_Close_Track_triggered();
    void updateTrackStatuses();
    void dispatchRedLine();
    void dispatchGreenLine();
    void on_actionView_Green_Line_Status_triggered();
    void on_actionView_Red_Line_Status_triggered();

signals:
    void sendTrackData(QVector<double>,QVector<QString>,QVector<int>);
    void sendTrackDataEdit(QVector<TrackBlock>);
    void sendTrain(Train);

private:
    void initializeTrackVector();
    Ui::CTC *ui;
    ChooseDispatch *cd;
    CustomDispatch *dp;
    TrackEdit *et;
    ChooseLine *cl;
    UpdateSchedule *us;
    TrainEdit *TrainEd;
    QVector<Train_CTC> TrainVector;
    QVector<TrackBlock> TrackVector;
    QVector<TrackBlock> TrackVectorRed;
    QVector<TrackBlock> TrackVectorGreen;
    QVector<QString> stationNamesRed;
    QVector<QString> stationNamesGreen;
    QVector<int> stationAuthoritiesRed;
    QVector<int> stationAuthoritiesGreen;
    QVector<double> stationDistancesGreen;
    QVector<double> stationDistancesRed;
    //QVector<double> averageStationSpeedLimitRed;
    //QVector<double> averageStationSpeedLimitGreen;
    QString spaces(int);
    bool redline;
    int number;
    int trainSet;
    int trackSetRed;
    int trackSetGreen;
    int setSize;
};
#endif // CTC_H
