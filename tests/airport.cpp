//
// Created by josea on 06/12/2021.
//

#include "airport.h"

using namespace std;

/**
 * Constructors
 */
Airport::Airport(string id){
    this->id = id;
}

/**
 * Getters
 * @return
 */
string Airport::getId() const {
    return this->id;
}

BST<Carriage> Airport::getCarriages() const {
    return carriages;
}

/**
 * Setter
 * @param id
 */
void Airport::setId(string id) {
    this->id = id;
}

/**
 * Adds a carriage
 * @param carriage
 * @return
 */
bool Airport::addCarriage( Carriage carriage ) {
    return carriages.insert(carriage);
}

/**
 * Removes a carriage
 * @param carriage
 * @return
 */
bool Airport::removeCarriage(Carriage carriage) {
    return carriages.remove(carriage);
}

void Airport::SortCarriage() {
//sort(carriages.begin(),carriages.end());
}
BST<Carriage> Airport::getCarriagesByType(string type){
    BST<Carriage > carriages2 = BST<Carriage>(Carriage("f",0,{0,0}));
    return carriages2;
    // copy_if(carriages.begin(),carriages.end(), back_inserter(carriages2),[&type](Carriage carriage ) { return carriage.getCarriageType() == type ; })
}

// WTF IS THIS?
/*vector<Flight *> Airport::getFlights() const {
    return flights;
}

vector<Plane *> Airport::getPlanes() const {
    return planes;
}

bool Airport::searchFlight(int num) {
    for (auto it = flights.begin();it != flights.end(); ++it)
        if ((*it)->getNum() == num)
            return (*it);

    throw(Exception(num));

}
bool Airport::addAirline(Airline *airline) {
    for (auto x: airlines) if (x == airline) return false;

    airlines.push_back(airline);
    return true;
}

void Airport::removeAirline(Airline* airline) {
    for (auto it = airlines.begin();it != airlines.end(); ++it)
        if ((*it) == airline) {
            airlines.erase(it);
            return;
        }
}

vector<Airline *> Airport::getAirlines() const {
    return airlines;
}

bool Airport::searchPlane(string id) {
    for (auto it = planes.begin();it != planes.end(); ++it)
        if ((*it)->getmat() == id)
            return (*it);

    throw(Exception());
}*/

/*// AIRLINE
void Airline::addFlight(Flight *flight) {
    flights.push_back(flight);
}

void Airline::addPlane(Plane *plane) {
    planes.push_back(plane);
}

void Airline::removeFlight(Flight *flight) {
    for (auto it = flights.begin(); it != flights.end(); it++)
        if ((*it) == flight) {
            flights.erase(it);
            return;
        }
}

void Airline::removePlane(Plane *plane) {
    for (auto it = planes.begin(); it != planes.end(); it++)
        if ((*it) == plane) {
            planes.erase(it);
            return;
        }
}

Flight *Airline::searchFlight(Flight *flight) {
    auto it = flights.begin();
    for (;it != flights.end();) {
        if ((*it)->getnum() == flight->getNum()) {
            return (*it);
        }
        it++;
    }
    throw(Exception(flight));
}

string Airline::getId() const{
    return this->idAirline;
}*/