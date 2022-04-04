#ifndef CTC_CHOOSETRACKLINE_H
#define CTC_CHOOSETRACKLINE_H

#include <QDialog>

namespace Ui {
class CTC_ChooseTrackLine;
}

class CTC_ChooseTrackLine : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_ChooseTrackLine(QWidget *parent = nullptr);
    ~CTC_ChooseTrackLine();

private slots:

    void on_RedLineButton_clicked();
    void on_GreenLineButton_clicked();

signals:
    void dispatchRed();
    void dispatchGreen();

private:
    Ui::CTC_ChooseTrackLine *ui;
};

#endif // CTC_CHOOSETRACKLINE_H
