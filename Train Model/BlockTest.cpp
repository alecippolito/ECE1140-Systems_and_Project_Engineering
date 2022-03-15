#include "Block.h"
#include <fstream>
#include <iostream>
#include <vector>

void testBlocks(){
    int size = 9;
    std::vector<Block> blockLayout;
    //initialize each by number of blocks in each line (will initialize both red/green)
    for(int i=0; i<size-1; i++){
    blockLayout[i] = Block(i+1);
    }
    //parse file, attribute all data to each block
    std::ifstream file("blockTest.txt");
    std::string temp;
    std::string redLineInfo[9];
    std::string str;
    int i = 0;
    while(std::getline(file, str)){
        redLineInfo[i] = str;
        i++;
    }
    for(int i=0; i++; i<8){
    blockLayout[i].setSection(redLineInfo[0].at(0));
    blockLayout[i].setBlockNumber(stoi(redLineInfo[1]));
    blockLayout[i].setBlockLength(stod(redLineInfo[2]));
    blockLayout[i].setBlockGrade(stod(redLineInfo[3]));
    blockLayout[i].setSpeedLimitKmHr(stoi(redLineInfo[4]));
    blockLayout[i].setElevation(stod(redLineInfo[5]));
    blockLayout[i].setCumElevation(stod(redLineInfo[6]));
    blockLayout[i].setSpeedLimitMSec(stod(redLineInfo[7]));
    blockLayout[i].setTimeToTravelBlock(stoi(redLineInfo[8]));
    }
    
}