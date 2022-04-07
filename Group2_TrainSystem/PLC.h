#ifndef PLC_H
#define PLC_H

#include <string>
#include <QString>
#include "Track_controller.h"

class switch_position
{
    public:
            int data;
            bool state = false;

};

class PLC //private Track_controller
{
    private:
            int curr_block;
            int suggested_speed;
            int wayside_block;
            QString store[10];
            int store_int[10];
            switch_position save_block;

    public:
            PLC(int, int, int);
            bool Run_PLC();


};

#endif // PLC_H
