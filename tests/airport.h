//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_AIRPORT_H
#define PROJECT1_AIRPORT_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Airport{
    string id;
    vector<Flight *> flights;
    vector<Plane *> planes;
    vector<Airline *> airlines;
    BST<Carriage > carriages = BST<Carriage>(Carriage);
public:
    Airport();
    Airport(id);
    string getId() const;
    string setId(string id) ;
    BST<Carriage> getCarriages() const;
    void addCarriage(Carriage carriage);
    void removeCarriage(Carriage carriage);
    Flight*  searchFlight(Flight* flight);
    Airline*  searchAirline(Airline* airline);
    void addAirline(Airline* airline);
    void removeAirline(Airline* airline);
}
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
#endif //PROJECT1_AIRPORT_H
