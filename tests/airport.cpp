//
// Created by josea on 06/12/2021.
//
#include "airport.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;




Airport::Airport(string id){
    this->id = id;

}

BST<Carriage> Airport::carriages(Carriage carriage) {
    return BST<Carriage>(Carriage());

}

string Airport::getId() const {
    return id;
}

void Airport::setId(string id) {
    this->id = id;
}

BST<Carriage> Airport::getCarriages() const {
    return carriages;
} //TO DO

bool Airport::addCarriage(  Carriage carriage ) {

    return carriages.insert(carriage);
}

void Airport::removeCarriage(Carriage carriage) {
carriages.remove(carriage);
}

Flight *Airport::searchFlight(Flight *flight) {
    flights.
    return nullptr;
}

Airline *Airport::searchAirline(Airline *airline) {
    return nullptr;
}

void Airport::addAirline(Airline *airline) {
    airlines.push_back(airline);

}

void Airport::removeAirline(Airline* airline) {

    airlines.erase(airline.);
}


BST<Carriage> Airline::carriages(Carriage) {
    return BST<Carriage>(Carriage());
}

void Airline::addFlight(Flight *flight) {

}

void Airline::addPlane(Plane *plane) {

}

void Airline::deleteFlight(Flight *flight) {

}

void Airline::deletePlane(Plane *plane) {

}

Flight *Airline::searchFlight(Flight *flight) {
    return nullptr;
}
