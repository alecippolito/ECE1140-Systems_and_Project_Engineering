#ifndef CTC_CHANGESWITCHES_H
#define CTC_CHANGESWITCHES_H

#include <QDialog>

namespace Ui {
class CTC_ChangeSwitches;
}

class CTC_ChangeSwitches : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_ChangeSwitches(QWidget *parent = nullptr);
    ~CTC_ChangeSwitches();

private slots:
    void receiveCTCMode(bool);
    void on_LineBox_activated(int index);
    void on_SwitchLocationBox_activated(int index);
    void on_SwitchStateButton_clicked();

signals:
    //calls the CTC and requests its current mode - used for internal purposes
    void requestCTCMode();

    //sends data about switch locations to main window
    void sendSwitchData(bool,int,int);

private:
    Ui::CTC_ChangeSwitches *ui;

    //internal variables
    bool CTCmode;
    QVector<QString> redSwitchLocations;
    QVector<QString> redSwitchConnection1;
    QVector<QString> redSwitchConnection2;
    QVector<QString> greenSwitchLocations;
    QVector<QString> greenSwitchConnection1;
    QVector<QString> greenSwitchConnection2;
};

#endif // CTC_CHANGESWITCHES_H
