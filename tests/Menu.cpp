//
// Created by gdrp7 on 15/12/2021.
//

#include "Menu.h"
#include <fstream>

void Menu::Control(){
    fstream planeFile, flightFile, passengerFile;
    planeFile.open("planeInfo.txt");
    flightFile.open("flightInfo.txt");
    passengerFile.open("info.txt");
    for(auto &plane : planes) {
        planeFile << "PlaneInfo: " << plane.getMat()<<" "<<plane.getType()
        << " "<<plane.getCap() << '\n';
        for (auto &f: plane.getflights()) {
            flightFile << "FlightInfo: " << f.getOrigin().getId()<< " - " <<  f.getDestiny().getId()
                        << " | D:" << f.getDateDeparture().getDate()<< " " << f.getTimeDeparture().getTime()
                        << " | A:" << f.getDateArrival().getDate()<< " " << f.getTimeArrival().getTime()
                        << " | F:" << f.getNum() << " P: " << plane.getMat()<< "  has been added!\n";
            for (auto &passenger : f.getPassengers())
            {
                passengerFile << passenger.getId()
                << " " << passenger.getName()
                << " Has Luggage? " << passenger.isLuggage()
                << " Auto Check-in? " << passenger.isAutoCheck() << '\n';}
        }
    }
    planeFile.close();
    flightFile.close();
    passengerFile.close();
    exit(0);
}

