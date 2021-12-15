//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_FLIGHT_H
#define PROJETO_FLIGHT_H
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
#include "passanger.h"

using namespace std;

class Flight {
    int num;
    int dur;
    string origin;
    string destiny;
    vector<Passenger> passengers;
    Date date;
public:
    Flight(int cap, int num, int day, int month, int year, int dur, string origin, string destiny);
    int getnum();
    void setnum(int & num);
    int getdur();
    void setdur(int & dur);
    string getorigin();
    void setorigin(string & origin);
    string getdestiny();
    void setdestiny(string & destiny);
    vector<Passenger> getpassangers();
    void setpassangers(vector<Passenger> passengers);
    void addpassenger(Passenger &pass);
    bool removepassenger(Passenger &pass);
    Date getdate();
    void setdate( Date & date);
};
#endif //PROJETO_FLIGHT_H
