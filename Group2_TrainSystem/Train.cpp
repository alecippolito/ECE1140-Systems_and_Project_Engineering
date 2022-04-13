#include "Train.h"
#include "TrainModelUI.h"

    Train::Train(int num, Block *b)
        {
            trainUI = new MainWindow();
            trainUI->updateTrain(this);
            trainUI->show();
            currentBlock = b;
            b->occupied = true;
            trainMetrics = new TrainPhysics(num, b);       //later add blocks
            nextBlock = trackModel.track[1];      //REPLACE THIS WITH TRACK CONTROLLER
            blocksLeft--;
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

    void Train::setPower(double p, double limit)
    {
        checkBlock();
        if(blocksLeft >= 0){
        trainMetrics->setPower(p, limit);
        currentVelocity = trainMetrics->getVelocity();
        atEndOfBlock = trainMetrics->atEndOfBlock;
        }

        updateUI();
        //if(blocksLeft == 0)
        //{
          //  trainUI->hide();
        //}
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
        trainMetrics->currentVelocity = 0;
        trainMetrics->setEngineFailure(true);
        trainUI->updateEngineFailureStatus(f);
    }

    void Train::setFailureSignalPickup(bool f)
    {
        signalPickupFailure = f;
        trainMetrics->currentVelocity = 0;
        trainMetrics->setSignalPickupFailure(f);
        trainUI->updateSignalPickupFailureStatus(f);
    }

    void Train::setFailureBrake(bool f)
    {
        brakeFailure = f;
        trainMetrics->currentVelocity = 0;
        trainMetrics->setBrakeFailure(f);
        trainUI->updateBrakeFailureStatus(f);
    }

    void Train::setPassengerBrake(bool f)
    {
        passengerBrake = f;
        trainMetrics->currentVelocity = 0;
        trainMetrics->emergencyBrake = f;
        trainUI->updateEmergencyBrakeStatus(f);
    }

    void Train::updateBlock(Block* b)
    {
        trainMetrics->setBlock(b);
    }

    void Train::checkBlock()
    {
        if(atEndOfBlock == true && blocksLeft > 0)
        {
            blocksLeft--;
            atEndOfBlock = false;
            currentBlock->occupied = false;
            currentBlock = nextBlock;
            currentBlock->occupied = true;
            trainMetrics->setBlock(currentBlock);
            if(blocksLeft > 0)
            {
                nextBlock = trackModel.track[12-blocksLeft];
            }
            else
            {
                nextBlock = nullptr;
            }
            updateUI();
        }
    }

    void Train::updateUI()
    {
        trainUI->updateNumCars(trainMetrics->numCars);
        trainUI->updateLength(trainMetrics->length);
        trainUI->updatePassengers(trainMetrics->passengers);
        trainUI->updateCrewCount(trainMetrics->crewMembers);
        trainUI->updateWeight(trainMetrics->mass);
        if(currentBlock->isStation && (currentBlock->stationSide == "Left" || currentBlock->stationSide == "Both"))
        {
        trainUI->updateLeftDoors(leftDoors);
        }
        if(currentBlock->isStation && (currentBlock->stationSide == "Right" || currentBlock->stationSide == "Both"))
        {
        trainUI->updateRightDoors(rightDoors);
        }
        trainUI->updateLights(lightsOn);
        trainUI->updateTemperature(temperature);
        trainUI->updateIntercom(announcements);
        trainUI->updateDestination(destination);
        trainUI->updateCurrentBlock(trainMetrics->block);
        if(nextBlock != nullptr)
        {
        trainUI->updateNextBlock(nextBlock);
        }
        trainUI->updatePower(trainMetrics->power);
        trainUI->updateVelocity(trainMetrics->currentVelocity);
        trainUI->updateAcceleration(trainMetrics->acceleration);
        trainUI->updateBrakeFailureStatus(brakeFailure);
        trainUI->updateSignalPickupFailureStatus(signalPickupFailure);
        trainUI->updateEngineFailureStatus(engineFailure);
        trainUI->updateEmergencyBrakeStatus(passengerBrake);
        trainUI->updateAdSpace(adSpace);
    }

    Block* Train :: getNextBlock()
    {
        return nextBlock;
    }

    Block* Train :: getCurrentBlock()
    {
        return currentBlock;
    }

