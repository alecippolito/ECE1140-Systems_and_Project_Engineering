#ifndef CTC_TEST_H
#define CTC_TEST_H

#include <QDialog>

namespace Ui {
class CTC_test;
}

class CTC_test : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_test(QWidget *parent = nullptr);
    ~CTC_test();

private slots:
    void on_pushButton_clicked();

signals:
    void sendTrainData(int, double);

private:
    Ui::CTC_test *ui;
};

#endif // CTC_TEST_H
