//
// Created by בר נחמיאס on 14/06/2022.
//

#include "Schedule.h"
namespace ball{
//constructor
    Schedule::Schedule( Leauge* leauge){
        this->leauge = leauge;
    }


    void Schedule::startLeauge(int on) {
        int leauge_size = this->Teams.size();
        int counter = 0;




        for (size_t i = 0; i < leauge_size; i++)
        {
            for (size_t j = i + 1; j < leauge_size; j++)
            {
                Team* a = this->leauge->Teams.at(i);
                Team* b = this->leauge->Teams.at(j);
                Game game = Game(a,b);
                game.start(1);
                counter ++;
            }

        }




        for (size_t i = 0; i < leauge_size; i++)
        {
            for (size_t j = i + 1; j < leauge_size; j++)
            {
                Team* a = this->leauge->Teams.at(i);
                Team* b = this->leauge->Teams.at(j)
                Game game = Game(b,a);
                game.start(1);
                counter ++;
            }

        }

