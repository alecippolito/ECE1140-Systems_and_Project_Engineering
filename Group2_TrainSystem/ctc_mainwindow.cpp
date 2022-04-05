#include "ctc_mainwindow.h"
#include "ui_ctc_mainwindow.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>

CTC_MainWindow::CTC_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CTC_MainWindow)
{
    ui->setupUi(this);

    //initialize the UI to the correct values
    initializeTrackVector();
    number = 0;
    ui->previousButton->setVisible(false);
    ui->NextButton->setVisible(false);
    trainSet = 0;
    trackSetRed = 0;
    trackSetGreen = 0;
    setSize = 20;

    //you WILL set the font to Consolas
    QFont font("Consolas",9);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
}

CTC_MainWindow::~CTC_MainWindow()
{
    delete ui;
}

void CTC_MainWindow::on_actionDispatch_Train_triggered()
{
    //call a choose line window
    cl = new CTC_ChooseTrackLine();
    cl->show();


    //connect the signals generated from the choose line ui to the main window - different data will be sent to the dispatch window depending
    // on what the user selects
    QObject::connect(cl, SIGNAL(dispatchRed()), this, SLOT(RedLineSelected()));
    QObject::connect(cl, SIGNAL(dispatchGreen()), this, SLOT(GreenLineSelected()));

}

void CTC_MainWindow::RedLineSelected()
{
    //call a new dispatch window
    dp = new CTC_DispatchTrain();
    dp->show();

    //connect the signals
}

void CTC_MainWindow::GreenLineSelected()
{
    //call a new dispatch window
    dp = new CTC_DispatchTrain();
    dp->show();

    //connect the signal
}

void CTC_MainWindow::initializeTrackVector()
{
    //go through every block and station in the Pittsburgh RED LINE rail system
    TrackBlock tempTrack;

    //define the list of station names HERE
    stationNamesRed = {"Shadyside","Herron Ave","Swissville","Penn station","Steel Plaza","First Ave","Station Sqaure","South Hills Junction"};
    stationNamesGreen = {"Pioneer","Edgebrook","Station","Whited","South bank","Central","Inglewood","Overbrook","Glenbury","Dormont"
                         ,"Mt. Lebanon", "Poplar","Castle Shannon"};


    //initialize the authorities and distances for every station from the YARD
    //parallel block means one track going one direction, and other block going the other direction
    stationDistancesGreen = {15452.6,14652.6,13852.6,12652.6,18552.6,11043.6,10593.6,10143.6,300,1300,1700,4586.6,5211.6}; //measured in km
    stationAuthoritiesGreen ={125,117,111,105,145,89,80,71,4,12,16,27,35};  //track blocks

    stationDistancesRed = {250,625,1875,2225,2745,3265,3465,4183.2};
    stationAuthoritiesRed = {4,11,16,20,30,40,42,54};

    QVector<QString> BlockNamesRed = {"Red AA1","Red AA2","Red A1","Red A2","Red A3","Red B4","Red B5","Red B6","Red C7","Red C8","Red C9","Red D10","Red D11",
                                      "Red D12","Red E13","Red E14","Red E15","Red F16","Red F17","Red F18","Red F19","Red F20","Red G21","Red G22",
                                      "Red G23","Red H24","Red H25","Red H26","Red H27","Red H28","Red H29","Red H30","Red H31","Red H32","Red H33",
                                      "Red H34", "Red H35","Red H36","Red H37","Red H38","Red H39","Red H40","Red H41", "Red H42","Red H43","Red H44",
                                      "Red H45","Red I46","Red I47","Red I48","Red J49","Red J50","Red J51","Red J52","Red J53","Red J54", "Red K55",
                                      "Red K56","Red K57","Red L58","Red L59","Red L60","Red M61","Red M62","Red M63","Red N64","Red N65","Red N66",
                                      "Red O67","Red P68","Red P69","Red P70","Red Q71","Red R72","Red S73","Red S74","Red S75","Red T76"};

    QVector<QString> BlockNamesGreen = {"Green AA1","Green AA2","Green A1","Green A2","Green A3","Green B4","Green B5","Green B6","Green C7", "Green C8",
                                        "Green C9","Green C10","Green C11","Green C12","Green D13","Green D14","Green D15","Green D16","Green E17","Green E18",
                                        "Green E19","Green E20", "Green F21","Green F22","Green F23","Green F24","Green F25","Green F26","Green F27","Green F28",
                                        "Green G29","Green G30","Green G31","Green G32","Green H33","Green H34","Green H35","Green I36","Green I37","Green I38",
                                        "Green I39", "Green I40","Green I41","Green I42","Green I43","Green I44","Green I45","Green I46","Green I47","Green I48",
                                        "Green I49","Green I50","Green I51","Green I52","Green I53","Green I54","Green I55","Green I56","Green I57",
                                        "Green J58","Green J59","Green J60","Green J61","Green J62","Green K63","Green K64","Green K65","Green K66","Green K67",
                                        "Green K68","Green L69","Green L70","Green L71","Green L72","Green L73","Green M74","Green M75","Green M76","Green N77",
                                        "Green N78","Green N79","Green N80","Green N81","Green N82","Green N83","Green N84","Green N85","Green O86", "Green O87",
                                        "Green O88","Green P89","Green P90","Green P91","Green P92","Green P93","Green P94","Green P95","Green P96","Green P97",
                                        "Green Q98","Green Q99","Green Q100","Green R101","Green S102","Green S103","Green S104","Green T105","Green T106",
                                        "Green T107","Green T108","Green T109","Green U110","Green U111","Green U112","Green U113","Green U114","Green U115",
                                        "Green U116","Green V117","Green V118","Green V119","Green V120","Green V121","Green W122","Green W123","Green W124",
                                        "Green W125","Green W126","Green W127","Green W128","Green W129","Green W130","Green W131","Green W132","Green W133",
                                        "Green W134","Green W135","Green W136","Green W137","Green W138","Green W139","Green W140","Green W141","Green W142",
                                        "Green W143","Green X144","Green X145","Green X146","Green Y147","Green Y148","Green Y149","Green Z150"};



    //loop through both vectors and add all data
    for (unsigned i = 0; i < BlockNamesRed.size(); i++)
    {
        tempTrack.name = BlockNamesRed[i];
        tempTrack.occupancy = 0;
        tempTrack.open = true;
        TrackVectorRed.push_back(tempTrack);
    }

    //loop through both vectors and add all data
    for (unsigned i = 0; i < BlockNamesGreen.size(); i++)
    {
        tempTrack.name = BlockNamesGreen[i];
        tempTrack.occupancy = 0;
        tempTrack.open = true;
        TrackVectorGreen.push_back(tempTrack);
    }
}

