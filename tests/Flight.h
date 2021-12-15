//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_FLIGHT_H
#define PROJETO_FLIGHT_H
#include <iostream>
#include <string>
#include <vector>
#include "passenger.h"
#include "date.h"
using namespace std;

class Flight {
    int num;
    Date date;
    int dur;
    string origin;
    string destiny;
    vector<passenger> passengers;
public:
    Flight(int num, Date date, int dur, string origin, string destiny);
    int getNum();
    Date getDate();
    int getDur();
    string getOrigin();
    string getDestiny();
    void addpassenger(passenger &pass);
    void removepassenger(passenger &pass);

};
#endif //PROJETO_FLIGHT_H
