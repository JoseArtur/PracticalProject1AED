//
// Created by jccmg on 04/12/2021.
//

#include "Passenger.h"

#include <iostream>
#include <string>
#include <vector>

Passenger::Passenger(int id, string name, bool hasLuggage, bool autoCheck){
    this->id = id;
    this->name = name;
    this->hasLuggage = hasLuggage;
    this->autoCheck = autoCheck;
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

bool Passenger::isLuggage() const {
    return hasLuggage;
}

void Passenger::setLuggage(bool hasLuggage) {
    this->hasLuggage = hasLuggage;
}

bool Passenger::isAutoCheck() const {
    return this->autoCheck;
}

void Passenger::setAutoCheck(bool aC) {
    this->autoCheck = aC;
}
