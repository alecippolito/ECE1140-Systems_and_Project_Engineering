#include "yardToDormontTrackModel.h"

YardDormontTrackModel::YardDormontTrackModel()
{
    for(int i=0; i<=15; i++)
    {
        track[i] = new Block(1);
    }

    track[0]->setBlockNumber(58);
    track[0]->setBlockLength(50);
    track[1]->setBlockNumber(59);
    track[1]->setBlockLength(50);
    track[2]->setBlockNumber(60);
    track[2]->setBlockLength(50);
    track[3]->setBlockNumber(61);
    track[3]->setBlockLength(50);
    track[4]->setBlockNumber(62);
    track[4]->setBlockLength(50);
    track[5]->setBlockNumber(63);
    track[5]->setBlockLength(100);
    track[6]->setBlockNumber(64);
    track[6]->setBlockLength(100);
    track[7]->setBlockNumber(65);
    track[7]->setBlockLength(200);
    track[8]->setBlockNumber(66);
    track[8]->setBlockLength(200);
    track[9]->setBlockNumber(67);
    track[9]->setBlockLength(100);
    track[10]->setBlockNumber(68);
    track[10]->setBlockLength(100);
    track[11]->setBlockNumber(69);
    track[11]->setBlockLength(100);
    track[12]->setBlockNumber(70);
    track[12]->setBlockLength(100);
    track[13]->setBlockNumber(71);
    track[13]->setBlockLength(100);
    track[14]->setBlockNumber(72);
    track[14]->setBlockLength(100);
    track[15]->setBlockNumber(73);
    track[15]->setBlockLength(100);
}
