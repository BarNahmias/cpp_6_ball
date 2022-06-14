//
// Created by בר נחמיאס on 14/06/2022.
//

#ifndef B_BALL_MAIN_TEAM_H
#define B_BALL_MAIN_TEAM_H
#include <iostream>
using std::ostream;
namespace ball;
class Team {
//public:
    std: string name;
    double  talent;
    int good_game;
    int bad_game;
    int Victories;
    int MaxVictories;
    int Loses;
    int MaxLoses;
    int ScoringTo;
    int GotScored;


public:
    Team(std::string name,double talent);

    void win();
    void lose();


};


#endif //B_BALL_MAIN_TEAM_H
