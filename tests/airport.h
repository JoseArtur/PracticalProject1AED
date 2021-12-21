//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_AIRPORT_H
#define PROJECT1_AIRPORT_H

#include <stdlib.h>
#include "bst.h"
#include "carriage.h"
#include "set"
#include <string>
#include <list>
#include "Time.h"
#include "Date.h"

using namespace std;

class Airport{
    string id;
    BST<Carriage > carriages = BST<Carriage>(Carriage("f",0,{0,0}));
public:
    /**
     * Constructors
     */
    Airport() = default;;
    Airport(string id);

    /**
     * Getters
     * @param id
     */
    string getId() const;
    BST<Carriage> getCarriages() const;

    /**
     * Setters
     * @param id
     */
    void setId(string id) ;

    /**
     * Adds a carriage
     * @param carriage
     * @return
     */
    bool addCarriage( Carriage carriage );  // doesn't work
    void SortCarriage();
    BST<Carriage> getCarriagesByType(string type);
    /**
     * Removes a carriage
     * @param carriage
     * @return
     */
    bool removeCarriage(Carriage carriage);

//  UNUSED
//    vector<Airline *> getAirlines() const;
//    vector<Flight *> getFlights() const;
//    vector<Plane *>getPlanes() const;
//    bool  searchFlight(int num);
//    bool searchPlane(string id);
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

/*class Airline {
    string name;
    vector<Plane *> planes;
public:
    string getName() const;
    void addPlane(Plane* plane);
    void removeFlight(Flight* flight);
};*/

#endif //PROJECT1_AIRPORT_H