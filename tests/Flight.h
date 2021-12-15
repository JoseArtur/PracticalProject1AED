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
    int day;
    int month;
    int year;
    int dur;
    string origin;
    string destiny;
    vector<passenger> passengers;
public:
    Flight(int num, int day, int month, int year, int dur, string origin, string destiny);
    int getNum();
    int getday();
    int getmonth();
    int getyear();
    string getdate();
    int getdur();
    string getorigin();
    string getdestiny();
    void addpassenger(passenger &pass);
    void removepassenger(passenger &pass);

};
#endif //PROJETO_FLIGHT_H
