//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_FLIGHT_H
#define PROJETO_FLIGHT_H
#include <iostream>
#include <string>
#include <vector>
#include "passenger.h"
#include "Date.h"
using namespace std;

class Flight {
    int num;
    Date date;
    int dur;
    string origin;
    string destiny;
    vector<Passenger> passengers;
public:
    Flight(Date date,int num, string origin, string destiny);
    int getnum();
    int getday();
    int getmonth();
    int getyear();
    vector<Passenger> getPassenger() const;
    string getdate();
    int getdur();
    string getorigin();
    string getdestiny();
    void addpassenger(Passenger &pass);
    void removepassenger(Passenger &pass);

};
#endif //PROJETO_FLIGHT_H
