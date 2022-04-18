#include "TrainPhysics.h"
#include <QDebug>
#include <cmath>
#include <ctgmath>

TrainPhysics::TrainPhysics(int num, Block* b)
{
    numCars = num;
    length = numCars * 32.2;
    block = b;
    calculateMass();
    calculateVelocity();
    distanceToBlockEnd = b->getBlockLength();

}

double TrainPhysics::calculateVelocity()
{
    if(currentVelocity > 0) //normal calculation of force if train is moving or neither brake is on
    {
        double blockAngleDegrees = std::atan((block->blockGrade) / 100);
        force = (power / currentVelocity) - (9.8 * (mass/2.205) * .01) - ((mass/2.205) * 9.8 * blockAngleDegrees);          //mass to kg
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

    //called every second/equivalent to second for 10x 50x 100x speed
    time = 1;

    double totalAcceleration = lastAcceleration + acceleration;
    double newVelocity = currentVelocity + ((time/2) * totalAcceleration);

    double newVelocityMph = newVelocity * 2.23694;
    if(newVelocityMph < 0) { newVelocityMph = 0;}
    if(newVelocityMph > 70) { newVelocityMph = 70;}

    newVelocity = newVelocityMph / 2.23694;
    return newVelocity;

}

double TrainPhysics::getVelocity()
{
    return currentVelocity;
}

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
    double distTravelled = getDistanceTravelledInBlock();

    atEndOfBlock = false;

    if(distTravelled >= block->blockLength)
    {
        atEndOfBlock = true;
    }

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

double TrainPhysics::getDistanceTravelledInBlock()
{
    double velocityTotal = lastVelocity + currentVelocity;
    double distanceTravelled = (block->getBlockLength() - distanceToBlockEnd) + ((time/2) * velocityTotal);
    distanceToBlockEnd = distanceToBlockEnd - distanceTravelled;
    qDebug() << "BlockLength: " << block->getBlockLength();
    qDebug() << "distanceTravelled" << distanceTravelled;
    return distanceTravelled;
}

double TrainPhysics::getDistanceToBlockEnd()
{
    return distanceToBlockEnd;
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
    distanceToBlockEnd = b->getBlockLength();
}
