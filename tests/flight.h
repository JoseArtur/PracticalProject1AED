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

    Flight( Date date,int num, int dur, string origin, string destiny);
    int getnum();
    void setDate(Date date);
    vector<Passenger> getPassenger() const;
    Date getdate();
    int getdur();
    string getorigin();
    string getdestiny();
    bool addpassenger(Passenger &pass);
    bool removepassenger(Passenger &pass);
    void setnum(int num);
    void setdestiny(string  destiny);
    void setpassengers(vector<Passenger> & passengers);
    void setorigin(string  origin);
    Date getDate();
    int getDur();

    bool operator==(Flight &flight);

};
#endif //PROJETO_FLIGHT_H
