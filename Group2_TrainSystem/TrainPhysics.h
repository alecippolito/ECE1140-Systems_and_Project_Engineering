#ifndef TRAINPHYSICS_H
#define TRAINPHYSICS_H
#include "Block.h"

class TrainPhysics{
    public:
        int numCars = 1;
        double mass = 0;
        double length = 0;
        double lastVelocity = 0;
        double currentVelocity = 0;
        double power = 0;
        double acceleration = 0;
        double lastAcceleration = 0;
        bool emergencyBrake = false;
        bool serviceBrake = false;
        double accelerationLimit = 0.5;
        double decelerationLimitServiceBrake = -1.2;
        double decelerationLimitEmergencyBrake = -2.73;
        double force = 0;
        int passengers = 100;
        int crewMembers = 20;
        double time = .1;
        bool engineFailure = false;
        bool brakeFailure = false;
        bool signalPickupFailure = false;
        Block *block;
        double lastDist;
        bool atEndOfBlock = false;

    TrainPhysics(int numCars, Block *block);
    double calculateVelocity();
    void calculateMass();

    void setPower(double, double);
    double getPower();
    void setEngineFailure(bool);
    void setBrakeFailure(bool);
    void setSignalPickupFailure(bool);
    double getDistanceTravelledInBlock();
    void setBlock(Block *b);
    double getDistanceToBlockEnd();
    double getVelocity();


};
#endif // TRAINPHYSICS_H
