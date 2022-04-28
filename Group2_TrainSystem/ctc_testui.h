#ifndef CTC_TESTUI_H
#define CTC_TESTUI_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class CTC_TestUI;
}

class CTC_TestUI : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_TestUI(QWidget *parent = nullptr);
    ~CTC_TestUI();

private slots:
    void receiveSwitchEdit(bool,int,int);
    void receiveTrackEdit(bool,int,bool);
    void on_minusButton_clicked();
    void on_plusButton_clicked();
    void on_newOccupancyButton_clicked();
    void receiveNewAuthority(bool,QVector<bool>,QVector<double>);

signals:
    void sendOccupancies(QVector<bool>,QVector<bool>);

private:
    Ui::CTC_TestUI *ui;
    QMessageBox *message;
    int routeIndex;
    QVector<int> greenRoute;
    QVector<bool> occupancyVectorGreen;
    QVector<bool> occupancyVectorBlockOrderGreen;
};

#endif // CTC_TESTUI_H
