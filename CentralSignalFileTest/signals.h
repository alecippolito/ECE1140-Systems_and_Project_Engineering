#ifndef SIGNALS_H
#define SIGNALS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Signals; }
QT_END_NAMESPACE

class Signals : public QMainWindow
{
    Q_OBJECT

public:
    Signals(QWidget *parent = nullptr);
    ~Signals();

signals:
    void sendTrainData(int, double);

private slots:
    void receiveTrainData(int, double);

private:
    Ui::Signals *ui;
};
#endif // SIGNALS_H
