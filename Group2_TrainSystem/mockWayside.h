#ifndef MOCKWAYSIDE_H
#define MOCKWAYSIDE_H
#include "Block.h"
#include "trackmodel.h"

class Route{
    public:
        int stationNum;
        Block *pioneerGreenline[139];
        Block *edgebrookGreenline[139];
        Block *stationGreenline[139];
        Block *whitedGreenline[139];
        Block *southbankGreenline[139];
        Block *centralGreenline[139];
        Block *inglewoodGreenline[139];
        Block *overbrookGreenline[139];
        Block *glenburyGreenline[139];
        Block *dormontGreenline[139];
        Block *mtLebanonGreenline[139];
        Block *poplarGreenline[139];
        Block *castleShannonGreenline[139];
        Block *shadysideRedline[104];
        Block *herronAveRedline[104];
        Block *swissvilleRedline[104];
        Block *pennStationRedline[104];
        Block *steelPlazaRedline[104];
        Block *firstAveRedline[104];
        Block *stationSquareRedline[104];
        Block *southHillsJunctionRedline[104];
        Block* getNextBlock(int, int);
        Route(int, bool, Block* []);    //public constructor necessary for train model use

private:

        void allocateMemoryForRoutesAndParseGreenline(Block* []);
        void allocateMemoryForRoutesAndParseRedline(Block* []);
        int greenlineBlockNumbers[139] = {152, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        int redlineBlockNumbers[104] = {77, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 77};
};

#endif // MOCKWAYSIDE_H
