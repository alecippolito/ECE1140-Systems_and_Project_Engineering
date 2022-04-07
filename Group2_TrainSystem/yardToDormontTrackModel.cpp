#include "yardToDormontTrackModel.h"

YardDormontTrackModel::YardDormontTrackModel()
{
    for(int i=0; i<=16; i++)
    {
        track[i] = new Block(1);
    }

    track[0]->setBlockNumber(152);
    track[0]->setBlockLength(100);
<<<<<<< HEAD
    track[0]->setSpeedLimitKmHr(30);
    track[1]->setBlockNumber(58);
    track[1]->setBlockLength(50);
    track[1]->setSpeedLimitKmHr(30);
    track[2]->setBlockNumber(59);
    track[2]->setBlockLength(50);
    track[2]->setSpeedLimitKmHr(30);
    track[3]->setBlockNumber(60);
    track[3]->setBlockLength(50);
    track[3]->setSpeedLimitKmHr(30);
    track[4]->setBlockNumber(61);
    track[4]->setBlockLength(50);
    track[4]->setSpeedLimitKmHr(30);
    track[5]->setBlockNumber(62);
    track[5]->setBlockLength(50);
    track[5]->setSpeedLimitKmHr(30);
    track[6]->setBlockNumber(63);
    track[6]->setBlockLength(100);
    track[6]->setSpeedLimitKmHr(70);
    track[7]->setBlockNumber(64);
    track[7]->setBlockLength(100);
    track[7]->setSpeedLimitKmHr(70);
    track[8]->setBlockNumber(65);
    track[8]->setBlockLength(200);
    track[8]->setSpeedLimitKmHr(70);
    track[9]->setBlockNumber(66);
    track[9]->setBlockLength(200);
    track[9]->setSpeedLimitKmHr(70);
    track[10]->setBlockNumber(67);
    track[10]->setBlockLength(100);
    track[10]->setSpeedLimitKmHr(40);
    track[11]->setBlockNumber(68);
    track[11]->setBlockLength(100);
    track[11]->setSpeedLimitKmHr(40);
    track[12]->setBlockNumber(69);
    track[12]->setBlockLength(100);
    track[12]->setSpeedLimitKmHr(40);
    track[13]->setBlockNumber(70);
    track[13]->setBlockLength(100);
    track[13]->setSpeedLimitKmHr(40);
    track[14]->setBlockNumber(71);
    track[14]->setBlockLength(100);
    track[14]->setSpeedLimitKmHr(40);
    track[15]->setBlockNumber(72);
    track[15]->setBlockLength(100);
    track[15]->setSpeedLimitKmHr(40);
    track[16]->setBlockNumber(73);
    track[16]->setBlockLength(100);
    track[16]->setSpeedLimitKmHr(40);
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
=======
    track[1]->setBlockNumber(58);
    track[1]->setBlockLength(50);
    track[2]->setBlockNumber(59);
    track[2]->setBlockLength(50);
    track[3]->setBlockNumber(60);
    track[3]->setBlockLength(50);
    track[4]->setBlockNumber(61);
    track[4]->setBlockLength(50);
    track[5]->setBlockNumber(62);
    track[5]->setBlockLength(50);
    track[6]->setBlockNumber(63);
    track[6]->setBlockLength(100);
    track[7]->setBlockNumber(64);
    track[7]->setBlockLength(100);
    track[8]->setBlockNumber(65);
    track[8]->setBlockLength(200);
    track[9]->setBlockNumber(66);
    track[9]->setBlockLength(200);
    track[10]->setBlockNumber(67);
    track[10]->setBlockLength(100);
    track[11]->setBlockNumber(68);
    track[11]->setBlockLength(100);
    track[12]->setBlockNumber(69);
    track[12]->setBlockLength(100);
    track[13]->setBlockNumber(70);
    track[13]->setBlockLength(100);
    track[14]->setBlockNumber(71);
    track[14]->setBlockLength(100);
    track[15]->setBlockNumber(72);
    track[15]->setBlockLength(100);
    track[16]->setBlockNumber(73);
    track[16]->setBlockLength(100);
>>>>>>> ece6cd0dc350fa1bfd6c439aaad6974b4fa024e0
}
