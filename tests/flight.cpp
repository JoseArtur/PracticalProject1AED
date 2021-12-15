//
// Created by jccmg on 04/12/2021.
//

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>

Flight::Flight(int cap, int num, int day, int month, int year, int dur, string origin, string destiny) {
    this->cap = cap;
    this-> num = num;
    this-> dur = dur;
    this-> origin = origin;
    this-> destiny = destiny;
}

int Flight::getnum(){
    return num;
}

void Flight::setnum(int & num){
    this->num = num;
}

int Flight:: getdur(){
    return dur;
}

void Flight::setdur(int & dur){
    this->dur = dur;
}

string Flight::getdestiny() {
    return destiny;
}

void Flight::setdestiny(string & destiny) {
    this->destiny = destiny;
}

string Flight::getorigin() {
    return origin;
}

void Flight::setorigin(string & origin) {
    this->origin = origin;
}

void Flight::addpassenger(passenger &pass) {
    passenger.push_back(pass);
}

bool Flight::removepassenger(passenger &pass) {
    for(int i = 0; i < passengers.size();i++){
        if(passengers[i].getid() == pass.getid()){

            passengers.erase(flights.begin()+i);
            return true;
        }
    }
    return false;
}

Date Flight::getdate(){
    return date;
}

void Flight::setdate(Date &date){
    this->date = date;
}

vector<Passenger> getpassangers(){
    return passengers;
}

void Flight::setpassengers(vector<Passenger> & passengers){
    tis->passengers = passengers;
}