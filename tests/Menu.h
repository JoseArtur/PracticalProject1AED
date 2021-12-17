//
// Created by gdrp7 on 15/12/2021.
//

#ifndef HEAD_MENU_H
#define HEAD_MENU_H

#include "airport.h"
#include <iostream>

using namespace std;

class Menu {
    vector<Airport> airports;
public:
    void DisplayMenu();
    void SearchFlight();
    void SearchFlightNumber();
    void SearchFlightOrigin();
    void BuyTicket();
    void AirportManagement();
    void PlaneManagement();
    void FlightManagement();
    void PassengersManagement();
    void CartManagement();
    unsigned int showAirportFunctions();
    void viewAirports();
    void addAirport();
    void updateAirport();
};

#endif //HEAD_MENU_H