void Menu::DisplayMenu() {
    unsigned int input;
    do {
        cout << "\n*** AIRLINE MANAGEMENT SYSTEM *** \n"
                "\n1) - Show Options"
                "\n2) - Help"
                "\n3) - Use default"
                "\n0) - Exit"
                "\n\nChoose an option: ";
        cin >> input;
        cin.clear(); cin.ignore(1000, '\n');
        switch (input) {
            case 0: Control();
            case 1: DisplayOptions(); break;
            case 2: Help(); break;
            case 3: UseDefault();break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input);
}

void Menu::Help() {
    cout << "\nTo access the carriages info, you first need to select an airport in 'Airport Options'."
            "\nTo access the flights info, you first need to select a plane in 'Plane Options'."
            "\n -> You first need to select a flight in order to:"
            "\n    -> access the passengers info;"
            "\n    -> buy a ticket;"
            "\n    -> use the Auto Check-in feature."
            "\nTo complete or schedule a plane service, you first need to select a plane in 'Plane Options'.\n";
}

void Menu::DisplayOptions() {
    unsigned int input;
    do {
        cout << "\n*** AIRLINE MANAGEMENT SYSTEM *** \n"
                "\n1) - Airport options"
                "\n2) - Plane options"
                "\n0) - Back"
                "\n\nChoose an option: ";
        cin >> input;
        cin.clear(); cin.ignore(1000, '\n');
        switch (input) {
            case 0: break;
            case 1: AirportManagement(); break;
            case 2: PlaneManagement(); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input);
}

void Menu::AirportManagement(){
    unsigned int input;
    do{
        input = showAirportFunctions();
        switch(input){
            case 0: break;
            case 1: viewAirports(); break;
            case 2: addAirport(); break;
            case 3: selectAirport(); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input);
}

void Menu::UseDefault() {
    Airport a1("GRU"); airports.push_back(a1);
    Airport a2("LIS"); airports.push_back(a2);
    Airport a3("OPO"); airports.push_back(a3);
    Airport a4("MAD"); airports.push_back(a4);
    Time t1(16,30);
    Time t2(19,30);
    Carriage c1("BUS",140,t1);
    Carriage c2("TRAIN",400,t2);
    airports[0].addCarriage(c1);
    airports[0].addCarriage(c2);
    airports[1].addCarriage(Carriage("BUS",140,t2));
    Plane p1("141","B-777",300);
    Plane p2("151","A-380",450);
    Date d2(22,12,2020);
    Date d3(23,12,2020);
    Time t5(10,30);
    Time t6(11,30);
    Flight f1(122,d2,t5,d3,t6,a1,a2);
   // Flight( int num, Date dateDeparture,Time timeDeparture, Date dateArrival,Time timeArrival, Airport origin, Airport destiny);
    Date d4(20,12,2020);
    Time t4(10,30);
    Flight f2(144,d4,t4,d2,t4,a2,a3);
    planes.push_back(p1);
    planes.push_back(p2);
    planes[0].addflight(f2);
    planes[1].addflight(Flight(155, d2, t2, d3, t1, a3, a4));
    planes[0].addpassenger(f2, Passenger(133, "Andre", true, false));
}

//--AIRPORT
unsigned int Menu::showAirportFunctions(){
    cout << "\n*** AIRLINE MANAGEMENT SYSTEM *** \n"
            "\n1) - View airports"
            "\n2) - Create airport"
            "\n3) - Select airport"
            "\n0) - Back"
            "\n\nChoose an option: ";
    unsigned int input; cin >> input;
    return input;
}

void Menu::addAirport(){
    string id; cout << "Enter NAME (Ex: OPO): "; cin >> id;
    for(const auto& x:airports)
        if(x.getId() == id){
            cout << "\nAlready exist a airport with this name.\n";
            return;
        }
    try{
        Airport a1(id);
        airports.push_back(a1);
        cout << "\nAirport added!\n\n";
    }
    catch (...) {  }
}

void Menu::viewAirports() {
    cout << (airports.empty() ? "\nThere is no airports in the system.\n" : "\nThis are the airports:\n");
    for (const auto& x: airports) cout  << (x.getId()) << '\n';
}

void Menu::selectAirport() {
    viewAirports();
    string id; cout<<"\nInsert an airport by his name: "; cin>>id;
    for (const auto& x: airports) if (x.getId() == id) AirportMenu(x);
}

void Menu::AirportMenu(const Airport& x){
    unsigned int input;
    do{
        input = showSelectedAirportFunctions(x);
        switch(input){
            case 0: break;
            case 1: viewCarriages(x); break;
            case 2: addCarriage(x); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input);
}

unsigned int Menu::showSelectedAirportFunctions(const Airport& a1){ // WRONG
    cout << "\n*** "<<a1.getId()<<" Airport Function *** \n"
            "\n1) - View carriages"
            "\n2) - Create carriage"
            "\n0) - Back"
            "\n\nChoose an option: ";
    unsigned int input; cin >> input;
    return input;
}

void Menu::PlaneManagement(){
    unsigned int input;
    do{
        input = showPlaneFunctions();
        switch(input){
            case 0: break;
            case 1: viewPlanes(); break;
            case 2: addPlane(); break;
            case 3: selectPlane(); break;
            default:cout << "\n\nInvalid input!\n\n";
        }
    } while (input);
}

//--AIRPORT
unsigned int Menu::showPlaneFunctions(){
    cout << "\n*** Plane Function *** \n"
            "\n1) - View planes"
            "\n2) - Create plane"
            "\n3) - Select plane"
            "\n0) - Back"
            "\n\nChoose an option: ";
    unsigned int input; cin >> input;
    return input;
}

void Menu::addPlane(){

    string mat; cout << "Enter the id (Ex: 141): "; cin>>mat;
    string type; cout << "Enter TYPE (Ex: B-777): "; cin>>type;
    int cap; cout << "Enter Capacity (Ex: 300): "; cin>>cap;
    for (auto x: planes)
        if (x.getMat() == mat || x.getType() == type || x.getCap() == cap) {
            cout << "\nAlready exist this plane.\n";
            return;
        }
    try{
        Plane p1(mat,type,cap);
        planes.push_back(p1);
        cout << "\nThe Plane " <<p1.getType()<<" with license "<<p1.getMat()<<" and capacity of "<<p1.getCap()<<" passengers has been added!\n";
    }
    catch (...) {  }
}

void Menu::viewPlanes() {
    cout << (planes.empty() ? "\nThere is no planes in the system.\n" : "\nThis are the planes.\n");
    for (auto x: planes) cout  << (x.getMat()) << " " << x.getType() << " " << x.getCap() << "\n";
}

void Menu::viewCarriages(const Airport& a1) {
    BST<Carriage> c1 = a1.getCarriages();
    if (c1.isEmpty()) cout << "\nThere is no carriages in the system.\n";
    else {
        cout << "\nThis are the carriages:\n";
        for (auto a = c1.begin(); a != c1.end(); a++)
            cout << (*a).getCarriageType() << " | Distance: " << (*a).getDistance() << " Time: " << (*a).getTime().getTime() << "\n";}
}

void Menu::addCarriage(Airport a1) {
    BST<Carriage> c1 = a1.getCarriages();
    string type; cout << "Enter transport type (BUS/TRAIN): "; cin >> type;
    float distance; cout << "Enter distance: "; cin >> distance;
    int hour,minute;
    cout << "Enter hour: "; cin>>hour;
    cout << "Enter minute: "; cin>>minute;
    Time time(hour,minute);
    Carriage c2(type,distance,time);
    for (auto x = c1.begin(); x != c1.end(); x++)
        if ((*x) == c2) {
            cout << "\nThis carriage already exists.\n";
            return;
        }
    try{
        // Airport* newAirport = new Airport(id);
        a1.addCarriage(c2);
        cout << "\nThe Carriage " <<c2.getCarriageType()<<" with a distance of "<<c2.getDistance()<<" from the airport and that passes departs at "<<c2.getTime().getTime()<<"  has been added!\n";
    }
    catch (...) {  }
}

unsigned int Menu::showSelectedFlightFunctions(const Flight& f1) {
    cout << "\n*** "<<f1.getNum()<<" Flight Function *** \n"
            "\n1) - View passengers"
            "\n2) - Buy ticket"
            "\n3) - Perform Auto Check-in"
            "\n0) - Back"
            "\n\nChoose an option: ";
    unsigned int input; cin >> input;
    return input;
}

void Menu::selectPlane() {
    viewPlanes();
    string license; cout<<"\nInsert an plane by his license: "; cin >> license;
    for (auto x: planes) if (x.getMat() == license) PlaneMenu(x);
}

void Menu::PlaneMenu(Plane &p1) {
    unsigned int input;
    do{
        input = showSelectedPlaneFunctions(p1);
        switch(input){
            case 0: break;
            case 1: viewFlights(p1); break;
            case 2: addFlight(p1); break;
            case 3: selectFlight(p1); break;
            case 4: serviceMenu(p1); break;
            default:cout << "\n\nInvalid input!\n\n";
        }
    }while (input);
}

unsigned int Menu::showSelectedPlaneFunctions(Plane p1) {
    cout << "\n*** "<<p1.getMat()<<" Plane Function *** \n"
             "\n1) - View flights"
             "\n2) - Add flight"
             "\n3) - Select flight"
             "\n4) - Service options"
             "\n0) - Back"
             "\n\nChoose an option: ";
    unsigned int input; cin >> input;
    return input;
}

void Menu::viewFlights(Plane p1) {
    cout << (p1.getflights().empty() ? "\nThere is no flights in the system.\n" : "\nThis are the flights:\n");
    for(const auto& x:p1.getflights()){
        //    Flight( int num, Date dateDeparture,Time timeDeparture, Date dateArrival,Time timeArrival, Airport origin, Airport destiny);
        cout<<"Number: "<<(x.getNum())<<" -  Departure: "<<x.getOrigin().getId()<<" "<<x.getDateDeparture().getDate()
            <<" "<<x.getTimeDeparture().getTime()<<" - Arrival: "<<x.getDestiny().getId()<<" "
            <<x.getDateArrival().getDate()
            <<" "<<x.getTimeArrival().getTime()<<'\n';
    }
}

void Menu::addFlight(Plane &p1) {
    int num; cout << "Enter the Flight Num (Ex: 141) : "; cin>>num;
    string route; cout<<"Enter Origin and Destiny (Ex: OPO-LIS) : "; cin>>route;
    stringstream iss0(route);
    string origin,destiny;
    iss0>>origin;iss0.ignore(1,'-');
    iss0>>destiny;
    Airport a1(origin);
    Airport a2(destiny);
    string date,time1; cout << "Enter Date of Departure (Ex: 22/12/2020) : "; cin>>date;
    stringstream iss(date);
    int d,m,y,h,min;
    iss >> d;iss.ignore(1, '/');
    iss >> m;iss.ignore(1, '/');
    iss >> y;
    cout << "Enter hour of Departure : "; cin>>h;
    cout << "Enter minute of Departure : "; cin >> min;
    Date dDep(d,m,y);
    Time tDep(h,min);
    string date2,time2;
    cout << "Enter Date  of Arrival (Ex: 22/12/2020) : "; cin>>date2;
    int d1,m1,y1,h1,min1;
    stringstream iss2(date2);
    iss2 >> d1;iss2.ignore(1, '/');
    iss2 >> m1;iss2.ignore(1, '/');
    iss2 >> y1;
    cout << "Enter hour of Departure : "; cin>>h1;
    cout << "Enter minute of Departure : "; cin >> min1;
    Date dArrival(d1,m1,y1);
    Time tArrival(h1,min1);
    for(auto & x : p1.getflights()){
        if(x.getNum() == num){
            cout<<"\nThis flight already exists.\n";
            return;
        }
    }
    try{
        for(auto &p:planes)
            if(p.getMat() == p1.getMat()){
                p.addflight(Flight(num,dDep,tDep,dArrival,tArrival,origin,destiny));
                break;
            }
        p1.addflight(Flight(num,dDep,tDep,dArrival,tArrival,origin,destiny));
        // BSB-ALE | D:22/12/2019 16:40 | A:23/12/2019 06:30 | F:141
        cout << origin<<destiny<<" | D:" <<dDep.getDate()<<" "<<tDep.getTime()
             <<" | A:"<<dArrival.getDate()<<" "<<tArrival.getTime()<<" | F:"<<num<<"  has been added!\n";
    }
    catch (...) {  }
}

void Menu::selectFlight(Plane p1) {
    viewFlights(p1);
    int flightN; cout<<"\nInsert an flight by his number.\n"; cin>>flightN;
    for (auto &x: p1.getflights())
        if (x.getNum() == flightN)
            FlightMenu(x, p1.getCap());
}

void Menu::FlightMenu(Flight &f1, int planeCapacity) {
    unsigned int input;
    do{
        input = showSelectedFlightFunctions(f1);
        switch(input){
            case 0: break;
            case 1: viewPassengers(f1); break;
            case 2: BuyTicket(f1, planeCapacity); break;
            case 3: autoCheckIn(f1); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while(input);
}

void Menu::BuyTicket(Flight &f1, int planeCapacity){//    Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);
    cin.clear();
    cin.ignore(1000, '\n');
    if (f1.getPassengers().size() == planeCapacity) {
        cout << "\nThis plane is already full!\n"; return;
    }
    int n;
    cout << "\nHow many tickets do you wish to buy?\n";
    cin >> n;

    if ((n + f1.getTotalPassengers()) > planeCapacity)
        cout << "\nThere aren't that many places available. Number of places available: "
             << planeCapacity - f1.getTotalPassengers() << '\n';
    else
        while (n) {
            cin.clear();
            cin.ignore(1000, '\n');
            int id;
            cout << "\nIdentity: ";
            cin >> id;
            cin.clear();
            cin.ignore(1000, '\n');
            string name;
            cout << "\nName: \n";
            cin >> name;
            cin.clear();
            cin.ignore(1000, '\n');
            char b;
            cout << "\nBaggage? (Y/N): ";
            cin >> b;
            cin.clear();
            cin.ignore(1000, '\n');
            char a = 0;
            if (b == 'Y') {
                cout << "\nDo you wish to use the Auto Check-in feature? (Y/N): "; cin >> a;
                cin.clear(); cin.ignore(1000, '\n');
            }
            Passenger p1(id, name, b == 'Y', a == 'Y');
            f1.addpassenger(p1);
            //planes[0].addpassenger(f2, Passenger(133, "Andre", true, false));

            n--;
        }
}

void Menu::viewPassengers(Flight f1) {
    cout << (f1.getPassengers().empty() ? "\nThere is no passengers in the system.\n" : "This are the passengers:\n");
    for(const auto& x : f1.getPassengers()){
//        Passenger(int id, string name, bool hasLuggage);   cout<<"Number: "<<(x->getNum())<<" -  Departure:"<<x->getOrigin().getId()<<" "<<x->getDateDeparture().getDate()
        cout << "ID: " << x.getId() << " - Name: " << x.getName()
        << " Luggage: " << x.isLuggage() << " Auto Check-in: " << x.isAutoCheck()
        << " F: " << f1.getNum();
    }
}

void Menu::scheduleService(Plane &p1) {
    string t; cout << "Please choose the service type (maintenance/cleaning): "; cin >> t;
    string e; cout << "Please write the employee's name: "; cin >> e;
    string dateString; cout << "Please enter the service date (Ex: 22/12/2020): "; cin >> dateString;
    stringstream iss(dateString);
    int d,m,y;
    iss >> d; iss.ignore(1, '/');
    iss >> m; iss.ignore(1, '/');
    iss >> y;
    Date date(d,m,y);
    planeService pS(t, e, date);
    p1.scheduleService(pS);
}

void Menu::completeService(Plane &p1) {
    p1.completeService();
}

void Menu::autoCheckIn(Flight f1) {
    unsigned int count = 0;
    for (const auto& p : f1.getPassengers()) if (p.isAutoCheck()) count++;
    for (auto c : cart)
        if (c.getMaxCapacity() >= count && c.isEmpty()) {
            addLuggage(c, count);
            return;
        }
    cout << "\nThere is no cart available\n";
}

void Menu::addLuggage(Cart &c1, unsigned int number) {
    while (number) {
        unsigned int weight; cout << "\nHow much does the luggage weights? "; cin >> weight;
        c1.addLuggage(Luggage(weight));
        number--;
    }
}

void Menu::viewAllServices(const Plane& p1) {
    auto temp = p1.getScheduled();
    cout << "\nScheduled services:\n";
    while (!temp.empty()) {
        cout << temp.front().getType() << " " << temp.front().getEmployee() << " " << temp.front().getDate().getDate() << "\n";
        temp.pop();
    }
    temp = p1.getCompleted();
    cout << "\nScheduled services:\n";
    while (!temp.empty()) {
        cout << temp.front().getType() << " " << temp.front().getEmployee() << " " << temp.front().getDate().getDate() << "\n";
        temp.pop();
    }
}

void Menu::serviceMenu(Plane &p1) {
    unsigned int input;
    do{
        input = showServiceOptions();
        switch(input){
            case 0: break;
            case 1: viewAllServices(p1); break;
            case 2: scheduleService(p1); break;
            case 3: completeService(p1); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while(input);
}

unsigned int Menu::showServiceOptions() {
    cout << "\n *** Service Options *** \n"
             "\n 1) - View all services"
             "\n 2) - Schedule a service"
             "\n 3) - Complete a service"
             "\n 0) - Back"
             "\n\n Choose an option: ";
    unsigned int input; cin >> input;
    return input;
}