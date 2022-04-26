#include "mockWayside.h"
#include <QDebug>

Route::Route(int whichStation, bool isGreenline, Block *trackModel[])
{
    stationNumGreenline = whichStation;
    if(isGreenline)
    {
        allocateMemoryForRoutesAndParseGreenline(trackModel);
    }
    else
    {

    }
}

void Route::allocateMemoryForRoutesAndParseGreenline(Block *trackModel[])
{
    //pioneer, edgebrook, station, whited
    if(stationNumGreenline == 1 || stationNumGreenline == 2 || stationNumGreenline == 3 || stationNumGreenline == 4){
        for(int i=0; i<138; i++)
        {
            pioneerGreenline[i] = new Block(i);
            edgebrookGreenline[i] = new Block(i);
            stationGreenline[i] = new Block(i);
            whitedGreenline[i] = new Block(i);

            pioneerGreenline[i] = trackModel[pioneerBlockNumbers[i]-1];
            edgebrookGreenline[i] = trackModel[edgebrookBlockNumbers[i]-1];
            stationGreenline[i] = trackModel[stationBlockNumbers[i]-1];
            whitedGreenline[i] = trackModel[whitedBlockNumbers[i]-1];
        }
    }

    if(stationNumGreenline == 5 || stationNumGreenline == 6 || stationNumGreenline == 7 || stationNumGreenline == 8 || stationNumGreenline == 9 || stationNumGreenline == 10){
        //southbank, central, inglewood, overbrook, glenbury, dormont
        for(int i=0; i<93; i++)
        {
            southbankGreenline[i] = new Block(i);
            centralGreenline[i] = new Block(i);
            inglewoodGreenline[i] = new Block(i);
            overbrookGreenline[i] = new Block(i);
            glenburyGreenline[i] = new Block(i);
            dormontGreenline[i] = new Block(i);

            southbankGreenline[i] = trackModel[southbankBlockNumbers[i]-1];
            centralGreenline[i] = trackModel[centralBlockNumbers[i]-1];
            inglewoodGreenline[i] = trackModel[inglewoodBlockNumbers[i]-1];
            overbrookGreenline[i] = trackModel[overbrookBlockNumbers[i]-1];
            glenburyGreenline[i] = trackModel[glenburyBlockNumbers[i]-1];
            dormontGreenline[i] = trackModel[dormontBlockNumbers[i]-1];
        }
    }

    if(stationNumGreenline == 11 || stationNumGreenline == 12 || stationNumGreenline == 13){
        //mtLebanon, poplar, castleShannon
        for(int i=0; i<117; i++)
        {
            mtLebanonGreenline[i] = new Block(i);
            poplarGreenline[i] = new Block(i);
            castleShannonGreenline[i] = new Block(i);

            mtLebanonGreenline[i] = trackModel[mtLebanonBlockNumbers[i]-1];
            poplarGreenline[i] = trackModel[poplarBlockNumbers[i]-1];
            castleShannonGreenline[i] = trackModel[castleShannonBlockNumbers[i]-1];
        }
    }
}


Block* Route::getNextBlock(int stationNumber, int index)
{
    if(stationNumber == 1)
    {
        return pioneerGreenline[index];
    }
    else if(stationNumber ==2)
    {
        return edgebrookGreenline[index];
    }
    else if(stationNumber ==3)
    {
        return stationGreenline[index];
    }
    else if(stationNumber ==4)
    {
        return whitedGreenline[index];
    }
    else if(stationNumber ==5)
    {
        return southbankGreenline[index];
    }
    else if(stationNumber ==6)
    {
        return centralGreenline[index];
    }
    else if(stationNumber ==7)
    {
        return inglewoodGreenline[index];
    }
    else if(stationNumber ==8)
    {
        return overbrookGreenline[index];
    }
    else if(stationNumber ==9)
    {
        return glenburyGreenline[index];
    }
    else if(stationNumber ==10)
    {
        return dormontGreenline[index];
    }
    else if(stationNumber ==11)
    {
        return mtLebanonGreenline[index];
    }
    else if(stationNumber ==12)
    {
        return poplarGreenline[index];
    }
    else if(stationNumber ==13)
    {
        return castleShannonGreenline[index];
    }
    else{
        qDebug() << "ERROR: INVALID STATION NUMBER ";
        return nullptr;
    }

}
