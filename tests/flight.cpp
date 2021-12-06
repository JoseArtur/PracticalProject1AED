//
// Created by jccmg on 04/12/2021.
//

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>

flight::flight(int num, int day, int month, int year, int dur, string origin, string destiny) {
    this-> num = num;
    this-> day = day;
    this-> month = month;
    this-> year = year;
    this-> dur = dur;
    this-> origin = origin;
    this-> destiny = destiny;
}

int flight::getnum() {
    return num;
}

int flight::getday() {
    return day;
}
int flight::getmonth() {
    return month;
}

int flight::getyear() {

}