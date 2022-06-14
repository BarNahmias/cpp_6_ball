//
// Created by בר נחמיאס on 14/06/2022.
//

#ifndef B_BALL_MAIN_LEAUGE_H
#define B_BALL_MAIN_LEAUGE_H


#include <iostream>
#include <vector>
#include <map>
#include "Game.h"
#include "Team.h"

using namespace std;

#include<algorithm>

namespace ball{
    class Leauge
    {
    private:
        vector<Team*> Teams;
       bool end;
    public:
        Leauge(const vector<Team*> & teams);
        Leauge();

    };


#endif //B_BALL_MAIN_LEAUGE_H
