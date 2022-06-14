//
// Created by בר נחמיאס on 14/06/2022.
//

#ifndef B_BALL_MAIN_GAME_H
#define B_BALL_MAIN_GAME_H
#include "Team.h"
#include <iostream>
#include <vector>
#include <random>
namespace ball {
    class Game {
    private:
        Team *team_a;
        Team *team_b;
        int point_a;
        int point_b;
        std::string win_team;
    public:
        Game(Team *a,Team *b);
        void start(int on = 0);
        tatic int getnormalscore(int from, int to);


    };
}

#endif //B_BALL_MAIN_GAME_H
