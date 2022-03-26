#ifndef CENTRAL_H
#define CENTRAL_H

#include "ctc_test.h"
#include "wayside_test.h"

//simple C++ class used to connect signals and slots from all modules together
//can also be used for centralized timing

class Central
{
public:
    Central();

private:
    CTC_test *ctc;
    Wayside_test *wayside;
};

#endif // CENTRAL_H
