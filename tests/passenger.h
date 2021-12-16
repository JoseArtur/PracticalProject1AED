//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PASSENGER_H
#define PROJETO_PASSENGER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Passenger {
    int id;
    string name;
    bool ticket;
    bool hasLuggage;
    bool group;
public:
    Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);
    int getid();
    void setid(int id);
    string getname();
    void setname(string name);
    bool getticket();
    void setticket(bool ticket);
    bool getLuggage();
    void setLuggage(bool hasLuggage);
    bool getgroup();
    void setgroup(bool group);
};
#endif //PROJETO_PASSENGER_H
