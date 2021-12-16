//
// Created by jccmg on 04/12/2021.
//

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>


Flight::Flight( Date date,int num, int dur, string origin, string destiny) {

    this-> num = num;
    this-> dur = dur;
    this-> origin = origin;
    this-> destiny = destiny;
    this-> date = date;
}

int Flight::getnum(){
    return num;
}

void Flight::setnum(int  num){
    this->num = num;
}



string Flight::getdestiny() {
    return destiny;
}

void Flight::setdestiny(string  destiny) {
    this->destiny = destiny;
}

string Flight::getorigin() {
    return origin;
}

void Flight::setorigin(string  origin) {
    this->origin = origin;
}

bool Flight::addpassenger(Passenger &pass) {
    for(auto x:passengers){
        if(x.getid() == pass.getid()){
            return false;
        }}

     passengers.push_back(pass);
    return true;
}

bool Flight::removepassenger(Passenger &pass) {
    for(int i = 0; i < passengers.size();i++){
        if(passengers[i].getid() == pass.getid()){

            passengers.erase(passengers.begin()+i);
            return true;
        }
    }
    return false;
}

Date Flight::getdate(){
    return date;
}

bool Flight::operator==(Flight &flight) {
    return this->getnum()==flight.getnum();
}

void Flight::setDate(Date date){
    this->date = date;
}

vector<Passenger> Flight::getPassenger() const{
    return passengers;
}

void Flight::setpassengers(vector<Passenger> & passengers){
    this->passengers = passengers;
}



