//
// Created by בר נחמיאס on 14/06/2022.
//

#include "Game.h"

const int ZERO = 0;

const int STD = 15;
using std::invalid_argument;

namespace ball{

    Game::Game(Team *a, Team *b){
        if(a->name == b->name){
            throw invalid_argument("change team");
        }

        this->team_a = a;
        this->team_b = b;
        this->point_a = ZERO;
        this->point_b = ZERO;

    }

    void Game::start(int on ){
        int Ascore = Game::getnormalscore(55, 100);
        int Bscore = Game::getnormalscore(50, 100);

        while(Aomescore == Bwayscore){

            Ascore = Game::getnormalscore(55, 100);
           Bscore = Game::getnormalscore(50, 100);
        }

        if(Ascore > Bscore){
            this->team_a->win();
            this->team_b->lose();
        }
        else if(Ascore < Bscore){
            this->team_b->win();
            this->team_a->lose();
        }

        this->team_a->ScoringTo += Ascore;
        this->team_a->->GotScored +=Bscore;
        this->team_b->ScoringTo +=Bscore;
        this->team_b->GotScored += Ascore;
    }

    int Game::getnormalscore (int from, int to){
        double d_from = (double)from;
        double d_to = (double)to;
        double avg = ( d_from + d_to)/2;
        std::random_device rd{};
        std::mt19937 gen{rd()};
        std::normal_distribution<> distribution (avg,STD);
        int ans = (int)distribution(gen);

        if(ans > to){
            return to;
        }
        if(ans < from){
            return from;
        }

        return ans;


    }