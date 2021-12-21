//
// Created by josea on 06/12/2021.
//

#include "carriage.h"
#include <iostream>
Carriage::Carriage(string cT, float d, Time t): carriageType(cT), distance(d),time(t){}
string Carriage::getCarriageType() const {
    return carriageType;
}

float Carriage::getDistance() const {
return distance;
}

Time Carriage::getTime() const {
return time;
}

void Carriage::setCarriageType(string ct) {
    carriageType = ct;
}

void Carriage::setDistance(float d) {
distance = d;
}

void Carriage::setTime(Time t) {
time = t;
}

bool Carriage::operator == (const Carriage& a )  const {
    return (carriageType==a.getCarriageType()) && abs(distance - a.getDistance()) < 0.01 && (time==a.getTime());
}

bool Carriage::operator<(const Carriage &a)  const {
    if(time == a.getTime()){
        if(abs(distance - a.getDistance()) < 0.01){
            return carriageType<a.getCarriageType();
        }
        else return distance < a.getDistance();
    }
    else return time < a.getTime();
}
