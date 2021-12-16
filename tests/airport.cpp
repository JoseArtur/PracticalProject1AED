//
// Created by josea on 06/12/2021.
//
#include "airport.h"
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

//Airline

void Airline::addPlane(Plane *plane) {
    this->planes.push_back(plane);
}

void Airline::deletePlane(Plane *plane) {
    //auto it = find(planes.begin(), planes.end(), plane);
    //this->planes.erase(it);
}

Airline::Airline(string name) {
    this->name = std::move(name);

}

string Airline::getName() const {
    return this->name;
}

void Airline::setName(string name) {
    this->name = name;
}

//Airport

Airport::Airport(string id) { // ????
    this->id = id;
}

string Airport::getId() const {
    return this->id;
}

void Airport::setId(string id) {
    this->id = id;
}

BST<Carriage> Airport::getCarriages() const {
    return this->carriages;
}

void Airport::addCarriage(Carriage carriage) {
    this->carriages.insert(carriage); // ???
}

void Airport::removeCarriage(Carriage carriage) {
    this->carriages.remove(carriage);
}
