//
// Created by בר נחמיאס on 14/06/2022.
//

#ifndef B_BALL_MAIN_SCHEDULE_H
#define B_BALL_MAIN_SCHEDULE_H


#include <iostream>
#include <vector>
#include "Leauge.hpp"
using namespace std;

namespace ball{
    class Schedule
    {
    private:
        Leauge* leauge;

    public:
        Schedule(Leauge* leauge);
        void startLeauge(int on = 0);

    };


#endif //B_BALL_MAIN_SCHEDULE_H
