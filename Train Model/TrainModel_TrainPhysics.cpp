#include "TrainModel_TrainPhysics.h"

TrainPhysics::TrainPhysics(int num, Block* b)
{
    numCars = num;
    block = b;
    calculateMass();
    calculateVelocity();
    distanceToBlockEnd = b->getBlockLength();
}

double TrainPhysics::calculateVelocity()
{
    if(currentVelocity > 0 && (!serviceBrake || !emergencyBrake)) //normal calculation of force if train is moving or neither brake is on
    {
        force = (power / currentVelocity) - (9.8 * mass) /*- (mass * 9.8 * block->getSlope)*/;
    }
    else    //if train is stationary and a brake is on
    {
        force = 0;
    }

    //set acceleration w/ limits
    acceleration = force / mass;
    if(acceleration > accelerationLimit)
    {
        acceleration = accelerationLimit;
    }
    else if(emergencyBrake)
    {
        acceleration = decelerationLimitEmergencyBrake;
    }
    else if(serviceBrake)
    {
        acceleration = decelerationLimitServiceBrake;
    }

    //get current time
    //TODO
    time = .1;

    double newAcceleration = lastAcceleration + acceleration;
    double newVelocity = currentVelocity + ((time/2) * newAcceleration);
    if(newVelocity < 0) { newVelocity = 0;}
    if(newVelocity > 70) { newVelocity = 70;}

    return newVelocity;
}

double TrainPhysics::getVelocity()
{
    return currentVelocity;
}

void TrainPhysics::setPower(double num)
{
    if(engineFailure)
    {
        power = 0;
    }
    else
    {
    power = num;
    }

    double v = calculateVelocity();
    lastVelocity = currentVelocity;
    currentVelocity = v;

    //keep track of where the train is
    double distTravelled = getDistanceTravelledInBlock();
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
    mass += numCars * 113400; //flexity car weight in lbs
}

double TrainPhysics::getDistanceTravelledInBlock()
{
    double velocityTotal = lastVelocity + currentVelocity;
    double distanceTravelled = (block->getBlockLength() - distanceToBlockEnd) + ((time/2) * velocityTotal);
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
