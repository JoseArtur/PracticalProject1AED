//
// Created by gdrp7 on 15/12/2021.
//

#ifndef HEAD_MENU_H
#define HEAD_MENU_H

#include "airport.h"
#include <iostream>
#include "plane.h"
#include <iostream>
#include <sstream>
#include <string>
#include "luggage.h"
using namespace std;

class Menu {
    vector<Airport> airports;
    vector<Plane> planes;
    vector<Flight> flights;
    vector<Passenger> passengers;
    vector<vector<stack<Luggage>>> cart;
public:
    void Control();
    void DisplayMenu();
void DisplayUserMenu();
void selectPassenger();
void DisplayAdminMenu();
    void SearchFlightOrigin();
    void BuyTicket();
    void AirportManagement();
    void PlaneManagement();
    void FlightManagement();
    void PassengersManagement();
    void CartManagement();
    // airports
    unsigned int showAirportFunctions();
    void viewAirports();
    void addAirport();
    void updateAirport(Airport *p1);
    void selectAirport();
    void AirportMenu(Airport *a1);
    unsigned int showSelectedAirportFunctions(Airport *a1);
    void removeAirport();

    // carriages
    void viewCarriages(Airport *a1);
    void addCarriage(Airport *a1);
    void removeCarriage(Airport *a1);
    void selectCarriage(Airport *a1);

    // planes
    unsigned int showPlaneFunctions();
    void viewPlanes();
    void addPlane();
    void updatePlane(Plane *p1);
    void removePlane();
    void selectPlane();
    void PlaneMenu(Plane *p1);
    unsigned int showSelectedPlaneFunctions(Plane *p1);
    //flight
    void updateFlight(Flight *f1);
    void viewFlights(Plane *p1);
    void addFlight(Plane *p1);
    void removeFlight(Plane *p1);
    void selectFlight(Plane *p1);
    void FlightMenu(Flight *f1);
    unsigned int showSelectedFlightFunctions(Flight *a1);
    void SearchFlight();
    void SearchFlightNumber();
    void UseDefault();
    // Passenger
    void viewPassengers(Flight *f1);
    void BuyTicket(Flight *f1);
    void selectPassenger(Flight *f1);
    void removePassenger(Flight *f1) {

    }
};

#endif //HEAD_MENU_H
