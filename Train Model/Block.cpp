#include "Block.h"

bool Block::isOccupied()
{
    return occupied;
}

void Block::setBlockNumber(int num){
    blockNumber = num;
}

void Block::setSection(char c){
    section = c;
}

void Block::setBlockLength(double num){
    blockLength = num;
}

void Block::setBlockGrade(double num){
    blockGrade = num;
}

void Block::setSpeedLimitKmHr(int num){
    speedLimitKmHr = num;
}

void Block::setSpeedLimitMSec(double num){
    speedLimitMSec = num;
}

void Block::setElevation(double num){
    elevation = num;
}

void Block::setCumElevation(double num){
    cumElevation = num;
}

void Block::setTimeToTravelBlock(int num){
    timeToTravelBlock = num;
}

void Block::setPreviousBlock(Block b){
    previousBlock = &b;
}

void Block::setNextBlock1(Block b){
    nextBlock1 = &b;
}

void Block::setNextBlock2(Block b){
    nextBlock2 = &b;
}

void Block::setTo(std::string s){
    to = s;
}

void Block::setFrom(std::string s){
    from = s;
}