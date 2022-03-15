#ifndef TRAINPHYSICS_H
#define TRAINPHYSICS_H
#include "Train.h"


class TrainPhysics{
    public:
        int numCars;
        double mass;
        double length;
        double currentVelocity;
        

    TrainPhysics(int numCars, Block *block);
    double calculateVelocity();

};







#endif