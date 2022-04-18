#ifndef TRAIN_H
#define TRAIN_H
#include <string>
#include <chrono>
#include "yardToDormontTrackModel.h"
#include "Block.h"
#include "TrainPhysics.h"
class MainWindow;

//Singular instance of a train (Object implementation of a train)


class Train{

    public:
            int numCars;
            double currentVelocity = 0;
            double nextVelocity;
            double power;
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
            bool leftDoors; //true = open, false = closed
            bool rightDoors;
            bool lightsOn;
            bool available;
            Block *currentBlock;
            Block *nextBlock;
            bool engineFailure = false;
            bool signalPickupFailure = false;
            bool brakeFailure = false;
            bool passengerBrake = false;
            TrainPhysics *trainMetrics;
            MainWindow *trainUI;
            bool atEndOfBlock = false;
            YardDormontTrackModel trackModel;
            int blocksLeft = 12;
            bool adSpace = true;    //true = snowpiercer, false = train to busan
            int speedLimitKmHr;

    Train(int, Block *b);
    //~Train();
    void updateUI();
    void setPower(double, double);
    void setTemperature(double);
    void setSpeed(double);
    void setDestination(std::string);
    void setLeftDoors(bool);
    void setRightDoors(bool);
    void updateBlock(Block *b);
    void lights_On();
    void lightsOff();
    void setAvailable(bool);
    void setAnnouncement(std::string);
    void checkBlock();
    void setAdSpace(bool);

    double getCurrentVelocity();
    double getPower();
    double getTemperature();
    double getSpeed();
    std::string getDestination();
    bool getLeftDoors();
    bool getRightDoors();
    bool getAvailable();
    std::string getAnnouncement();

    void setFailureEngine(bool);
    void setFailureSignalPickup(bool);
    void setFailureBrake(bool);

    void setPassengerBrake(bool);

    Block* getNextBlock();
    Block* getCurrentBlock();

};
#endif // TRAIN_H
