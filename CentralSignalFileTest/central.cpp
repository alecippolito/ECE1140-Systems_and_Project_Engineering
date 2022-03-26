#include "central.h"

Central::Central()
{
    //create two Ui's for both the ctc and the wayside
    ctc = new CTC_test;
    wayside = new Wayside_test;

    //connect the signals and slots together - sending train data to the wayside
    QObject::connect(ctc, SIGNAL(sendTrainData(int,double)), wayside, SLOT(receiveTrainData(int,double)));

    //show both UI's, use the show function to make sure they can both be used at the same time
    ctc->show();
    wayside->show();
}
