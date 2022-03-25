#include "TrainPhysics.h"


TrainPhysics::TrainPhysics(int num)
{
    numCars = num;

}
double TrainPhysics::calculateVelocity()
{
    return double(1);
}

void TrainPhysics::setPower(double num)
{
    power = num;
    calculateVelocity();
}

double TrainPhysics::getPower()
{
    return power;
}
