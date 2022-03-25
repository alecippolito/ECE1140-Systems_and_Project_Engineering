#ifndef SYSTEM_CENTRALTIMER_H
#define SYSTEM_CENTRALTIMER_H

#include <QDialog>
#include "ctc.h"

namespace Ui {
class System_CentralTimer;
}

class System_CentralTimer : public QDialog
{
    Q_OBJECT

public:
    explicit System_CentralTimer(QWidget *parent = nullptr);
    ~System_CentralTimer();

private slots:
    void updateTime();

private:
    Ui::System_CentralTimer *ui;
    CTC *ctc;
    int secondsInDay;
    int dayOfWeek;

signals:
    void sendTime(int,int);
    void sendTimeDialation(int);
};

#endif // SYSTEM_CENTRALTIMER_H
