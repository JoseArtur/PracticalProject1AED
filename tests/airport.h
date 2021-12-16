//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_AIRPORT_H
#define PROJECT1_AIRPORT_H

#include <stdlib.h>
#include "flight.h"
#include "plane.h"
#include "bst.h"
#include "carriage.h"
#include "set"
#include <string>
#include <list>
#include "Time.h"
#include "Date.h"
using namespace std;
/*
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

};*/
class Airport{

    string id;
    vector<Flight *> flights;
    vector<Plane *> planes;
    //vector<Airline *> airlines;
    BST<Carriage > carriages = BST<Carriage>(Carriage("f",0,{0,0}));
public:
    Airport(){};
    Airport(int id);
    void setId(int id) ;
    string getId() const;
    vector<Flight *> getFlights() const;
    vector<Plane *>getPlanes() const;
  //  vector<Airline *> getAirlines() const;
    BST<Carriage> getCarriages() const;
    bool addCarriage( Carriage carriage );
    void removeCarriage(Carriage carriage);
    bool  searchFlight(int num);
    bool searchPlane(string id);



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
    Exception(Flight* flight):id(flight->getnum()){
        cout<<"not found";
    }

};
#endif //PROJECT1_AIRPORT_H
