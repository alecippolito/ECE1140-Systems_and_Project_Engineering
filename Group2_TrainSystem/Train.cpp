#include "Train.h"
#include "TrainModelUI.h"
#include <QString>

//constructor initialized with numcars and a block it starts on
    Train::Train(int num, int whichRoute, bool isGreenline, Block* trackModel[], QString trainDestination)
        {
            //load track data
            Route *r = new Route(whichRoute, isGreenline, trackModel);
            route = r;
            whichRouteUsed = whichRoute;

            //initialize UI
            trainUI = new MainWindow();
            trainUI->updateTrain(this);
            trainUI->show();

            //set current block to first block
            currentBlock = route->getNextBlock(whichRoute, currentRouteIndex);
            speedLimitKmHr = currentBlock->speedLimitKmHr;
            currentBlock->occupied = true;
            currentRouteIndex++;

            //initialize train physics
            trainMetrics = new TrainPhysics(num, currentBlock);

            //REPLACE THIS WITH TRACK CONTROLLER IF ONE IS MADE
            if(currentBlock->lineType == "Red")
            {
                nextBlock = route->getNextBlock(whichRoute, currentRouteIndex);   //indexed as previous blockNumber bc 0 based indexing
                currentRouteIndex++;
                //blocksLeft = 77 - (b->blockNumber);
            }
            else if(currentBlock->lineType == "Green")
                    {               
                            nextBlock = route->getNextBlock(whichRoute, currentRouteIndex); //due to indexing nextBlock is indexed are currentBlock's block number
                            currentRouteIndex++;
                            //blocksLeft = 152 - (b->blockNumber);
                    }
            else
            {
                qDebug() << "ERROR - lineType neither red or green, lineType: ";
            }

            destination = trainDestination.toStdString();
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
        //if(blocksLeft >= 0)
        //{
            trainMetrics->setPower(p, limit);
            currentVelocity = trainMetrics->getVelocity();
            atEndOfBlock = trainMetrics->atEndOfBlock;
        //}

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
        if(atEndOfBlock && available)   //if atEndOfBlock and train available (not in yard)
        {
            atEndOfBlock = false;
            currentBlock->occupied = false;
            currentBlock = nextBlock;
            if((currentBlock->blockNumber == 57 && currentBlock->lineType == "Green") || (currentBlock->blockNumber == 77 && currentBlock->lineType == "Red")) //if the currentBlock is the yard block
            {
                   available = false;
                   nextBlock = nullptr;
                   //shut down train
                   trainUI->hide();
                   delete this;
            }
            else{
                    //get next block, if greenline and at 57 then reached end of route
                    nextBlock = route->getNextBlock(whichRouteUsed, currentRouteIndex);
                    currentRouteIndex++;
                }

            speedLimitKmHr = currentBlock->speedLimitKmHr;
            currentBlock->occupied = true;
            trainMetrics->setBlock(currentBlock);



        }
        //update block data if at end of block but not end of route
        /*if(atEndOfBlock == true && blocksLeft > 0)
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
        */
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

