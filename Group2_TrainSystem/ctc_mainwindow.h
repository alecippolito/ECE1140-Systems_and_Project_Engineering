#ifndef CTC_MAINWINDOW_H
#define CTC_MAINWINDOW_H

#include <QDialog>
#include <QDateTime>
#include "ctc_choosetrackline.h"
#include "ctc_dispatchtrain.h"

//include a Train struct - CTC ONLY!!!
struct Train_CTC{
    QString TrainNumber;
    QString destination;
    QDateTime departure;
    QDateTime arrival;
    int authority;
    double suggestedSpeed;
};

namespace Ui {
class CTC_MainWindow;
}

class CTC_MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_MainWindow(QWidget *parent = nullptr);
    ~CTC_MainWindow();

private:
    Ui::CTC_MainWindow *ui;

    //define pointers of all sub-modules and UI's
    CTC_ChooseTrackLine *cl;
    CTC_DispatchTrain *dp;
};

#endif // CTC_MAINWINDOW_H
