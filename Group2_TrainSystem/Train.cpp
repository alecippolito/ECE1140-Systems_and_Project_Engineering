#include "Train.h"
#include "TrainModelUI.h"

//constructor initialized with numcars and a block it starts on
    Train::Train(int num, Block *b, TrackModel *trackModelPtr)
        {
            //load track data
            trackModel = trackModelPtr;

            //initialize UI
            trainUI = new MainWindow();
            trainUI->updateTrain(this);
            trainUI->show();

            //set current block
            currentBlock = b;
            speedLimitKmHr = currentBlock->speedLimitKmHr;
            currentBlock->occupied = true;

            //initialize train physics
            trainMetrics = new TrainPhysics(num, b);

            //REPLACE THIS WITH TRACK CONTROLLER IF ONE IS MADE
            if(b->lineType == "Red")
                {
                if(b->blockNumber >= 76)
                    {
                        qDebug() << "Can't assign nextBlock, train constructed at end";
                    }
                else
                    {
                nextBlock = trackModel->redline[(b->blockNumber)];   //indexed as previous blockNumber bc 0 based indexing
                blocksLeft = 77 - (b->blockNumber);
                    }
            }
            else if(b->lineType == "Green")
                    {
                           if(b->blockNumber >= 151){ qDebug() << "Can't assign nextBlock, train constructed at end";}
                    else
                    {
                            nextBlock = trackModel->greenline[(b->blockNumber)]; //due to indexing nextBlock is indexed are currentBlock's block number
                            blocksLeft = 152 - (b->blockNumber);
                    }
                }
            else
            {
                qDebug() <<"ERROR - lineType neither red or green";
            }

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

    //set power of train car based on power and speed limit from train controller
    void Train::setPower(double p, double limit)
    {
        //check block first to see if at end of route, update whether at end of block after setting getting new speed from power
        checkBlock();
        if(blocksLeft >= 0)
        {
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
        trainMetrics->setEngineFailure(f);
        trainUI->updateEngineFailureStatus(f);
    }

    void Train::setFailureSignalPickup(bool f)
    {
        signalPickupFailure = f;
        trainMetrics->setSignalPickupFailure(f);
        trainUI->updateSignalPickupFailureStatus(f);
    }

    void Train::setFailureBrake(bool f)
    {
        brakeFailure = f;
        trainMetrics->setBrakeFailure(f);
        trainUI->updateBrakeFailureStatus(f);
    }

    void Train::setPassengerBrake(bool f)
    {
        passengerBrake = f;
        trainMetrics->emergencyBrake = f;
        trainUI->updateEmergencyBrakeStatus(f);
    }

    void Train::updateBlock(Block* b)
    {
        trainMetrics->setBlock(b);
    }

    //check block uses data from the track block and the number of blocks left in the track model array to know how many it has left before the end of the route
    void Train::checkBlock()
    {
        //update block data if at end of block but not end of route
        if(atEndOfBlock == true && blocksLeft > 0)
        {
            blocksLeft--;
            atEndOfBlock = false;
            currentBlock->occupied = false;
            currentBlock = nextBlock;
            speedLimitKmHr = currentBlock->speedLimitKmHr;
            currentBlock->occupied = true;
            qDebug() << "Current Block Number: " << currentBlock->blockNumber;
            qDebug() << "Current Block Occupancy: " << currentBlock->occupied;
            trainMetrics->setBlock(currentBlock);

            //check after new blocksLeft decrement that not at end of route yet, and get nextBlock if not
            if(blocksLeft > 0)
            {
                if(currentBlock->lineType == "Red")
                {
                    nextBlock = trackModel->redline[77-blocksLeft];
                }
                else if(currentBlock->lineType == "Green")
                {
                    nextBlock = trackModel->greenline[152-blocksLeft];
                }
            }
            else
            {
                //end of route, no next block
                nextBlock = nullptr;
            }
            updateUI();
        }
    }

    void Train::updateUI()
    {
        //update all UI based on train car/train physics information
        trainUI->updateNumCars(trainMetrics->numCars);
        trainUI->updateLength(trainMetrics->length);
        trainUI->updatePassengers(trainMetrics->passengers);
        trainUI->updateCrewCount(trainMetrics->crewMembers);
        trainUI->updateWeight(trainMetrics->mass);
        //check which side of doors should open at this station
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
        //dont try to show nextBlock if there is no next block
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

    void Train :: setAdSpace(bool newAdSpace){
        adSpace = newAdSpace;
    }

