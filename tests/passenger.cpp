//
// Created by jccmg on 04/12/2021.
//

#include "Passenger.h"
#include <iostream>
#include <string>
#include <vector>

Passenger::Passenger(bool bagage, bool group,bool ticket) {
    this->bagage=bagage;
    this->group=group;
    this->ticket=ticket;
}

bool Passenger::getbagage() {
    return bagage;
}

bool Passenger::getgroup() {
    return group;
}

bool Passenger::getticket() {
    return ticket;
}

void Passenger::setbagage(bool &bagage) {
    this->bagage = bagage;
}

void Passenger::setgroup(bool &group) {
    this->group = group;
}

void Passenger::setticket(bool ticket) {
    this->ticket = ticket;
}