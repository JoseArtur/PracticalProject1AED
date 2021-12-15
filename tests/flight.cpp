//
// Created by jccmg on 04/12/2021.
//

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>

Flight::Flight(int num, Date date, int dur, string origin, string destiny) {
    this-> num = num;
    this-> dur = dur;
    this-> origin = origin;
    this-> destiny = destiny;
    this-> date = date;
}

int Flight::getNum() {
    return num;
}