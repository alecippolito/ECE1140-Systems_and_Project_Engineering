// *************************************************
//              Alec Ippolito
//              TrainControllerGUI.cpp
// *************************************************

// *************************************************
//              Includes
// *************************************************
#include "TrainController.h"
#include <QDate>
#include <QTime>
#include <QDebug>
#include <QTimer>
#include <QObject>


    void TrainController :: calculatePower(){
        double speed = 0;
        // automatic => setpoint = coammanded
        if(automaticMode == true){
            setpointSpeed = commandedSpeed;
        }
        if(serviceBrakeEnabled==false && emergencyBrakeEnabled==false && passengerEBrakeEnabled==false){
             if (setpointSpeed <= commandedSpeed){
                 speed = setpointSpeed;
             } else {
                    speed = commandedSpeed;
                }
                // max speed is 70
                if(speed>70){
                    speed = 70;
                }
                // min speed is 0
                if(speed<0){
                    speed = 0;
                }
                if(trainVelocity<0){
                trainVelocity = 0;
                }
                double e_k = speed-trainVelocity*3.6;
                double u_k = u_k_1 + (1/2)*(e_k+e_k_1);
                powerCommand = (kp*e_k)+(ki*u_k);
         }

         if(powerCommand>120000){
             powerCommand =120000;
         }
         if (authority <= 0) {
                 powerCommand = 0.0;
         }
         if(getAuthority() == 0){
            stationStop();
         }
    }

    void TrainController :: stationStop(){
        double tempPower = powerCommand;
        // if current block is station
        // set power to 0
        // if at station
        if(trainVelocity == 0) {// & next block has authority == NULL
            timer.start(30000);
            doorsOpen = true;
        }
        if(!timer.isActive()){
            powerCommand = tempPower;
            doorsOpen = false;
        }
    }




        void TrainController :: setPowerCommand(double newPowerCommand){
			powerCommand = newPowerCommand;
		}
        double TrainController :: getPowerCommand(){
			return powerCommand;
        }
        void TrainController :: setKp(double newKp){
			kp = newKp;
		}
        double TrainController :: getKp(){
			return kp;
		}
        void TrainController :: setKi(double newKi){
			ki = newKi;
		}
        double TrainController :: getKi(){
			return ki;
		}
       void TrainController :: setCommandedSpeed(double newCommandedSpeed){
            commandedSpeed = newCommandedSpeed;
	   }
        double TrainController :: getCommandedSpeed(){
			return commandedSpeed;
		}
         void TrainController :: setSetpointSpeed(double newSetpointSpeed){
             if(newSetpointSpeed>70){
                 newSetpointSpeed = 70;
             }
             if(newSetpointSpeed<0){
                 newSetpointSpeed = 0;
             }
             setpointSpeed = newSetpointSpeed;
		 }
        double TrainController :: getSetpointSpeed(){
			return setpointSpeed;
		}
        void TrainController :: setTrainVelocity(double newTrainVelocity){
            trainVelocity = newTrainVelocity;
        }
        double TrainController :: getTrainVelocity(){
            return trainVelocity;
        }
        void TrainController :: setAutomaticMode(bool newAutomaticMode){
            automaticMode = newAutomaticMode;
		}
		bool TrainController :: getAutomaticMode(){
			return automaticMode;
		}
        void TrainController :: setServiceBrake(bool newServiceBrake){
			serviceBrakeEnabled = newServiceBrake;
		}
        bool TrainController :: getServiceBrakeFlag(){
			return serviceBrakeEnabled;
		}
        void TrainController :: setEmergencyBrake(bool newEmergencyBrake){
			emergencyBrakeEnabled = newEmergencyBrake;
		}
        bool TrainController :: getEmergencyBrakeFlag(){
			return emergencyBrakeEnabled;
		}
        void TrainController :: setPassengerEBrake(bool newPassengerEBrake){
			passengerEBrakeEnabled = newPassengerEBrake;
		}
        bool TrainController :: getPassengerEBrake(){
			return passengerEBrakeEnabled;
		}
        void TrainController :: setAuthority(double newAuthority){
			authority = newAuthority;
		}
        double TrainController :: getAuthority(){
			return authority;
		}
		void TrainController :: setDoorsOpen(bool newDoorsOpen){
			doorsOpen = newDoorsOpen;
		}
        bool TrainController :: getDoorsOpen(){
			return doorsOpen;
		}
        void TrainController :: setLightsOn(bool newLightsOn){
            lightsOn  = newLightsOn;
		}
        bool TrainController :: getLightsOn(){
			return lightsOn;
		}
        void TrainController :: setT(int newT){
            T = newT;
        }
        int TrainController :: getT(){
            return T;
        }
        double TrainController :: getSpeedLimit(){
            return speedLimit;
        }
        void  TrainController :: setSpeedLimit(double newSpeedLimit){
            speedLimit = newSpeedLimit;
        }
        bool TrainController :: getAdvertisements(){
            return adversitement;
        }
        void TrainController :: setAdvertisements(bool newAdvertisement){
            adversitement = newAdvertisement;
        }
        double TrainController :: getTemp(){
            return temp;
        }
        void TrainController :: setTemp(double newTemp){
            temp = newTemp;
        }
        double TrainController :: getNewTemp(){
            return newTemp;
        }
        void TrainController :: setNewTemp(double newTempVal){
            newTemp = newTempVal;
        }
        std :: string TrainController :: getStation(){
            return station;
        }
        void TrainController :: setStation(std::string newStation){
            station = newStation;
        }

