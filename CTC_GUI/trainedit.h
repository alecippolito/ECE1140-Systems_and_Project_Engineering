#ifndef TRAINEDIT_H
#define TRAINEDIT_H

#include <QDialog>

namespace Ui {
class TrainEdit;
}

class TrainEdit : public QDialog
{
    Q_OBJECT

public:
    explicit TrainEdit(QWidget *parent = nullptr);
    ~TrainEdit();

private:
    Ui::TrainEdit *ui;
};

#endif // TRAINEDIT_H
