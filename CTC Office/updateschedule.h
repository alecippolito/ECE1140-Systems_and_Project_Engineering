#ifndef UPDATESCHEDULE_H
#define UPDATESCHEDULE_H

#include <QDialog>

namespace Ui {
class UpdateSchedule;
}

class UpdateSchedule : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateSchedule(QWidget *parent = nullptr);
    ~UpdateSchedule();

private:
    Ui::UpdateSchedule *ui;
};

#endif // UPDATESCHEDULE_H
