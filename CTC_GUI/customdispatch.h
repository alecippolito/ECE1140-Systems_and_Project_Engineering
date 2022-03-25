#ifndef CUSTOMDISPATCH_H
#define CUSTOMDISPATCH_H

#include <QDialog>
#include <QDateTime>

namespace Ui {
class CustomDispatch;
}

class CustomDispatch : public QDialog
{
    Q_OBJECT

public:
    explicit CustomDispatch(QWidget *parent = nullptr);
    int returnRow();            //used for the destination name, and the authority
    QString returnName();
    int returnAuthority();
    QDateTime returnDepartDT();   //departure time
    QDateTime returnArriveDT();   //arrival time
    double returnSpeed();       //sugggested speed
    QString returnStatus();

    ~CustomDispatch();

private slots:
    void on_listWidget_currentTextChanged(const QString &currentText);
    void on_pushButton_clicked();
    void on_checkBox_2_stateChanged(int arg1);
    void on_checkBox_stateChanged(int arg1);
    void receiveTrackData(QVector<double>,QVector<QString>,QVector<int>);

signals:
    void dispatchSuccessful();

private:
    Ui::CustomDispatch *ui;
    void calcSpeed();
    void calcStatus();
    void calcAuthority();
    void setSelectedName();
    double suggestedSpeed;
    double standardSpeed;
    int authority;
    QString selectedName;
    QString status;
    QVector<QString> stations;
    QVector<int> StationAuthorities;
    QVector<double> StationDistances;
};

#endif // CUSTOMDISPATCH_H
