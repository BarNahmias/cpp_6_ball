//
// Created by בר נחמיאס on 14/06/2022.
//
#include"Leauge.hpp"
const int INF = 9999999;

/*NBA teams name*/
const vector<string> team_names = {
        "zicron yacov","binyamina","pardes hana","hadera","givat adda","hifa","tel aviv","oranit","elkana","beer shva","zefat","natanya","herzelya","hod asharon","kefar saba"
        ,"yerocham","dimona","zoran","kadima","even yehoda","ranana","petch tikva","jerosalem ","givat smuel","even smuel","kefar yona","rmat hashron","metola","ariel","lod"
};


namespace ball{
    Leauge::Leauge(const vector<Team*> &teams){
        if (teams.size()==20){
        this->Teams=teams;}
        if (teams.size()<20){
            this->Teams=teams;
            for (unsigned int i = 0; i <20-teams.size() ; ++i) {
                this->Teams.push_back(teams.at(i));
            }
        }
        else {throw invalid_argument("max 20 teams!");}
    }
    Leauge::Leauge(){
        this->Teams=team_names;
    }

}