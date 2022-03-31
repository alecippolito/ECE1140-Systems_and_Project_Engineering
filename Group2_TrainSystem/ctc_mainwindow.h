#ifndef CTC_MAINWINDOW_H
#define CTC_MAINWINDOW_H

#include <QDialog>

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
};

#endif // CTC_MAINWINDOW_H
