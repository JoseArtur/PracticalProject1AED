//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_FLIGHT_H
#define PROJETO_FLIGHT_H
#include <iostream>
#include <string>
#include <vector>
#include "passenger.h"
using namespace std;

class Flight {
    int num;
    int dur;
    string origin;
    string destiny;
    vector<passenger> passengers;
public:
    Flight(int num, int dur, string origin, string destiny);
    int getnum();
    int getdur();
    int setdur(int &dur);
    string getorigin();
    string getdestiny();
    vector<passenger> getpassangers();
    int getpassindex(passenger &pass);
    void addpassenger(passenger &pass);
    void removepassenger(passenger &pass);
};
#endif //PROJETO_FLIGHT_H
