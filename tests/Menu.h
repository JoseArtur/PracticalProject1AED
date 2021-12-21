//
// Created by gdrp7 on 15/12/2021.
//

#ifndef HEAD_MENU_H
#define HEAD_MENU_H

#include "luggage.h"
#include "plane.h"
#include "airport.h"
#include "Cart.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Menu {
    vector<Airport> airports;
    vector<Plane > planes;
    vector<Passenger> passengers;
    vector<Cart> cart;
public:
    void UseDefault();
    void Control(); // inputs data to files
    void DisplayMenu();
    void DisplayOptions(); // airport,plane,flight,passenger,cart,service options
    void AirportManagement(); // view,add,select,remove airports
    void PlaneManagement(); // view,add,select,remove planes
    static void Help();

    // airports
    static unsigned int showAirportFunctions();
    void viewAirports(); // cout airport ID
    void addAirport(); // check if exists, adds to vector (menu)
    void selectAirport(); // view airports -> airport menu (selected airport)
    void AirportMenu(const Airport& a1); // execute carriage options for the airport
    unsigned int showSelectedAirportFunctions(const Airport& a1); // shows carriage options

    // carriages
    void viewCarriages(const Airport& a1); // cout type, distance, time every carriage
    void addCarriage(Airport a1); // adds carriage to vector (menu)

    // planes
    static unsigned int showPlaneFunctions();
    void viewPlanes(); // cout mat, type, cap for flights
    void addPlane(); // adds plane to vector
    void selectPlane(); // view planes -> planes menu (selected planes)
    void PlaneMenu(Plane &p1); // executes flight options
    unsigned int showSelectedPlaneFunctions(Plane p1); // show options

    //flight
    void viewFlights(Plane p1); // cout every plane info
    void addFlight(Plane &p1); // adds flight
    void selectFlight(Plane p1); // view flight -> flight menu (selected flight)
    void FlightMenu(Flight &f1, int cap); // execute passenger options
    static unsigned int showSelectedFlightFunctions(const Flight& f1); // buy ticket, view/select/remove passenger, update flight

    // Passenger
    void viewPassengers(Flight f1); // cout id, name, luggage, flight
    void BuyTicket(Flight &f1, int cap); // buys a ticket

    // Cart
    void autoCheckIn(Flight f1);
    void addLuggage(Cart &c1, unsigned int number);

    // Plane Service
    void serviceMenu(Plane &p1);
    unsigned int showServiceOptions();
    void viewAllServices(const Plane& p1);
    void scheduleService(Plane &p1);
    void completeService(Plane &p1);
};

#endif //HEAD_MENU_H
