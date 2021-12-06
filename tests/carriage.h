//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_CARRIAGE_H
#define PROJECT1_CARRIAGE_H
#include <ctime>
using namespace std;
class Carriage{
    string CarriageType;
    float distance;
    time_t hour;
public:
    void getCarriageType() const;
    void getDistance() const;
    void getHour() const;

};
#endif //PROJECT1_CARRIAGE_H
