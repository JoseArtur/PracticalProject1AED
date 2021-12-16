//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PASSENGER_H
#define PROJETO_PASSENGER_H

#include <string>

using namespace std;

class Passenger {
    int id;
    string name;
    bool ticket;
    bool hasLuggage;
    bool group;
public:
    Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);
    int getId();
    void setId(int id);
    string getName();
    void setName(string name);
    bool getTicket();
    void setTicket(bool ticket);
    bool getLuggage();
    void setLuggage(bool hasLuggage);
    bool getGroup();
    void setGroup(bool group);
};
#endif //PROJETO_PASSENGER_H
