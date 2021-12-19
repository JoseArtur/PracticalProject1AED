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
        if(x.getId() == pass.getId()){
            return false;
        }}

    passengers.push_back(pass);
    return true;
}

bool Flight::removepassenger(Passenger &pass) {
    for(int i = 0; i < passengers.size();i++){
        if(passengers[i].getId() == pass.getId()){

            passengers.erase(passengers.begin()+i);
            return true;
        }
    }
    return false;
}


bool Flight::operator==(Flight *flight) {
    return this->getNum()==flight->getNum();
}

Time Flight::getDur() {
        int totalhours = 0;
        for(int i = dateDeparture.getYear(); i < dateArrival.getYear();i++){
            if((dateDeparture.getYear()+1)%4 == 0) totalhours += 366;
            else totalhours += 365;
        }
        int m = dateArrival.getMonth() - dateDeparture.getMonth();
        int ma = dateArrival.getMonth();
        if(m<0){
            while (m<0){
                if(ma-1 == 0 || ma -1 ==1|| ma -1==3 || ma -1 ==5 || ma -1 ==7|| ma -1==8 || ma -1 ==10){
                    totalhours -= 31;
                }
                else if (ma -1 == 2){
                    if(dateArrival.getYear()%4==0){
                        totalhours -= 29;
                    }
                    else{
                        totalhours -= 28;
                    }
                }
                else{
                    totalhours -= 30;
                }
                if(ma == 1) ma += 12;
                ma --;
                m++;
            }
        }
        else{
            for(int j = dateDeparture.getMonth();j < dateArrival.getMonth();j++){
                if(j-1 == 0 || j -1 ==1 || j -1==3 || j -1 ==5 || j -1 ==7 || j -1==8 || j -1 ==10){
                    totalhours += 31;
                }
                else if (j -1 == 2){
                    if(dateArrival.getYear()%4==0){
                        totalhours += 29;
                    }
                    else{
                        totalhours += 28;
                    }
                }
                else{
                    totalhours += 30;
                }
            }
        }

        int d = dateArrival.getDay() - dateDeparture.getDay();
        totalhours += d;
        totalhours *= 24;

        int h = timeArrival.getHour() - timeDeparture.getHour();
        totalhours += h;

        int min = timeArrival.getMinute() - timeDeparture.getMinute();
        if(min<0) {
            totalhours--;
            min += 60;
        }
        Time dur(totalhours,min);
        return dur;
    }





