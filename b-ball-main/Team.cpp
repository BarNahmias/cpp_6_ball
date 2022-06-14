//
// Created by בר נחמיאס on 14/06/2022.
//

#include "Team.h"

using std::invalid_argument;
namespace ball{
    Team::Team(string name,double talent){
        if(talent > 1||talent< 0 ){
            throw invalid_argument("bad talent");
        };
        if(name == ""){
            throw invalid_argument("bad name");
        }

        this->name = std::move(name);
        this->talent = talent;
        this->good_game = 0;
        this->bad_game = 0;
        this->Victories = 0;
        this->MaxVictories = 0;
        this->Loses = 0;
        this->MaxLoses = 0;
        this->ScoringTo = 0;
        this->GotScored = 0;
    }

    void Team::lose(){
        this->bad_game++;
        this->Loses++;

        if(this->Loses > this->MaxLoses){
            this->MaxLoses = this->Loses;
        }

        this->good_game = 0;

    }

    void Team::win(){
        this->good_game++;
        this->Victories++;

        if(this->Victories > this->MaxVictories){
            this->MaxVictories = this->Victories;
        }

        this->Loses = 0;

    }



}