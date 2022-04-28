#include "ctc_choosetrackline.h"
#include "ui_ctc_choosetrackline.h"

//constructor for Choose Line UI
CTC_ChooseTrackLine::CTC_ChooseTrackLine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_ChooseTrackLine)
{
    ui->setupUi(this);
}

//destructor for Choose Line UI
CTC_ChooseTrackLine::~CTC_ChooseTrackLine()
{
    delete ui;
}

//internal slot - runs when the user selects the "Red Line" button
//no inputs/outputs
//sends a signal to the main window specifying that the user has selected the red line
void CTC_ChooseTrackLine::on_RedLineButton_clicked()
{
    emit dispatchRed();
}

//internal slot - runs when the user selects the "Green Line" button
//no inputs/outputs
//sends a signal to the main window specifying that the user has selected the green line
void CTC_ChooseTrackLine::on_GreenLineButton_clicked()
{
    emit dispatchGreen();
}

