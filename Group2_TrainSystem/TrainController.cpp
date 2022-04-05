// *************************************************
//              Alec Ippolito
//              TrainControllerGUI.cpp
// *************************************************

// *************************************************
//              Includes
// *************************************************
#include "TrainController.h"


    void TrainController :: calculatePower(){
        if(getAutomaticMode()==0){
            setpointSpeed = commandedSpeed;
        }
        if(serviceBrakeEnabled==false && emergencyBrakeEnabled==false && passengerEBrakeEnabled==false ){
            trainVelocity = trainVelocity*3.6; // for e_k calculation
            if(setpointSpeed <= commandedSpeed){
                speed = setpointSpeed;
            }
            else{
                speed = commandedSpeed;
            }
            if(speed>=70){
                speed = 70;
            }
            if(authority <= 1){
                speed = (commandedSpeed / 2);
            }
            if(speed<0 || trainVelocity <0){
                speed = 0;
                trainVelocity = 0;
            }
            e_k = speed-trainVelocity;
            u_k = u_k_1+(T/2)*(e_k-e_k_1);
            e_k_1 = e_k;
            powerCommand = kp*e_k+ki*u_k;
			}
            if(powerCommand > 120000){
                powerCommand = 120000;
            }
            if (authority <= 0) {
                powerCommand = 0.0;
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
        
