//
// Created by gdrp7 on 15/12/2021.
//

#include "Menu.h"

void Menu::DisplayMenu() {
    unsigned int input;
    do {
        cout << "\n\n"
                "1) Search Flight\n"
                "2) Buy Ticket\n"
                "0) Quit\n";
        cout << "Choose an option: " << input << endl;

        switch (input) {
            case 0: exit(0);
            case 1: SearchFlight(); break;
            case 2: BuyTicket(); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (true);
}

void Menu::SearchFlight() {
    unsigned int input;
    do {
        cout << "1) Search with flight number\n"
                "2) Search with origin/destination\n"
                "0) Return to menu\n";
        cout << "Choose an option: " << input << endl;

        switch (input) {
            case 0: return;
            case 1: SearchFlightNumber(); return;
            case 2: SearchFlightOrigin(); return;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (true);
}

void Menu::SearchFlightNumber() {
    unsigned int input;
    do {
        cout << "\nType 0 to return.\n";
        cout << "Please write the flight number: " << input << endl;

        if (input == 0) return;

        bool flightFound = false;
        for (auto f : Airport.flight)
            if (f.num == input) {
                flightFound = true;
                cout << f.num << f.date << f.origin << f.destiny << f.dur << endl;
            }
        if (!flightFound) cout << "\n\nFlight not found!\n\n";

    } while (true);
}

void Menu::SearchFlightOrigin() {
    string origin, destination;
    do {
        cout << "Please write the flight origin: " << origin << endl;
        cout << "Please write the flight destination: " << destination << endl;

        bool flightFound = false;
        for (auto f : Airport.flight)
            if (f.destination == destination || f.origin == origin) {
                flightFound = true;
                cout << f.num << f.date << f.origin << f.destiny << f.dur << endl;
            }
        if (!flightFound) cout << "\n\nFlight not found!\n\n";

    } while (true);

}

