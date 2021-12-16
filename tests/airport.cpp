//
// Created by josea on 06/12/2021.
//
#include "airport.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

<<<<<<< HEAD


/// this is a description.
/// this is a breve description.
Airport::Airport(int id) {
=======
Airport::Airport(string id){
>>>>>>> origin/b3
    this->id = id;
}
string Airport::getId() const {
    return id;
}

void Airport::setId(int id) {
    this->id = id;
}

BST<Carriage> Airport::getCarriages() const {
    return carriages;
} //TO DO
<<<<<<< HEAD
/*
bool Airport::addCarriage( Carriage carriage ) {
     return carriages.insert(carriage);
=======

bool Airport::addCarriage(Carriage carriage ) {
    return carriages.insert(carriage);
>>>>>>> origin/b3
}
*/
void Airport::removeCarriage(Carriage carriage) {
carriages.remove(carriage);
}
vector<Flight *> Airport::getFlights() const {
    return flights;
}
vector<Plane *> Airport::getPlanes() const {
    return planes;
}
/*
bool Airport::searchFlight(int num) {
    auto it = flights.begin();
    for (;it != flights.end();) {
        if ((*it)->getnum() == num) {
            return (*it);
        }
        it++;
    }
    throw(Exception(num));

}
bool Airport::addAirline(Airline *airline) {
    for(auto x:airlines){
        if(x == airline){
            return false;
        }
    }
    airlines.push_back(airline);
    return true;
}

void Airport::removeAirline(Airline* airline) {
    vector<Airline *> ::iterator it = airlines.begin();
    for (;it != airlines.end();) {
        if ((*it) == airline) {
            airlines.erase(it);
            return;
        }
        it++;
    }
}
*/

/*
vector<Airline *> Airport::getAirlines() const {
    return airlines;
}
/*
bool Airport::searchPlane(string id) {
    vector<Plane *> ::iterator it = planes.begin();
    for (;it != planes.end();) {
        if ((*it)->getmat() == id) {
            return (*it);
        }
        it++;
    }
    throw(Exception());
}
*/
/*
//-----------------------------------------AIRLINE
void Airline::addFlight(Flight *flight) {
    flights.push_back(flight);
}

void Airline::addPlane(Plane *plane) {
    planes.push_back(plane);
}

void Airline::removeFlight(Flight *flight) {
    auto  it = flights.begin();
    for (;it != flights.end();) {
        if ((*it) == flight) {
            flights.erase(it);
            return;
        }
        it++;
    }}

void Airline::removePlane(Plane *plane) {
    vector<Plane *> ::iterator it = planes.begin();
    for (;it != planes.end();) {
        if ((*it) == plane) {
            planes.erase(it);
            return;
        }
        it++;
    }
}

Flight *Airline::searchFlight(Flight *flight) {
    auto it = flights.begin();
    for (;it != flights.end();) {
        if ((*it)->getnum() == flight->getnum()) {
            return (*it);
        }
        it++;
    }
    throw(Exception(flight));
}

string Airline::getId() const{
    return this->idAirline;
}
*/

