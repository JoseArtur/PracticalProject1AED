//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_CARRIAGE_H
#define PROJECT1_CARRIAGE_H
#include <ctime>
#include <iostream>
using namespace std;
class Carriage{
    string carriageType;
    float distance;
    time_t hour;
public:
    Carriage(string cT, float d, time_t h);
    string getCarriageType() const;
    float getDistance() const;
    time_t getHour() const;
    void setCarriageType(string ct);
    void setDistance(float d);
    void setHour(time_t h);
    bool operator < (const Carriage& a )  const;
    bool operator == (const Carriage& a )  const;

};
#endif //PROJECT1_CARRIAGE_H
