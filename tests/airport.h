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
#include "set"
using namespace std;
class Airline {
    string name, idAirline;
    vector<Flight *> flights;
    vector<Plane *> planes;
public:
    string getId() const;
    void addFlight(Flight* flight);
    void addPlane(Plane* plane);
    void removeFlight(Flight* flight);
    void removePlane(Plane* plane);
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
    Airport(int id, BST<Carriage> carriages);
    void setId(int id) ;
    string getId() const;
    vector<Flight *> getFlights() const;
    vector<Plane *>getPlanes() const;
    vector<Airline *> getAirlines() const;
    BST<Carriage> getCarriages() const;
    bool addCarriage( const Carriage& carriage );
    void removeCarriage(Carriage carriage);
    Flight*  searchFlight(int num);
    Airline*  searchAirline(string name);
    Plane* searchPlane(string id);
    bool addAirline(Airline* airline);
    void removeAirline(Airline* airline);


};
class Exception{
    int id, mat;
    string idAirline;
public:
    Exception(){
        cout<<"not found";
    }
    Exception(int id):id(id){
        cout<<"not found";
    }
    Exception(string idAirline):idAirline(idAirline){
        cout<<"not found";
    }
    Exception(Flight* flight):id(flight->getNum()){
        cout<<"not found";
    }

};
#endif //PROJECT1_AIRPORT_H
