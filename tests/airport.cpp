//
// Created by josea on 06/12/2021.
//
#include "airport.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;



/// this is a description.
/// this is a breve description.
Airport::Airport(int id, BST<Carriage> carriages): carriages(carriages) {
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
/*
bool Airport::addCarriage(  const Carriage& carriage ) {
     carriages.insert(carriage);
     return true;
}*/

void Airport::removeCarriage(Carriage carriage) {
carriages.remove(carriage);
}

Flight *Airport::searchFlight(int num) {
    vector<Flight *> ::iterator it = flights.begin();
    for (;it != flights.end();) {
        if ((*it)->getNum() == num) {
            return (*it);
        }
        it++;
    }
    throw(Exception(num));
}

Airline *Airport::searchAirline(string id) {
    vector<Airline *> ::iterator it = airlines.begin();
    for (;it != airlines.end();) {
        if ((*it)->getId() == id) {
            return (*it);
        }
        it++;
    }
    throw(Exception(id));
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

vector<Plane *> Airport::getPlanes() const {
    return planes;
}

vector<Airline *> Airport::getAirlines() const {
    return airlines;
}

Plane *Airport::searchPlane(string id) {
    vector<Plane *> ::iterator it = planes.begin();
    for (;it != planes.end();) {
        if ((*it)->getmat() == id) {
            return (*it);
        }
        it++;
    }
    throw(Exception());
}

vector<Flight *> Airport::getFlights() const {
    return flights;
}

//-----------------------------------------AIRLINE
void Airline::addFlight(Flight *flight) {
    flights.push_back(flight);
}

void Airline::addPlane(Plane *plane) {
    planes.push_back(plane);
}

void Airline::removeFlight(Flight *flight) {
    vector<Flight *> ::iterator it = flights.begin();
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
    vector<Flight *> ::iterator it = flights.begin();
    for (;it != flights.end();) {
        if ((*it)->getNum() == flight->getNum()) {
            return (*it);
        }
        it++;
    }
    throw(Exception(flight));
}

string Airline::getId() const{
    return this->idAirline;
}


