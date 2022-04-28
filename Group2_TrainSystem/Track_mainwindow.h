#ifndef TRACK_MAINWINDOW_H
#define TRACK_MAINWINDOW_H


#include <QMainWindow>
#include "Track_controller.h"
#include "PLC.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Track_mainwindow; }
QT_END_NAMESPACE

class Track_mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    Track_mainwindow(QWidget *parent = nullptr);
    ~Track_mainwindow();

    Track_controller *track;

    void update_PLC();

private:
    Ui::Track_mainwindow *ui;
    PLC *plc;
    int timer;

private slots:
    void receiveTrainData(bool,QVector<bool>,QVector<double>);
protected:
        void timerEvent(QTimerEvent *Event) override;

};
#endif

