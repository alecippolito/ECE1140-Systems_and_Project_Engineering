#ifndef CHOOSELINE_H
#define CHOOSELINE_H

#include <QDialog>

namespace Ui {
class ChooseLine;
}

class ChooseLine : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseLine(QWidget *parent = nullptr);
    ~ChooseLine();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void dispatchRed();
    void dispatchGreen();

private:
    Ui::ChooseLine *ui;
};

#endif // CHOOSELINE_H
