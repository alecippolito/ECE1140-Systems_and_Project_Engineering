#ifndef TRACK_CONTROLLER_H
#define TRACK_CONTROLLER_H

#include <QString>
//#include "PLC.h"

class Track_controller{

    private:
            bool track_condition;
            bool signal;
            bool crossbar;
            bool  switch_track;
            bool maintenence;
            int track_occupancy;
            int curr_block;
            int authority;
            int wayside_block_num;
            double suggested_speed;
            QString failuremode;
            double commanded_speed;
            int speed_limit;

    public:

    Track_controller(int, int, int, int, double);
    void Set_currblock(int);
    void Set_signal(bool);
    void Set_crossbar(bool);
    void Set_trackoccupancy(int);
    void Set_trackcondition(bool);
    void Set_switch_track(bool);
    void Set_authority(int);
    void Set_suggestedspeed(double);
    void Set_commandedspeed(double);
    void Set_maintenancemode(bool);
    void Set_speedlimit(int);
    int Get_speedlimit();
    bool Get_switchtrack();
    bool Get_maintenancemode();
    int Get_currblock();
    bool Get_signal_status();
    bool Get_crossbar_status();
    bool Get_trackcondition();
    int Get_trackoccupancy();
    int Get_authority();
    double Get_suggestedspeed();
    double Get_commandedspeed();
    bool Set_PLC();
    void Change_switch();
};


#endif // TRACK_CONTROLLER_H
