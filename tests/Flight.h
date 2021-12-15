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
<<<<<<< HEAD
    Flight(int num, int day, int month, int year, int dur, string origin, string destiny);
    int getNum();
    int getday();
    int getmonth();
    int getyear();
    string getdate();
    int getdur();
    string getorigin();
    string getdestiny();
=======
    Flight(int num, Date date, int dur, string origin, string destiny);
    int getNum();
    Date getDate();
    int getDur();
    string getOrigin();
    string getDestiny();
>>>>>>> origin/b3
    void addpassenger(passenger &pass);
    void removepassenger(passenger &pass);

};
#endif //PROJETO_FLIGHT_H
