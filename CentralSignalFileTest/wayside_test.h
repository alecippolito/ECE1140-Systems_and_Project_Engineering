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

private slots:
    void receiveTrainData(int, double);

private:
    Ui::Wayside_test *ui;
};

#endif // WAYSIDE_TEST_H
