#ifndef CHOOSEDISPATCH_H
#define CHOOSEDISPATCH_H

#include <QDialog>
#include "customdispatch.h"

namespace Ui {
class ChooseDispatch;
}

class ChooseDispatch : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseDispatch(QWidget *parent = nullptr);
    int getRow_custom();
    QDateTime getDepartDT_custom();
    QDateTime getArriveDT_custom();
    double getSpeed_custom();
    QString getStatus_custom();
    ~ChooseDispatch();

private slots:
    void DispatchTrainFunction();
    void on_pushButton_3_clicked();
    void receiveTrackData_choose(QVector<double>,QVector<QString>,QVector<double>);

signals:
    void DispatchTrain();
    void sendTrackData_custom(QVector<double>,QVector<QString>,QVector<double>);

private:
    Ui::ChooseDispatch *ui;
    CustomDispatch* cd2;
    QVector<double> SA_choose;
    QVector<QString> stations;
    QVector<double> stationsAVGSL;
};

#endif // CHOOSEDISPATCH_H
