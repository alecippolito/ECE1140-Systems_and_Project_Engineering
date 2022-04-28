#include "ctc_changeswitches.h"
#include "ui_ctc_changeswitches.h"

#include <QMessageBox>

//constructor for this UI
CTC_ChangeSwitches::CTC_ChangeSwitches(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTC_ChangeSwitches)
{
    ui->setupUi(this);

    //all possible switch locations and connections
    //GREEN
    //13 - 12,1
    //29 - 30,150
    //57 - 151,58
    //63 - 62,152
    //77 - 76,101
    //85 - 86,100

    //RED
    //9 - 10,77
    //16 - 1,15
    //27 - 28,76
    //33 - 32, 72
    //38 - 39,71
    //44 - 43, 67
    //52 - 53,66

    //have all switch locations and connection locations in a vector
    redSwitchLocations = {"9","16","27","33","38","44","52"};
    redSwitchConnection1 = {"10","1","28","32","39","43","53"};
    redSwitchConnection2 = {"77","15","76","72","71","67","66"};
    greenSwitchLocations = {"13","29","57","63","77","85"};
    greenSwitchConnection1 = {"12","30","151","62","76","86"};
    greenSwitchConnection2 = {"1","150","58","152","101","100"};

    //initialize UI for the first option in the red line
    ui->LineBox->setCurrentIndex(0);
    for (unsigned int i = 0; i < redSwitchLocations.size(); i++)
    {
        ui->SwitchLocationBox->addItem(redSwitchLocations[i]);
    }
    ui->DestinationBox->addItem(redSwitchConnection1[0]);
    ui->DestinationBox->addItem(redSwitchConnection2[0]);
}

//desructor for this UI
CTC_ChangeSwitches::~CTC_ChangeSwitches()
{
    delete ui;
}

//internal slot - activated when the user changes the line
//changes the possible switches and locations to edit, since we are on a different line
//inputs: int - index in the list of possible values in the line Box
void CTC_ChangeSwitches::on_LineBox_activated(int index)
{
    ui->DestinationBox->clear();
    ui->SwitchLocationBox->clear();
    if (index == 0)
    {
        //redline
        for (unsigned int i = 0; i < redSwitchLocations.size(); i++)
        {
            ui->SwitchLocationBox->addItem(redSwitchLocations[i]);
        }
        ui->DestinationBox->addItem(redSwitchConnection1[0]);
        ui->DestinationBox->addItem(redSwitchConnection2[0]);
    }
    else
    {
        //greenline
        for (unsigned int i = 0; i < greenSwitchLocations.size(); i++)
        {
            ui->SwitchLocationBox->addItem(greenSwitchLocations[i]);
        }
        ui->DestinationBox->addItem(greenSwitchConnection1[0]);
        ui->DestinationBox->addItem(greenSwitchConnection2[0]);
    }
}

//internal slot - activated either when the line changes, or the user manually selects the switch
//changes the two selectable locations in the destination menu
//inputs: int - index in the list of possible values in the switch location Box
void CTC_ChangeSwitches::on_SwitchLocationBox_activated(int index)
{
    ui->DestinationBox->clear();
    if (ui->LineBox->currentIndex() == 0)
    {
        //redline
        ui->DestinationBox->addItem(redSwitchConnection1[index]);
        ui->DestinationBox->addItem(redSwitchConnection2[index]);
    }
    else
    {
        //greenline
        ui->DestinationBox->addItem(greenSwitchConnection1[index]);
        ui->DestinationBox->addItem(greenSwitchConnection2[index]);
    }
}

//internal slot - activated when the user clicks the Switch State button
//checks if the CTC is in manual mode. If it is, send data specifying the line, switch location, and switch connection location
void CTC_ChangeSwitches::on_SwitchStateButton_clicked()
{
    //request CTC mode
    emit requestCTCMode();

    //create a error message instance
    QMessageBox* error = new QMessageBox();

    //test for manual mode
    if (CTCmode == true)
    {
        //if yes, emit signal containing data
        emit sendSwitchData(ui->LineBox->currentIndex() == 0 ? true : false,ui->SwitchLocationBox->itemText(ui->SwitchLocationBox->currentIndex()).toInt(),ui->DestinationBox->itemText(ui->DestinationBox->currentIndex()).toInt());
    }
    else
    {
        //if not, throw an error
        error->setText("CTC is in automatic mode!\nSwitch to manual mode.");
        error->exec();
    }

    delete error;
}

//internal slot - activated after we have request the CTC mode from the mainwindow, this is the function that receives the CTC mode
//sends the data to an internal variable inside this UI so we can use later
//inputs: bool - if CTC mode is manual or not
void CTC_ChangeSwitches::receiveCTCMode(bool mode)
{
    CTCmode = mode;
}

