#ifndef CTC_OPENCLOSETRACK_H
#define CTC_OPENCLOSETRACK_H

#include <QDialog>

namespace Ui {
class CTC_OpenCloseTrack;
}

class CTC_OpenCloseTrack : public QDialog
{
    Q_OBJECT

public:
    explicit CTC_OpenCloseTrack(QWidget *parent = nullptr);
    ~CTC_OpenCloseTrack();

private slots:
    void on_ChangeTrackButton_clicked();

    void on_LineNameBox_currentIndexChanged(int index);

signals:
    void sendUpdatedTrackBlock(bool,int,bool);

private:
    Ui::CTC_OpenCloseTrack *ui;
};

#endif // CTC_OPENCLOSETRACK_H
