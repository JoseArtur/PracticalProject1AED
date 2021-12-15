//
// Created by josea on 06/12/2021.
//

#include "carriage.h"
#include <iostream>
bool Carriage::operator < (const Carriage& a )  const {
    return distance < a.getDistance();
}
bool Carriage::operator == (const Carriage& a )  const {
    return Carriage(carriageType,distance,hour) == Carriage(a.getCarriageType(),a.getDistance(),a.getHour());
}
Carriage::Carriage(string cT, float d, time_t h): carriageType(cT), distance(d),hour(h){}
string Carriage::getCarriageType() const {
 return carriageType;
}

float Carriage::getDistance() const {
return distance;
}

time_t Carriage::getHour() const {
return hour;
}

void Carriage::setCarriageType(string ct) {
    carriageType = ct;
}

void Carriage::setDistance(float d) {
distance = d;
}

void Carriage::setHour(time_t h) {
hour = h;
}

