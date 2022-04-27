#include "mockWayside.h"
#include <QDebug>

Route::Route(int whichStation, bool isGreenline, Block *trackModel[])
{
    stationNum = whichStation;
    if(isGreenline)
    {
        allocateMemoryForRoutesAndParseGreenline(trackModel);
    }
    else
    {
        allocateMemoryForRoutesAndParseRedline(trackModel);
    }
}

void Route::allocateMemoryForRoutesAndParseGreenline(Block *trackModel[])
{
    //pioneer, edgebrook, station, whited
    if(stationNum == 1 || stationNum == 2 || stationNum == 3 || stationNum == 4){
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

    if(stationNum == 5 || stationNum == 6 || stationNum == 7 || stationNum == 8 || stationNum == 9 || stationNum == 10){
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

    if(stationNum == 11 || stationNum == 12 || stationNum == 13){
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

void Route::allocateMemoryForRoutesAndParseRedline(Block *trackModel[])
{
    //shadyside
    if(stationNum == 14){
        for(int i=0; i<7; i++)
        {
            shadysideRedline[i] = new Block(i);

            shadysideRedline[i] = trackModel[shadysideBlockNumbers[i]-1];
        }
    }
    //herron ave
    if(stationNum == 15){
        for(int i=0; i<17; i++)
        {
            herronAveRedline[i] = new Block(i);

            herronAveRedline[i] = trackModel[herronAveBlockNumbers[i]-1];
        }
    }
    //swissville
    if(stationNum == 16){
        for(int i=0; i<27; i++)
        {
            swissvilleRedline[i] = new Block(i);

            swissvilleRedline[i] = trackModel[swissvilleBlockNumbers[i]-1];
        }
    }
    //penn station
    if(stationNum == 17){
        for(int i=0; i<35; i++)
        {
            pennStationRedline[i] = new Block(i);

            pennStationRedline[i] = trackModel[pennStationBlockNumbers[i]-1];
        }
    }
    //steel plaza
    if(stationNum == 18){
        for(int i=0; i<55; i++)
        {
            steelPlazaRedline[i] = new Block(i);

            steelPlazaRedline[i] = trackModel[steelPlazaBlockNumbers[i]-1];
        }
    }
    //first ave
    if(stationNum == 19){
        for(int i=0; i<75; i++)
        {
            firstAveRedline[i] = new Block(i);

            firstAveRedline[i] = trackModel[firstAveBlockNumbers[i]-1];
        }
    }
    //station square
    if(stationNum == 20){
        for(int i=0; i<81; i++)
        {
            stationSquareRedline[i] = new Block(i);

            stationSquareRedline[i] = trackModel[stationSquareBlockNumbers[i]-1];
        }
    }
    //south hills junction
    if(stationNum == 21){
        for(int i=0; i<105; i++)
        {
            southHillsJunctionRedline[i] = new Block(i);

            southHillsJunctionRedline[i] = trackModel[southHillsJunctionBlockNumbers[i]-1];
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
    else if(stationNumber ==14)
    {
        return shadysideRedline[index];
    }
    else if(stationNumber ==15)
    {
        return herronAveRedline[index];
    }
    else if(stationNumber ==16)
    {
        return swissvilleRedline[index];
    }
    else if(stationNumber ==17)
    {
        return pennStationRedline[index];
    }
    else if(stationNumber ==18)
    {
        return steelPlazaRedline[index];
    }
    else if(stationNumber ==19)
    {
        return firstAveRedline[index];
    }
    else if(stationNumber ==20)
    {
        return stationSquareRedline[index];
    }
    else if(stationNumber ==21)
    {
        return southHillsJunctionRedline[index];
    }
    else{
        qDebug() << "ERROR: INVALID STATION NUMBER ";
        return nullptr;
    }

}
