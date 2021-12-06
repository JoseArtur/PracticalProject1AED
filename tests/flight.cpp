//
// Created by jccmg on 04/12/2021.
//

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>

Flight::Flight(int num, int day, int dur, string origin, string destiny) {
    this-> num = num;
    this-> dur = dur;
    this-> origin = origin;
    this-> destiny = destiny;
}

int Flight::getnum() {
    return num;
}

int Flight::getdur() {
    return dur;
}

string Flight::getorigin() {
    return origin;
}

string Flight::getdestiny() {
    return destiny;
}

void Flight::setdur(int &dur) {
    this->dur = dur;
}

vector<passenger> Flight::getpassangers() {
    return passengers;
}
int Flight::getpassindex(Passenger &pass) {} {
    for(int i = 0; i < passengers.size();i++){
        if(pass.getname() = passengers[i].getname()) return i;
    }
    return -1;
}

void Flight::addpassenger(Passenger &pass) {
    passengers.pushback(pass);
}

void Flight::removepassenger(Passenger &pass) {
    passengers.erase(passengers.begin()+getpassindex(pass));
}