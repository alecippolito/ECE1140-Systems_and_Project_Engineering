#include "TrainModel_Train.h"
#include "TrainModelUI.h"

    Train::Train(int num, Block *b)
        {
            trainUI = new MainWindow();
            trainUI->updateTrain(this);
            trainUI->show();
            trainMetrics = new TrainPhysics(num, b);       //later add blocks
            updateUI();
        }

    //no destructor bc unnecessary
    /*
    Train::~Train()
    {
        delete trainUI;
        delete trainMetrics;
    }
    */

    void Train::setPower(double p)
    {
        trainMetrics->setPower(p);
        updateUI();
    }

    void Train::setTemperature(double t)
    {
        temperature = t;
    }

    void Train::setDestination(std::string d)
    {
        destination = d;
    }
    void Train::setLeftDoors(bool d)
    {
        leftDoors = d;
    }
    void Train::setRightDoors(bool d)
    {
        rightDoors = d;
    }
    void Train::lights_On()
    {
        lightsOn = true;
    }
    void Train::lightsOff()
    {
        lightsOn = false;
    }
    void Train::setAvailable(bool b)
    {
        available = b;
    }
    void Train::setAnnouncement(std::string a)
    {
        announcements = a;
    }

    double Train::getCurrentVelocity()
    {
        return currentVelocity;
    }
    double Train::getPower()
    {
        return trainMetrics->getPower();
    }
    double Train::getTemperature()
    {
        return temperature;
    }
    double Train::getSpeed()
    {
        return trainMetrics->currentVelocity;
    }
    std::string Train::getDestination()
    {
        return destination;
    }
    bool Train::getAvailable()
    {
        return available;
    }
    bool Train::getLeftDoors()
    {
        return leftDoors;
    }
    bool Train::getRightDoors()
    {
        return rightDoors;
    }
    std::string Train::getAnnouncement()
    {
        return announcements;
    }

    void Train::setFailureEngine(bool f)
    {
        engineFailure = f;
    }
    void Train::setFailureSignalPickup(bool f)
    {
        signalPickupFailure = f;
    }
    void Train::setFailureBrake(bool f)
    {
        brakeFailure = f;
    }

    void Train::setPassengerBrake(bool f)
    {
        passengerBrake = f;
    }

    void Train::updateBlock(Block* b)
    {
        trainMetrics->setBlock(b);
    }
    void Train::updateUI()
    {
        trainUI->updateNumCars(trainMetrics->numCars);
        trainUI->updateLength(trainMetrics->length);
        trainUI->updatePassengers(trainMetrics->passengers);
        trainUI->updateCrewCount(trainMetrics->crewMembers);
        trainUI->updateWeight(trainMetrics->mass);
        trainUI->updateLeftDoors(leftDoors);
        trainUI->updateRightDoors(rightDoors);
        trainUI->updateLights(lightsOn);
        trainUI->updateTemperature(temperature);
        trainUI->updateIntercom(announcements);
        trainUI->updateDestination(destination);
        trainUI->updateCurrentBlock(trainMetrics->block);
        //trainUI->updateNextBlock(Block);
        trainUI->updatePower(trainMetrics->power);
        trainUI->updateVelocity(trainMetrics->currentVelocity);
        trainUI->updateAcceleration(trainMetrics->acceleration);
        trainUI->updateBrakeFailureStatus(brakeFailure);
        trainUI->updateSignalPickupFailureStatus(signalPickupFailure);
        trainUI->updateEngineFailureStatus(engineFailure);
        trainUI->updateEmergencyBrakeStatus(passengerBrake);
    }
