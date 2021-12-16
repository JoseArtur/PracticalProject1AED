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
    string name;
    vector<Plane *> planes;
public:
    Airline(string name);
    string getName() const;
    void setName(string name);
    void addPlane(Plane* plane);
    void deletePlane(Plane* plane);
};

class Airport{
    string id;
    BST<Carriage > carriages;
public:
    Airport(): carriages(Carriage("",0,0)) {};
    Airport(string id);
    string getId() const;
    void setId(string id);
    BST<Carriage> getCarriages() const;
    void addCarriage(Carriage carriage);
    void removeCarriage(Carriage carriage);
};

#endif //PROJECT1_AIRPORT_H
