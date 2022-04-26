#include "TrainPhysics.h"
#include <QDebug>
#include <cmath>
#include <ctgmath>

//constructor initializes physics class with number of cars and a current block pointer for Newton calculations
TrainPhysics::TrainPhysics(int num, Block* b)
{
    numCars = num;
    length = numCars * 32.2;
    block = b;
    calculateMass();
    calculateVelocity();
    lastDist = 0;
}

//calculateVelocity calculates and returns the current train velocity from the newly updated power (it gets called in setPower) and other train metrics
double TrainPhysics::calculateVelocity()
{
    if(currentVelocity > 0) //normal calculation of force if train is moving or neither brake is on
    {
        double blockAngleDegrees = std::atan((block->blockGrade) / 100);
        force = (power / currentVelocity) - (9.8 * (mass/2.205) * .01) - ((mass/2.205) * 9.8 * blockAngleDegrees);          //mass to kg, friction coefficient
    }
    else if((!serviceBrake && !emergencyBrake) && (power>0))    //if train is stationary and a brake is on
    {
        force = 100000;  //random large amount to start train
    }
    else
    {
        force = 0;  //if brakes are on
    }

    //set acceleration w/ limits
    lastAcceleration = acceleration;
    acceleration = force / (mass/2.205);
    if(acceleration > accelerationLimit)
    {
        acceleration = accelerationLimit;
    }

    if(!emergencyBrake && acceleration < decelerationLimitServiceBrake)
    {
        acceleration = decelerationLimitServiceBrake;
    }

    if(serviceBrake)
    {
        if(currentVelocity > 0)
        {
        acceleration = decelerationLimitServiceBrake;
        }
        else
        {
            //acceleration = 0;
        }
    }

    if(emergencyBrake)
    {

        if(currentVelocity > 0)
        {
            acceleration = decelerationLimitEmergencyBrake;
        }
        else
        {
            //acceleration = 0;
        }
    }

    double totalAcceleration = lastAcceleration + acceleration;
    double newVelocity = currentVelocity + ((time/2) * totalAcceleration);

    //physical velocity limits in mph
    double newVelocityMph = newVelocity * 2.23694;
    if(newVelocityMph < 0)
    {
        newVelocityMph = 0;
    }
    if(newVelocityMph > 70)
    {
        newVelocityMph = 70;
    }

    newVelocity = newVelocityMph / 2.23694;
    return newVelocity;

}

double TrainPhysics::getVelocity()
{
    return currentVelocity;
}

//set power takes power and a speed limit as an input and uses this new power to calculate the train metrics, including the new currentVelocity and the new acceleration
//it also calls the function to check how far into the block the train currently is
void TrainPhysics::setPower(double num, double limit)
{
    if(engineFailure)
    {
        power = 0;
    }
    else
    {
        power = num;
    }

    double currentVelocityMph = currentVelocity * 2.23694;
    if(currentVelocityMph >= limit)
    {
        currentVelocityMph = limit;
        acceleration = 0;
        lastVelocity = currentVelocity;
        currentVelocity = currentVelocityMph / 2.23694;
    }
    else
    {
        double v = calculateVelocity();
        lastVelocity = currentVelocity;
        currentVelocity = v;
    }

    //keep track of where the train is
    double newDist = getDistanceTravelledInBlock();
    atEndOfBlock = false;

    if(newDist >= block->blockLength)
    {
        newDist = newDist - (block->blockLength);
        atEndOfBlock = true;
    }

    lastDist = newDist;

}

double TrainPhysics::getPower()
{
    return power;
}

void TrainPhysics::calculateMass()
{
    mass = (passengers + crewMembers) * 181; //181 = average weight in lbs of an adult
    mass += (numCars * 113400); //flexity car weight in lbs
}

//getDistanceTravelledInBlock calculates and returns the new distance travelled in the current block, used to check if the next block should be moved into by the train
double TrainPhysics::getDistanceTravelledInBlock()
{
    double velocityTotal = lastVelocity + currentVelocity;
    double newDist = lastDist + ((time/2) * velocityTotal);
    return newDist;
}

double TrainPhysics::getDistanceToBlockEnd()
{
    return lastDist;
}

void TrainPhysics::setEngineFailure(bool b)
{
    engineFailure = b;
}

void TrainPhysics::setBrakeFailure(bool b)
{
    brakeFailure = b;
}

void TrainPhysics::setSignalPickupFailure(bool b)
{
    signalPickupFailure = b;
}

void TrainPhysics::setBlock(Block *b)
{
    block = b;
    lastDist = 0;
}
