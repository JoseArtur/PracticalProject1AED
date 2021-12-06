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
    string name;
    bool ticket;
    bool bagage;
    bool group;
public:
    Passenger(string name;bool bagage, bool group,bool ticket);
    string getname();
    void setname();
    bool getbagage();
    void setbagage(bool &bagage);
    bool getgroup();
    void setgroup(bool &group);
    bool getticket();
    void setticket(bool ticket);

};
#endif //PROJETO_PASSENGER_H
