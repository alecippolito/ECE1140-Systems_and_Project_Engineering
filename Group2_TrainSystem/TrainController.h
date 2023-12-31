// *************************************************
//              Alec Ippolito
//              TrainController.h
// *************************************************

#ifndef TrainController_H
#define TrainController_H
// *************************************************
//              Added Includes
// *************************************************
#include "Train.h"
#include <QTimer>


class TrainController
{
    private:
        double powerCommand = 0;
        double kp;
        double ki;
        double e_k_1 = 0; // for first itteration of the power calculation
        double u_k_1 = 0; // for first itteration of the power calculation
        double T = 100; // Tx speed
        double commandedSpeed = 0;
        double setpointSpeed = 0;
        double speedLimit = 30;
        double trainVelocity;
        double authority = 1;
        std :: string station = "TEST STATION";
        bool automaticMode = true;
        bool serviceBrakeEnabled = false;
        bool emergencyBrakeEnabled = false;
        bool passengerEBrakeEnabled = false;
        bool doorsOpen = false;
        bool lightsOn = false;
        bool adversitement = true;
        double temp = 72;
        double newTemp = 72;
        int trainNum = 0;
        QTimer timer;
    public:
    // *************************************************
    //              Calculating
    // *************************************************
        void calculatePower();
        void stationStop();

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
        void setStation(std :: string);
        std :: string getStation();
		void setDoorsOpen(bool);
        bool getDoorsOpen();
        void setLightsOn(bool);
        bool getLightsOn();
        void setHeadlightsOn(bool);
        void setT(int);
        int getT();
        double getSpeedLimit();
        void setSpeedLimit(double);
        bool getAdvertisements();
        void setAdvertisements(bool);
        double getTemp();
        void setTemp(double);
        double getNewTemp();
        void setNewTemp(double);
        };

#endif
