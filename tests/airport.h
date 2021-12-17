//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_AIRPORT_H
#define PROJECT1_AIRPORT_H

#include <stdlib.h>
#include "carriage.h"
#include "set"
#include <string>
#include <list>
#include "Time.h"
#include "Date.h"
using namespace std;

class Airport{

    string id;

   // vector<Plane *> planes;
    //vector<Airline *> airlines;
    BST<Carriage > carriages = BST<Carriage>(Carriage("f",0,{0,0}));
public:
    /**
     * empty constructor.
     */
    Airport(){};
    /**
     * construct with id.
     * @param id
     */
    Airport(string id);
    void setId(string id) ;
    string getId() const;

    //vector<Plane *>getPlanes() const;
  //  vector<Airline *> getAirlines() const;
    BST<Carriage> getCarriages() const;
    bool addCarriage( Carriage carriage );
    bool removeCarriage(Carriage carriage);
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


};
#endif //PROJECT1_AIRPORT_H
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