void CTC_MainWindow::on_previousButton_clicked()
{
    if (trainSet != 0)
        {
            trainSet--;
        }


        if (trackSetRed != 0)
        {
            trackSetRed--;
        }

        if (trackSetGreen != 0)
        {
            trackSetGreen--;
        }

        if (ui->label->text() == "Train Statuses")
        {
            on_actionView_Train_Statuses_triggered();
        }
        else if (ui->label->text() == "Red Line Track Block Statuses")
        {
            on_actionView_Red_Line_Statuses_triggered();
        }
        else if (ui->label->text() == "Green Line Track Block Statuses")
        {
            on_actionView_Green_Line_Statuses_triggered();
        }
}


void CTC_MainWindow::on_NextButton_clicked()
{
    if (setSize*(trainSet+1) <= TrainVector.size()-1)
    {
        trainSet++;
    }

    if (setSize*(trackSetRed+1) <= TrackVectorRed.size()-1)
    {
        trackSetRed++;
    }

    if (setSize*(trackSetGreen+1) <= TrackVectorGreen.size()-1)
    {
        trackSetGreen++;
    }

    if (ui->label->text() == "Train Statuses")
    {
        on_actionView_Train_Statuses_triggered();
    }
    else if (ui->label->text() == "Red Line Track Block Statuses")
    {
        on_actionView_Red_Line_Statuses_triggered();
    }
    else if (ui->label->text() == "Green Line Track Block Statuses")
    {
        on_actionView_Green_Line_Statuses_triggered();
    }
}


void CTC_MainWindow::on_actionView_Green_Line_Statuses_triggered()
{
    //display all Tracks Blocks/ Stations and their statuses as a string on the GUI screen
    //do not include the authority value - used for internal purposes

    QString TrackString = "Track Name    Status    Occupancy    \n";
    //14, 10, 13, 12, 28, 21, 11, 18

    trainSet = 0;
    trackSetRed = 0;
    for (unsigned int i = setSize*trackSetGreen; i < qMin(TrackVectorGreen.size(), setSize*trackSetGreen+setSize); i++)
    {
        TrackString += TrackVectorGreen[i].name + spaces(14-TrackVectorGreen[i].name.length());
        TrackString += (TrackVectorGreen[i].open == true ? "Open" : "Closed") + spaces(10-(TrackVectorGreen[i].open == true ? 4 : 5));
        TrackString += QString::number(TrackVectorGreen[i].occupancy) + spaces(13-QString::number(TrackVectorGreen[i].occupancy).length()) + "\n";
    }


    ui->label->setText("Green Line Track Block Statuses");
    ui->label_2->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}


void CTC_MainWindow::on_actionView_Red_Line_Statuses_triggered()
{
    //display all Tracks Blocks/ Stations and their statuses as a string on the GUI screen
    //do not include the authority value - used for internal purposes

    QString TrackString = "Track Name    Status    Occupancy    \n";
    //14, 10, 13


    trainSet = 0;
    trackSetGreen = 0;
    for (unsigned int i = setSize*trackSetRed; i < qMin(TrackVectorRed.size(), setSize*trackSetRed+setSize); i++)
    {
        TrackString += TrackVectorRed[i].name + spaces(14-TrackVectorRed[i].name.length());
        TrackString += (TrackVectorRed[i].open == true ? "Open" : "Closed") + spaces(10-(TrackVectorRed[i].open == true ? 4 : 5));
        TrackString += QString::number(TrackVectorRed[i].occupancy) + spaces(13-QString::number(TrackVectorRed[i].occupancy).length()) + "\n";
    }


    ui->label->setText("Red Line Track Block Statuses");
    ui->label_2->setText(TrackString);
    ui->previousButton->setVisible(true);
    ui->NextButton->setVisible(true);
}


void CTC_MainWindow::on_actionView_Train_Statuses_triggered()
{

}


QString CTC_MainWindow::spaces(int num)
{
    QString temp = "";
    for (int i = 0; i < num; i++)
    {
        temp += " ";
    }
    return temp;
}

