//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_AIRPORT_H
#define PROJECT1_AIRPORT_H

#include <iostream>
#include <stdlib.h>
#include "Flight.h"
#include "plane.h"
#include "bst.h"
#include "carriage.h"

using namespace std;
class Airline {
    string name, id;
    vector<Flight *> flights;
    vector<Plane *> planes;
public:
    void addFlight(Flight* flight);
    void addPlane(Plane* plane);
    void deleteFlight(Flight* flight);
    void deletePlane(Plane* plane);
    Flight*  searchFlight(Flight* flight);

};
class Airport{
    string id;
    vector<Flight *> flights;
    vector<Plane *> planes;
    vector<Airline *> airlines;
    BST<Carriage > carriages;
public:
    Airport(): carriages(Carriage("",0,0)) {};
    Airport(string id);
    string getId() const;
    void setId(string id) ;
    BST<Carriage> getCarriages() const;
    bool addCarriage(  Carriage carriage );
    void removeCarriage(Carriage carriage);
    Flight*  searchFlight(Flight* flight);
    Airline*  searchAirline(Airline* airline);
    void addAirline(Airline* airline);
    void removeAirline(Airline* airline);
};

#endif //PROJECT1_AIRPORT_H
