#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "Track_controller.h"
#include "PLC.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Track_controller *track;

    void update_PLC();

private:
    Ui::MainWindow *ui;
    PLC *plc;
    int timer;
protected:
        void timerEvent(QTimerEvent *Event) override;

};
#endif

