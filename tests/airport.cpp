//
// Created by josea on 06/12/2021.
//
#include "airport.h"
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;


/// this is a description.
/// this is a breve description.

Airport::Airport(string id){
    this->id = std::move(id);
}
string Airport::getId() const {
    return id;
}

void Airport::setId(const string& id) {
    this->id = (id);
}

BST<Carriage> Airport::getCarriages() const {
    return carriages;
} //TO DO


bool Airport::addCarriage( Carriage carriage ) {
    return carriages.insert(carriage);
}
bool Airport::removeCarriage(Carriage carriage) {
return carriages.remove(carriage);
}

void Airport::SortCarriage() {
sort(carriages.begin(),carriages.end());
}
BST<Carriage> Airport::getCarriagesByType(string type){
    BST<Carriage > carriages2 = BST<Carriage>(Carriage("f",0,{0,0}));
   // copy_if(carriages.begin(),carriages.end(), back_inserter(carriages2),[&type](Carriage carriage ) { return carriage.getCarriageType() == type ; })
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

