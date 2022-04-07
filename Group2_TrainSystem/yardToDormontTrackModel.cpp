#include "yardToDormontTrackModel.h"

YardDormontTrackModel::YardDormontTrackModel()
{
    for(int i=0; i<=11; i++)
    {
        track[i] = new Block(1);
    }

    track[0]->setBlockNumber(152);
    track[0]->setBlockLength(100);
    track[0]->setSpeedLimitKmHr(30);
    track[1]->setBlockNumber(63);
    track[1]->setBlockLength(100);
    track[1]->setSpeedLimitKmHr(70);
    track[2]->setBlockNumber(64);
    track[2]->setBlockLength(100);
    track[2]->setSpeedLimitKmHr(70);
    track[3]->setBlockNumber(65);
    track[3]->setBlockLength(200);
    track[3]->setSpeedLimitKmHr(70);
    track[4]->setBlockNumber(66);
    track[4]->setBlockLength(200);
    track[4]->setSpeedLimitKmHr(70);
    track[5]->setBlockNumber(67);
    track[5]->setBlockLength(100);
    track[5]->setSpeedLimitKmHr(40);
    track[6]->setBlockNumber(68);
    track[6]->setBlockLength(100);
    track[6]->setSpeedLimitKmHr(40);
    track[7]->setBlockNumber(69);
    track[7]->setBlockLength(100);
    track[7]->setSpeedLimitKmHr(40);
    track[8]->setBlockNumber(70);
    track[8]->setBlockLength(100);
    track[8]->setSpeedLimitKmHr(40);
    track[9]->setBlockNumber(71);
    track[9]->setBlockLength(100);
    track[9]->setSpeedLimitKmHr(40);
    track[10]->setBlockNumber(72);
    track[10]->setBlockLength(100);
    track[10]->setSpeedLimitKmHr(40);
    track[11]->setBlockNumber(73);
    track[11]->setBlockLength(100);
    track[11]->setSpeedLimitKmHr(40);
}

double YardDormontTrackModel::returnSpeedLimit(int trackBlockNumber)
{
    return (trackBlockNumber == 152 ? track[0]->speedLimitKmHr : track[trackBlockNumber-57]->speedLimitKmHr);
}

double YardDormontTrackModel::returnTrackBlockLength(int trackBlockNumber)
{
    return (trackBlockNumber == 152 ? track[0]->getBlockLength() : track[trackBlockNumber-57]->getBlockLength());
}

int YardDormontTrackModel::returnTrackModelSize()
{
    return trackSize;
}
