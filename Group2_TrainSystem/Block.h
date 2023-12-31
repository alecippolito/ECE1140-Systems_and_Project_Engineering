#ifndef BLOCK_H
#define BLOCK_H

#include <string>

class Block {

    public:
            std::string lineType;
            std::string section;
            std::string infrastructure;
            std::string stationSide;
            std::string stationName;
            std::string switchData;
            bool occupied = false;
            int blockNumber;
            double blockLength;
            double blockGrade;
            int speedLimitKmHr;
            double speedLimitMSec;
            double elevation;
            double cumElevation;
            double secondsToTraverseBlock;
            Block *previousBlock, *nextBlock1, *nextBlock2;    //nextBlock2 only if track has 2 choices (Switch is active)
            std::string to, from;
            int suggestedSpeed;
            bool blockStatus;
            bool isStation;
            bool isSwitch;
            bool isRailwayCrossing;
            bool isUnderground;

            Block(int num){
                blockNumber = num;
            }

            bool isOccupied();
            void setBlockNumber(int);
            void setSection(char);
            void setBlockLength(double);
            void setBlockGrade(double);
            void setSpeedLimitKmHr(int);
            void setSpeedLimitMSec(double);
            void setElevation(double);
            void setCumElevation(double);
            void setTimeToTravelBlock(int);
            void setPreviousBlock(Block);
            void setNextBlock1(Block);
            void setNextBlock2(Block);
            void setTo(std::string);
            void setFrom(std::string);

            double getBlockLength();










};
#endif // BLOCK_H
