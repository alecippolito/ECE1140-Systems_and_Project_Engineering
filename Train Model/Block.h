#include <string>

class Block {

    public:
            bool occupied;
            int blockNumber;
            char section;
            double blockLength;
            double blockGrade;
            int speedLimitKmHr;
            double speedLimitMSec;
            double elevation;
            double cumElevation;
            int timeToTravelBlock;
            Block *previousBlock, *nextBlock1, *nextBlock2;    //nextBlock2 only if track has 2 choices (Switch is active)
            std::string to, from;
            


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










};