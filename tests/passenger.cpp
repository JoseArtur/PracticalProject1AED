//
// Created by jccmg on 04/12/2021.
//

#include "passenger.h"

Passenger::Passenger(int id, string name, bool ticket, bool hasLuggage, bool group) {
    this->id = id;
    this->name = name;
    this->ticket = ticket;
    this->hasLuggage = hasLuggage;
    this->group = group;
}

int Passenger::getId(){
    return id;
}

void Passenger::setId(int id){
    this->id = id;
}

string Passenger::getName(){
    return name;
}

void Passenger::setName(string name){
    this->name = name;
}
bool Passenger::getTicket(){
    return ticket;
}

void Passenger::setTicket(bool ticket){
    this->ticket = ticket;
}

bool Passenger::getLuggage(){
    return hasLuggage;
}

void Passenger::setLuggage(bool hasLuggage){
    this->hasLuggage = hasLuggage;
}

bool Passenger::getGroup(){
    return group;
}
void Passenger::setGroup(bool group){
    this->group = group;
}
