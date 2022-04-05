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
    void receiveStationData(QVector<double>,QVector<QString>,QVector<int>);

signals:
    void addTrain(int,int,int,int,QString,double,int);

private:
    Ui::CTC_DispatchTrain *ui;

    //all vectors and variables
    QVector<QString> stationNames;
    QVector<double> stationDistances;
    QVector<int> stationAuthorities;
};

#endif // CTC_DISPATCHTRAIN_H
