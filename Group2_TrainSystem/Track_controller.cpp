#include "Track_controller.h"
#include <QString>


    Track_controller::Track_controller(int occu, int block, int author, int wayside_blocks, int sugg_speed)
    {
        track_condition = true;
        maintenence = false;
        signal = false;
        crossbar = false;
        switch_track = false;
        track_occupancy = occu;
        curr_block = block;
        authority = author;
        wayside_block_num = wayside_blocks;
        failuremode = "False";
        commanded_speed = 15;
        speed_limit      = 15;
        suggested_speed  = sugg_speed;
    }
    void Track_controller::Set_currblock(int num)
    {
        curr_block = num;
    }
    void Track_controller::Set_signal(bool state)
    {
        signal = state;
    }
    void Track_controller::Set_crossbar(bool state)
    {
        crossbar = state;
    }
    void Track_controller::Set_trackoccupancy(int num)
    {
        track_occupancy = num;
    }
    void Track_controller::Set_speedlimit(int limit)
    {
        speed_limit = limit;
    }
    int Track_controller::Get_speedlimit()
    {
        return speed_limit;
    }
    void Track_controller::Set_trackcondition(bool state)
    {
        track_condition = state;
    }
    void Track_controller::Set_switch_track(bool state)
    {
        switch_track = state;
    }
    void Track_controller::Set_authority(int distance)
    {
        authority = distance;
    }
    void Track_controller::Set_suggestedspeed(int speed)
    {
        suggested_speed = speed;
    }
    void Track_controller::Set_commandedspeed(int speed)
    {
        commanded_speed = speed;
    }

    void Track_controller::Set_maintenancemode(bool state)
    {
        maintenence = state;
    }
    bool Track_controller::Get_maintenancemode()
    {
        return maintenence;
    }

    int Track_controller::Get_suggestedspeed()
    {
        return suggested_speed;
    }
    int Track_controller::Get_commandedspeed()
    {
        return commanded_speed;
    }

    bool Track_controller::Get_switchtrack()
    {
        return switch_track;
    }
    int Track_controller::Get_currblock()
    {
        return curr_block;
    }
    bool Track_controller::Get_signal_status()
    {
        return signal;
    }
    bool Track_controller::Get_crossbar_status()
    {
        return crossbar;
    }
    bool Track_controller::Get_trackcondition()
    {
        return track_condition;
    }
    int Track_controller::Get_trackoccupancy()
    {
        return track_occupancy;
    }
    int Track_controller::Get_authority()
    {
        return authority;
    }
    bool Track_controller::Set_PLC()
    {
       return true;
    }
    void Track_controller::Change_switch()
    {
        if(switch_track == false)
        {
            switch_track = true;
        }
        else
        {
            switch_track = false;
        }

    }

