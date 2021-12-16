//
// Created by jccmg on 04/12/2021.
//

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>


Flight::Flight( int num, Date dateDeparture,Time timeDeparture, Date dateArrival,Time timeArrival, Airport origin, Airport destiny) {

    this-> num = num;
    this->dateDeparture = dateDeparture;
    this->timeDeparture = timeDeparture;
    this->dateArrival = dateArrival;
    this->timeArrival = timeArrival;
    this-> origin = origin;
    this-> destiny = destiny;
}

const Date &Flight::getDateDeparture() const {
    return dateDeparture;
}

void Flight::setDateDeparture(const Date &dateDeparture) {
    Flight::dateDeparture = dateDeparture;
}

int Flight::getNum() const {
    return num;
}

void Flight::setNum(int num) {
    Flight::num = num;
}

const Date &Flight::getDateArrival() const {
    return dateArrival;
}

void Flight::setDateArrival(const Date &dateArrival) {
    Flight::dateArrival = dateArrival;
}

const Time &Flight::getTimeDeparture() const {
    return timeDeparture;
}

void Flight::setTimeDeparture(const Time &timeDeparture) {
    Flight::timeDeparture = timeDeparture;
}

const Time &Flight::getTimeArrival() const {
    return timeArrival;
}

void Flight::setTimeArrival(const Time &timeArrival) {
    Flight::timeArrival = timeArrival;
}

const Airport &Flight::getOrigin() const {
    return origin;
}

void Flight::setOrigin(const Airport &origin) {
    Flight::origin = origin;
}

const Airport &Flight::getDestiny() const {
    return destiny;
}

void Flight::setDestiny(const Airport &destiny) {
    Flight::destiny = destiny;
}

const vector<Passenger> &Flight::getPassengers() const {
    return passengers;
}

void Flight::setPassengers(const vector<Passenger> &passengers) {
    Flight::passengers = passengers;
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


bool Flight::operator==(Flight *flight) {
    return this->getNum()==flight->getNum();
}




