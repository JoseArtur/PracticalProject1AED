//
// Created by gdrp7 on 15/12/2021.
//

#include "Menu.h"
#include <fstream>
void Menu::DisplayMenu() {
    unsigned int input;
    do {
        cout << " ____________________________________ " << endl;
        cout << "| *** AIRLINE MANAGEMENT SYSTEM  *** |" << endl;
        cout << "|       -- Select a option -         |" << endl;
        cout << "| 1) - Airport options               |" << endl;
        cout << "| 2) - Plane options                 |" << endl;
        cout << "| 3) - Flight options                |" << endl;
        cout << "| 4) - Passengers options            |" << endl;
        cout << "| 5) - Cart options                  |" << endl;
        cout << "| 6) - PlaneServices options         |" << endl;
        cout << "| 0) - Exit                          |" << endl;
        cout << "|____________________________________|" << endl;

        cout << "Choose an option: " ;
        cin>> input ;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (input) {
            case 0: exit(0);
            case 1: AirportManagement(); break;
            case 2: PlaneManagement(); break;
            case 3: FlightManagement(); break;
            case 4: PassengersManagement(); break;
            case 5: CartManagement(); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input !=0);
}
void Menu::AirportManagement(){
    unsigned int input;
do{
    input = showAirportFunctions();
    switch(input){
        case 0:break;
        case 1:
            viewAirports();
        break;
        case 2: addAirport(); break;
        case 3: updateAirport();break;
        default:cout << "\n\nInvalid input!\n\n";
    }
}while(input!=0);
cout<<"/n";
}
//--AIRPORT
unsigned int Menu::showAirportFunctions(){

    int input;
    cout << " _______________________________________ " << endl;
    cout << " |----------- Airport Function --------| " << endl;
    cout << " |_____________________________________|" << endl;
    cout << " |---- -- Select a option :------------ |" << endl;
    cout << " |1 - View airports -------------------|" << endl;
    cout << " |2 - create airport-------------------|" << endl;
    cout << " |3 - update airport-------------------|" << endl;
    cout << " |0 - Back-----------------------------|" << endl << endl;
    cout << " |Option: ";
    cout << "Choose an option: " ;
    cin>> input ;
    return input;
}
void Menu::addAirport(){

    string id;
    cout << "Enter NAME (Ex: OPO): ";
    cin>>id;
    for(auto x:airports){
        if(x.getId() == id){
            cout<<"Already exist a airport with this name."<<endl;
            return;
        }
    }
    try{

       // Airport* newAirport = new Airport(id);
        Airport a1(id);
        airports.push_back(a1);
        cout << "Airport added!" << endl << endl;

        fstream file;
        file.open("flightInfo.txt", fstream::app);

        size_t pos;
        while ((pos = id.find(" ")) != std::string::npos) {
            id.replace(pos, 1, "_");
        }

        file << "addedAirport: " << id << endl;

        file.close();
    }
    catch (...) {  }
}
void Menu::viewAirports() {
    if(airports.empty()){
        cout<<"There is no airports in the system."<<endl;
    }
    else
        cout<<"this are the airports."<<endl;
        for(auto x:airports){
            cout<<"- "<<(x.getId())<<" -"<<endl;
        }

}
void Menu::updateAirport() {
   viewAirports();
   string id;
   cout<<"Insert an airport by his name."<<endl;
   cin>>id;
   for(auto x:airports){
       if(x.getId() ==id){
           cout<<"Insert the new name of this airport:"<<endl;
           string newid;
           cin>>newid;
           x.setId(newid);
           cout<<"The plane is updated";
           //need to update the file
       }
   }
}
void Menu::PlaneManagement() {}
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

void Menu::FlightManagement() {

}

void Menu::PassengersManagement() {

}

void Menu::CartManagement() {

}



void Menu::SearchFlightNumber() {

}

void Menu::SearchFlightOrigin() {

}

void Menu::BuyTicket() {

}
/*
void Menu::SearchFlightNumber() {
    unsigned int input;
    do {
        cout << "\nType 0 to return.\n";
        cout << "Please write the flight number: " << input << endl;

        if (input == 0) return;

        bool flightFound = false;
        for (auto f : planes.flight)
            if (f.num == input) {
                flightFound = true;
                cout << f.num << f.date << f.origin << f.destiny << f.dur << endl;
            }
        if (!flightFound) cout << "\n\nFlight not found!\n\n";

    } while (true);
}
/*
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
*/
