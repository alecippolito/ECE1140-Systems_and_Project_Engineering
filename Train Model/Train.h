#ifndef TRAIN_H
#define TRAIN_H
#include <string>
#include <chrono>
#include "Block.h"
#include "TrainPhysics.h"


//Singular instance of a train (Object implementation of a train)


class Train{

    public:
            int numCars;
            double currentVelocity;
            double nextVelocity;
            double power = 10000;   //watts
            double length;
            double height = 3.42;
            double width = 2.65;
            double elevation;
            double mass;
            int crewCount; 
            int passengerCount;
            double accelerationLimit = .5;
            double decelerationLimit = -1.2;
            double velocityLimit = 70;
            double temperature = 72.0;
            std::string destination;
            std::string announcements;
            bool doorsOpen;
            bool lightsOn;
            bool inYard;
            Block *currentBlock;
            bool engineFailure = false;
            bool signalPickupFailure = false;
            bool brakeFailure = false;
            TrainPhysics *trainMetrics;

    Train(int);

    void setVelocity(double);
    void setPower(double);
    void setTemperature(double);
    void setSpeed(double);
    void setDestination(std::string);
    void openDoors();
    void closeDoors();
    void lightsOn();
    void lightsOff();
    void setAvailable();
    void setAnnouncement(std::string);

    double getCurrentVelocity();
    double getPower();
    double getTemperature();
    double getSpeed();
    double getDestination();
    bool getInYard();
    std::string getAnnouncement();

    void triggerFailureEngine();
    void triggerFailureSignalPickup();
    void triggerFailureBrake();
    
};
#endif