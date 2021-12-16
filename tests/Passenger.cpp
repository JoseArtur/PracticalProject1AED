//
// Created by jccmg on 04/12/2021.
//

#include "passenger.h"
#include <iostream>
#include <string>
#include <vector>

Passenger::Passenger(int id, string name, bool ticket, bool hasLuggage, bool group) {
    this->id = id;
    this->name = name;
    this->ticket = ticket;
    this->hasLuggage = hasLuggage;
    this->group = group;
}

int Passenger::getid(){
    return id;
}

void Passenger::setid(int id){
    this->id = id;
}

string Passenger::getname(){
    return name;
}

void Passenger::setname(string name){
    this->name = name;
}
bool Passenger::getticket(){
    return ticket;
}

void Passenger::setticket(bool ticket){
    this->ticket = ticket;
}

bool Passenger::getLuggage(){
    return hasLuggage;
}

void Passenger::setLuggage(bool hasLuggage){
    this->hasLuggage = hasLuggage;
}

bool Passenger::getgroup(){
    return group;
}
void Passenger::setgroup(bool group){
    this->group = group;
}
