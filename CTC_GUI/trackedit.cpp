#include "trackedit.h"
#include "ui_trackedit.h"

TrackEdit::TrackEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrackEdit)
{
    ui->setupUi(this);
}

TrackEdit::~TrackEdit()
{
    delete ui;
}

void TrackEdit::receiveTrackDataEdit(QVector<TrackBlock> temp)
{
    TrackVectorEdit = temp;
}
