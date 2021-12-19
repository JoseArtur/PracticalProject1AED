//
// Created by jccmg on 04/12/2021.
//

#include "Passenger.h"

#include <iostream>
#include <string>
#include <vector>

Passenger::Passenger(int id, string name, bool ticket, bool hasLuggage, bool group){
    this->id = id;
    this->name = name;
    this->ticket = ticket;
    this->hasLuggage = hasLuggage;
    this->group = group;
}

int Passenger::getId() const {
    return id;
}

void Passenger::setId(int id) {
    Passenger::id = id;
}

const string &Passenger::getName() const {
    return name;
}

void Passenger::setName(const string &name) {
    Passenger::name = name;
}

bool Passenger::isTicket() const {
    return ticket;
}

void Passenger::setTicket(bool ticket) {
    Passenger::ticket = ticket;
}

bool Passenger::isLuggage() const {
    return hasLuggage;
}

void Passenger::setLuggage(bool bagage) {
    Passenger::hasLuggage = bagage;
}

bool Passenger::isGroup() const {
    return group;
}

void Passenger::setGroup(bool group) {
    Passenger::group = group;
}

