//
// Created by בר נחמיאס on 14/06/2022.
//

#include "doctest.h"
#include"Schedule.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;

using namespace ball;


TEST_CASE("bad name & talent team") {
CHECK_THROWS(Team a = Team("", 0.6));

CHECK_THROWS(Team b = Team("b", -7));

CHECK_THROWS(Team c = Team("c", 44));

}

