#ifndef WAYSIDE_TEST_H
#define WAYSIDE_TEST_H

#include <QDialog>

namespace Ui {
class Wayside_test;
}

class Wayside_test : public QDialog
{
    Q_OBJECT

public:
    explicit Wayside_test(QWidget *parent = nullptr);
    ~Wayside_test();

private:
    Ui::Wayside_test *ui;

private slots:
    void receiveTrainData(int, double);
};

#endif // WAYSIDE_TEST_H
