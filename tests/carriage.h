//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_CARRIAGE_H
#define PROJECT1_CARRIAGE_H
#include <ctime>
#include <iostream>
#include "Time.h"
#include "bst.h"
using namespace std;
class Carriage{
    string carriageType;
    float distance;
    Time time;
public:
    Carriage(string cT, float d, Time h);
    string getCarriageType() const;
    float getDistance() const;
    Time getTime() const;
    void setCarriageType(string ct);
    void setDistance(float d);
    void setTime(Time h);
    bool operator < (const Carriage& a )  const;
    bool operator == (const Carriage& a )  const;

};
#endif //PROJECT1_CARRIAGE_H
