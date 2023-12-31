// *************************************************
//              Alec Ippolito
//              TrainController.h
// *************************************************

#ifndef TrainController_H
#define TrainController_H
// *************************************************
//              Added Includes
// *************************************************
#include "TrainModel_Train.h"


class TrainController
{
    private:
        double powerCommand = 0;
        double kp;
        double ki;
        double e_k;
        double e_k_1 = 0; // for first itteration of the power calculation
        double u_k;
        double u_k_1 = 0; // for first itteration of the power calculation
        double speed = 0;
        double T = 1;
        double commandedSpeed = 0;
        double setpointSpeed = 0;
        double trainVelocity; // for power calculation
        double trainSpeed; // for power calculation
        double authority = 0;
        bool automaticMode = false;
        bool serviceBrakeEnabled = false;
        bool emergencyBrakeEnabled = false;
        bool passengerEBrakeEnabled = false;
        bool doorsOpen = false;
        bool lightsOn = false;

    public:
    // *************************************************
    //              Calculating
    // *************************************************
        void calculatePower();

    // *************************************************
    //              Sets and Gets
    // *************************************************
        void setPowerCommand(double);
        double getPowerCommand();
        void setKp(double);
        double getKp();
        void setKi(double);
        double getKi();
        void setCommandedSpeed(double);
        double getCommandedSpeed();
        void setSetpointSpeed(double);
        double getSetpointSpeed();
        void setTrainVelocity(double);
        double getTrainVelocity();
        void setAutomaticMode(bool);
        bool getAutomaticMode();
        void setServiceBrake(bool);
        bool getServiceBrakeFlag();
        void setEmergencyBrake(bool);
        bool getEmergencyBrakeFlag();
        void setPassengerEBrake(bool);
        bool getPassengerEBrake();  
        void setAuthority(double);
        double getAuthority();
		void setDoorsOpen(bool);
        bool getDoorsOpen();
        void setLightsOn(bool);
        bool getLightsOn();
        void setHeadlightsOn(bool);
      
};

#endif 
