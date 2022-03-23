#ifndef TRACKEDIT_H
#define TRACKEDIT_H

#include <QDialog>

struct TrackBlock{
    QString name;
    int occupancy;
    bool open;
};

namespace Ui {
class TrackEdit;
}

class TrackEdit : public QDialog
{
    Q_OBJECT

private slots:
    void receiveTrackDataEdit(QVector<TrackBlock>);

signals:
    void succesfulEdit();

public:
    explicit TrackEdit(QWidget *parent = nullptr);
    ~TrackEdit();

private:
    Ui::TrackEdit *ui;
    QVector<TrackBlock> TrackVectorEdit;
};

#endif // TRACKEDIT_H
