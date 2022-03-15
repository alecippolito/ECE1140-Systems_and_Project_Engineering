#include "Train.h"

Train::Train(int num){
    numCars = num;
    
}

void Train::triggerFailureEngine(){
    engineFailure = true;
}

void Train::triggerFailureSignalPickup(){
    signalPickupFailure = true;
}

void Train::triggerFailureBrake(){
    brakeFailure = true;
}