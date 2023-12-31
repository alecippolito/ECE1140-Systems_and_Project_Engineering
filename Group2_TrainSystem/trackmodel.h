#ifndef TRACKMODEL_H
#define TRACKMODEL_H

#include <QDialog>
#include <QVector>
#include "Block.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TrackModel;
}
QT_END_NAMESPACE

class TrackModel : public QDialog
{
    Q_OBJECT

public:
    explicit TrackModel(QWidget *parent = nullptr);
    ~TrackModel();
    void loadRedLine();
    void loadGreenLine();
    void parseInfrastructure();
    void updateUI();
    Block *redline[77]; //76 blocks + 1 block for yard
    Block *greenline[152];  //150 blocks + 2 blocks for yard
    bool greenLineBlockInfoShowing = true;  //default true, toggled with UI button

private slots:
    void changeOccupancy(bool, int, int);    //bool - which track line to go to, int - for track number, int - new occupancy
    void changeStatuses(bool, int, bool);      //bool - which track line to go to, int - for track number, bool - open or not

    void on_pushButton_clicked();

    void on_blockNumberSpinBox_valueChanged(int arg1);

signals:
    void sendOccupancy(bool, int, int);       //bool, red track line or not, int - track number, int - occupancy
    void sendOccupancyVector(QVector<int>);         //if the above signal doesn't work
    void sendStatuses(bool, int, bool);         //redline or not, track block number, status
    void sendStatusesVector(QVector<bool>);         //if the above signal doesn't work


private:
    Ui::TrackModel *ui;

    //vectors containing data about the track occupancies, statuses
    QVector<int> trackOccupanciesRed = QVector<int>(77,0);
    QVector<int> trackOccupanciesGreen = QVector<int>(152,0);
    QVector<bool> trackStatusesRed = QVector<bool>(77,true);
    QVector<bool> trackStatusesGreen = QVector<bool>(152,true);

    //vector containing switch destinations
};

#endif // TRACKMODEL_H
