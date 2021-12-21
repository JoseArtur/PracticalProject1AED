//
// Created by gdrp7 on 15/12/2021.
//

#include "Menu.h"
#include <fstream>
void Menu::Control(){
    std::ofstream ofs;
    ofs.open("planeInfo.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    ofs.open("flightInfo.txt", std::ofstream::out | std::ofstream::trunc);
    ofs.close();
    fstream file,file2;
    for(auto &plane:planes) {
        //file<<plane
        file.open("planeInfo.txt" ,fstream::app);
        file << "PlaneInfo: " << plane.getMat()<<" "<<plane.getType()<< " "<<plane.getCap() << endl;
        file.close();
        vector<Flight*> a = plane.getflights();
        for(auto &flight:a){
            //agora to em flight
        file2.open("flightInfo.txt",fstream::app);
        file2 << "FlightInfo: " << flight->getOrigin().getId() << flight->getDestiny().getId() << " | D:" << flight->getDateDeparture().getDate() << " "
             << flight->getTimeDeparture().getTime()
             << " | A:" << flight->getDateArrival().getDate() << " " << flight->getTimeArrival().getTime() << " | F:"
             << flight->getNum() <<"P: "<<plane.getMat() <<"  has been added!" << endl;
        file2.close();
    }
    }
    cout<<"test";
    int aa;
    cin>>aa;
    exit(0);
}

void Menu::DisplayMenu() {
    unsigned int input;
    do {
        cout << " ____________________________________ " << endl;
        cout << "| *** AIRLINE MANAGEMENT SYSTEM  *** |" << endl;
        cout << "|       -- Select a option -         |" << endl;
        cout << "| 1) - Admin Options                 |" << endl;
        cout << "| 2) - User  options                 |" << endl;
        cout << "| 0) - Exit                          |" << endl;
        cout << "|____________________________________|" << endl;
        cout << "Choose an option: " ;
        cin>> input ;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (input) {
            case 0: Control();
            case 1: DisplayAdminMenu(); break;
            case 2: DisplayUserMenu(); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input !=0);
}

void Menu::DisplayAdminMenu() {
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
        cout << "| 7) - Use defaults                  |" << endl;
        cout << "| 0) - Exit                          |" << endl;
        cout << "|____________________________________|" << endl;

        cout << "Choose an option: " ;
        cin>> input ;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (input) {
            case 0: break;
            case 1: AirportManagement(); break;
            case 2: PlaneManagement(); break;
            case 3: FlightManagement(); break;
            case 4: PassengersManagement(); break;
            case 5: CartManagement(); break;
            //case 6
            case 7:UseDefault();break;
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
        case 3: selectAirport();break;
        case 4: removeAirport();break;

        default:cout << "\n\nInvalid input!\n\n";
    }
}while(input!=0);
cout<<"/n";
}
void Menu::UseDefault() {
    Airport a1("GRU");
    Airport a2("LIS");
    Airport a3("OPO");
    Airport a4("MAD");
    airports.push_back(a1);
    airports.push_back(a2);
    airports.push_back(a3);
    airports.push_back(a4);
    Time t1(16,30);
    Time t2(19,30);
    Carriage c1("BUS",140,t1);
    Carriage c2("TRAIN",400,t2);
    a1.addCarriage(c1);
    a1.addCarriage(c2);
    a2.addCarriage(Carriage("BUS",140,t2));
    Plane  p1("141","B-777",300);
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
    bool a;
   /* for(auto &plane:planes){
        if(plane.getMat() ==p1.getMat()){
            plane.addflight(&f1);
            cout<<"a";
        }
    }*/

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
    cout << " |3 - select airport-------------------|" << endl;
    cout << " |4 - remove airport-------------------|" << endl;
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
       /* fstream file;
        file.open("flightInfo.txt", fstream::app);
        file << "addedAirport: " << id << endl;
        file.close();*/
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
void Menu::selectAirport() {
    viewAirports();
    string id;
    cout<<"Insert an airport by his name."<<endl;
    cin>>id;
    for(auto x:airports){
        if(x.getId() ==id){
           AirportMenu(&x);
        }
    }

}
void Menu::AirportMenu(Airport *x){
    unsigned int input;
    do{
        input = showSelectedAirportFunctions(x);
        switch(input){
            case 0:break;
            case 1:
                viewCarriages(x);break;
            case 2: addCarriage(x); break;
            case 3: selectCarriage(x);break;
            case 4: removeCarriage(x);break;

            default:cout << "\n\nInvalid input!\n\n";
        }
    }while(input!=0);
    cout<<"/n";
}
unsigned int Menu::showSelectedAirportFunctions(Airport *a1){

    int input;
    cout << " _______________________________________ " << endl;
    cout << " |---"<<a1->getId()<<" Airport Function --------| " << endl;
    cout << " |_____________________________________|" << endl;
    cout << " |---- -- Select a option :------------ |" << endl;
    cout << " |1 - View carriages -------------------|" << endl;
    cout << " |2 - add carriage----------------------|" << endl;
    cout << " |3 - select carriage-------------------|" << endl;
    cout << " |4 - remove carriage-------------------|" << endl;
    cout << " |0 - Back-----------------------------|" << endl << endl;
    cout << " |Option: ";
    cout << "Choose an option: " ;
    cin>> input ;
    return input;
}
void Menu::updateAirport(Airport *a1) {

           cout<<"Insert the new name of this airport:"<<endl;
           string newid;
           cin>>newid;
           a1->setId(newid);
           cout<<"The plane is updated";
           //need to update the file
       }


void Menu::PlaneManagement(){
    unsigned int input;
    do{
        input = showPlaneFunctions();
        switch(input){
            case 0:break;
            case 1:
                viewPlanes();
                break;
            case 2: addPlane(); break;
            case 4: removePlane();break;
            case 5: selectPlane();break;

            default:cout << "\n\nInvalid input!\n\n";
        }
    }while(input!=0);
    cout<<"/n";
}
//--AIRPORT
unsigned int Menu::showPlaneFunctions(){

    int input;
    cout << " _______________________________________ " << endl;
    cout << " |----------- Plane Function --------| " << endl;
    cout << " |____________                _________|" << endl;
    cout << " |------------Select a option ------- |" << endl;
    cout << " |1 - View planes -------------------|" << endl;
    cout << " |2 - create plane-------------------|" << endl;
    cout << " |3 - update plane-------------------|" << endl;
    cout << " |4 - remove a plane-------------------|" << endl;
    cout << " |5 - select a  plane-------------------|" << endl;
    cout << " |0 - Back-----------------------------|" << endl << endl;
    cout << " |Option: ";
    cout << "Choose an option: " ;
    cin>> input ;
    return input;
}
void Menu::addPlane(){

    string mat;
    cout << "Enter the id (Ex: 141): ";
    cin>>mat;
    string type;
    cout << "Enter TYPE (Ex: B-777): ";
    cin>>type;
    int cap;
    cout << "Enter Capacity (Ex: 300): ";
    cin>>cap;
    for(auto x:planes){
        if(x.getMat() == mat || x.getType()==type ||x.getCap()==cap){
            cout<<"Already exist this plane ."<<endl;
            return;
        }
    }
    try{
        Plane p1(mat,type,cap);
        planes.push_back(p1);
        cout << "the Plane" <<p1.getType()<<"with license "<<p1.getMat()<<" and capacity of "<<p1.getCap()<<" passengers has been added!" << endl;
      /*  fstream file;
        file.open("planeInfo.txt", fstream::app);
        size_t pos;
        while ((pos = mat.find(" ")) != std::string::npos) {
            mat.replace(pos, 1, "_");
        }
        while ((pos = type.find(" ")) != std::string::npos) {
            mat.replace(pos, 1, "_");
        }
        while ((pos = to_string(cap).find(" ")) != std::string::npos) {
            mat.replace(pos, 1, "_");
        }
        file << "PlaneInfo: " << type<<" "<<mat<< " "<<cap << endl;
        file.close(); */
    }
    catch (...) {  }
}
void Menu::viewPlanes() {
    if(planes.empty()){
        cout<<"There is no planes in the system."<<endl;
    }
    else
        cout<<"this are the planes."<<endl;
    for(auto x:planes){
        cout<<"- "<<(x.getMat())<<" -"<<x.getType()<<" "<<x.getCap()<<endl;
    }

}
void Menu::updatePlane(Plane *p1) {
  // TO DO
            cout<<"Insert the new name of this airport:"<<endl;
            string newid;
            cin>>newid;
            p1->setMat(newid);
            cout<<"The plane is updated";
            //need to update the file
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

void Menu::FlightManagement() {

}

void Menu::PassengersManagement() {

}

void Menu::CartManagement() {

}




void Menu::SearchFlightOrigin() {

}



void Menu::viewCarriages(Airport *a1) {
    BST<Carriage> c1 = a1->getCarriages();
    if(c1.isEmpty()){
        cout<<"There is no carriages in the system."<<endl;
    }
    else
    {cout<<"this are the planes."<<endl;
        iteratorBST<Carriage> a =c1.begin();
        while(a != c1.end()){
            cout<<(*a).getCarriageType()<<endl;
            cout<<(*a).getDistance()<<endl;
            cout<<((*a).getTime().getTime())<<endl;
            a++;

        }
    }}


void Menu::addCarriage(Airport *a1) {
    BST<Carriage> c1 = a1->getCarriages();
    string type;
    cout << "Enter the id (Ex: 141): ";
    cin>>type;
    float distance;
    cout << "Enter TYPE (Ex: B-777): ";
    cin>>distance;
    int hour,minute;
    cout << "Enter Capacity (Ex: 300): ";
    cin>>hour;
    cout << "Enter Capacity (Ex: 300): ";
    cin>>minute;
    Time time(hour,minute);
    for(auto x = c1.begin();x!=c1.end();x++){
        if((*x).getCarriageType() == type || (*x).getDistance() == distance  ||(*x).getTime() == time ){
            cout<<"Already exist this carriage ."<<endl;
            return;
        }
    }
    try{
        // Airport* newAirport = new Airport(id);
        Carriage c2(type,distance,time);
        a1->addCarriage(c2);
        cout << "the Carriage" <<c2.getCarriageType()<<"with  "<<c2.getDistance()<<" and time of "<<c2.getTime().getTime()<<"  has been added!" << endl;
      /*  fstream file;
        file.open("planeInfo.txt", fstream::app);
        file << "PlaneInfo: " << type<<" "<<distance<< " "<<time.getTime() << endl;
        file.close(); */
    }
    catch (...) {  }
}

void Menu::removeCarriage(Airport *a1) {

}

void Menu::removeAirport() {

}

void Menu::selectCarriage(Airport *x) {

}
/*
void Menu::FlightMenu(Flight *f1) {
    unsigned int input;
    do{
        input = showSelectedFlightFunctions(f1);
        switch(input){
            case 0:break;
            case 1:
                viewFlights(f1);break;
            case 2: addCarriage(x); break;
            case 3: removeCarriage(x);break;
            case 4: selectCarriage(x);break;
            default:cout << "\n\nInvalid input!\n\n";
        }
    }while(input!=0);
    cout<<"/n";
}
*/
void Menu::SearchFlightNumber() {
    unsigned int input;
    vector<Flight*> flights;
    try{
        cout << "\nType 0 to return.\n";
        cout << "Please write the flight number: " << endl;
        cin>> input;
        bool flightFound = false;
        for (auto p : planes)
        {flights =p.getflights();
            for(auto flight:flights){
            if(flight->getNum() == input){
                FlightMenu(flight);
            }
            }
        }
        if (!flightFound) cout << "\n\nFlight not found!\n\n";

    }
    catch (...) {}}

unsigned int Menu::showSelectedFlightFunctions(Flight *f1) {

    int input;
    cout << " _______________________________________ " << endl;
    cout << " |---"<<f1->getNum()<<" Flight Function --------| " << endl;
    cout << " |_____________________________________|" << endl;
    cout << " |---- -- Select a option :------------ |" << endl;
    cout << " |1 - View Passengers -------------------|" << endl;
    cout << " |2 - Buy Ticket-------------------|" << endl;
    cout << " |3 - select passenger-------------------|" << endl;
    cout << " |4 - remove passenger-------------------|" << endl;
    cout << " |5 - Update flight-------------------|" << endl;
    cout << " |0 - Back-----------------------------|" << endl << endl;
    cout << " |Option: ";
    cout << "Choose an option: " ;
    cin>> input ;
    return input;
}
void Menu::selectPlane() {
    viewPlanes();
    string license;
    cout<<"Insert an plane by his license."<<endl;
    cin>>license;
    for(auto x:planes){
        if(x.getMat() ==license){
            PlaneMenu(&x);
        }
    }
}

void Menu::PlaneMenu(Plane *p1) {
    unsigned int input;
    do{
        input = showSelectedPlaneFunctions(p1);
        switch(input){
            case 0:break;
            case 1: viewFlights(p1);break;
            case 2: addFlight(p1); break;
            case 3: selectFlight(p1);break;
            case 4: removeFlight(p1);break;
            case 5: updatePlane(p1);break;
            default:cout << "\n\nInvalid input!\n\n";
        }
    }while(input!=0);
    cout<<"/n";
}


unsigned int Menu::showSelectedPlaneFunctions(Plane *p1) {

    int input;
    cout << " _______________________________________ " << endl;
    cout << " |---"<<p1->getMat()<<" Flight Function --------| " << endl;
    cout << " |_____________________________________|" << endl;
    cout << " |---- -- Select a option :------------ |" << endl;
    cout << " |1 - View Flights -------------------|" << endl;
    cout << " |2 - Add Flight-------------------|" << endl;
    cout << " |3 - Select Flight-------------------|" << endl;
    cout << " |4 - Remove Flight-------------------|" << endl;
    cout << " |5 - Update Plane-------------------|" << endl;
    cout << " |0 - Back-----------------------------|" << endl << endl;
    cout << " |Option: ";
    cout << "Choose an option: " ;
    cin>> input ;
    return input;
}

void Menu::viewFlights(Plane *p1) {
    if(p1->getflights().empty()){
        cout<<"There is no flights in the system."<<endl;
    }
    else
        cout<<"this are the flights:"<<endl;
    for(auto x:p1->getflights()){
        //    Flight( int num, Date dateDeparture,Time timeDeparture, Date dateArrival,Time timeArrival, Airport origin, Airport destiny);
        cout<<"Number: "<<(x->getNum())<<" -  Departure:"<<x->getOrigin().getId()<<" "<<x->getDateDeparture().getDate()
        <<" "<<x->getTimeDeparture().getTime()<<" "<<x->getDestiny().getId()<<" "
                <<x->getDateArrival().getDate()
                <<" "<<x->getTimeArrival().getTime()<<endl;
    }
}

void Menu::addFlight(Plane *p1) {
    vector<Flight*> flights =p1->getflights();
    int num;
    cout << "Enter the Flight Num (Ex: 141): "<<endl;
    cin>>num;

    string route;
    cout<<"Enter Origin and Destiny (Ex: OPO-LIS): "<<endl;
    cin>>route;
    stringstream iss0(route);
    string origin,destiny;
    iss0>>origin;iss0.ignore(1,'-');
    iss0>>destiny;
    Airport a1(origin);
    Airport a2(destiny);
    string date,time1;
    cout << "Enter Date of Departure (Ex: 22/12/2020): "<<endl;
    cin>>date;
    stringstream iss(date);
    int d,m,y,h,min;
    iss >> d;iss.ignore(1, '/');
    iss >> m;iss.ignore(1, '/');
    iss >> y;
    cout << "Enter hour of Departure : "<<endl;
    cin>>h;
    cout << "Enter minute of Departure : "<<endl;
    cin >> min;
    Date dDep(d,m,y);
    Time tDep(h,min);
    string date2,time2;
    cout << "Enter Date  of Arrival (Ex: 22/12/2020): "<<endl;
    cin>>date2;
    int d1,m1,y1,h1,min1;
    stringstream iss2(date2);
    iss2 >> d1;iss2.ignore(1, '/');
    iss2 >> m1;iss2.ignore(1, '/');
    iss2 >> y1;
    cout << "Enter hour of Departure : "<<endl;
    cin>>h1;
    cout << "Enter minute of Departure : "<<endl;
    cin >> min1;
    Date dArrival(d1,m1,y1);
    Time tArrival(h1,min1);
    for(auto x = flights.begin();x!=flights.end();x++){
        if((*x)->getNum() == num){
            cout<<"Already exist this flight ."<<endl;
            return;
        }
    }
    try{
        Flight f2(num,dDep,tDep,dArrival,tArrival,origin,destiny);
        for(auto &p:planes){
            if(p.getMat() == p1->getMat()){
                p.addflight(&f2);
            }
        }
        p1->addflight(&f2);
        // BSB-ALE | D:22/12/2019 16:40 | A:23/12/2019 06:30 | F:141
        cout << origin<<destiny<<" | D:" <<f2.getDateDeparture().getDate()<<" "<<f2.getTimeDeparture().getTime()
        <<" | A:"<<f2.getDateArrival().getDate()<<" "<<f2.getTimeArrival().getTime()<<" | F:"<<f2.getNum()<<"  has been added!" << endl;
        fstream file;
        file.open("flightInfo.txt", fstream::app);
        file << "FlightInfo: " <<  origin<<destiny<<" | D:" <<f2.getDateDeparture().getDate()<<" "<<f2.getTimeDeparture().getTime()
                               <<" | A:"<<f2.getDateArrival().getDate()<<" "<<f2.getTimeArrival().getTime()<<" | F:"<<f2.getNum()<<"  has been added!" << endl;
        file.close();
    }
    catch (...) {  }
}
void Menu::removeFlight(Plane *p1) {
    viewFlights(p1);
    int num;
    cout<<"Which flight do you want to remove? "<<endl;
    cin>>num;
    p1->removeflight(num);
}



void Menu::selectFlight(Plane *p1) {
    viewFlights(p1);
    int flightN;
    cout<<"Insert an flight by his number."<<endl;
    cin>>flightN;
    for(auto &x:p1->getflights()){
        if(x->getNum() == flightN){
            FlightMenu(x);
        }
    }
}

void Menu::removePlane() {
    string mat;
    cout<<"Insert an plance by his license: "<<endl;
    for(auto it = planes.begin();it!=planes.end();){
        if((*it).getMat() == mat){
            it = planes.erase(it);
            cout<<"The selected plane has been removed"<<endl;
            return;
        }
        else it++;
    }
    cout<< "No plane has been removed";
}

void Menu::FlightMenu(Flight *f1) {
    unsigned int input;
    do{
        input = showSelectedFlightFunctions(f1);
        switch(input){
            case 0:break;
            case 1: viewPassengers(f1);break;
            case 2: BuyTicket(f1); break;
            case 3: selectPassenger(f1);break;
            case 4: removePassenger(f1);break;
            case 5: updateFlight(f1);break;
            default:cout << "\n\nInvalid input!\n\n";
        }
    }while(input!=0);
    cout<<"/n";
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
void Menu::DisplayUserMenu() {
    unsigned int input;
    do {
        cout << " ____________________________________ " << endl;
        cout << "| *** AIRLINE            SYSTEM  *** |" << endl;
        cout << "|       -- Select a option -         |" << endl;
        cout << "| 1) - Buy ticket                    |" << endl;
        cout << "| 2) - Select passanger              |" << endl;
        cout << "| 7) - Use defaults                  |" << endl;
        cout << "| 0) - Exit                          |" << endl;
        cout << "|____________________________________|" << endl;

        cout << "Choose an option: " ;
        cin>> input ;
        cin.clear();
        cin.ignore(1000, '\n');

        switch (input) {
            case 0: break;
          //  case 1: selectFlight(); break;
          //  case 2: selectPassenger(); break;
            default: cout << "\n\nInvalid input!\n\n";
        }
    } while (input !=0);
}/*
void Menu::BuyTicket(Flight *f1){//    Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);
        int Fnum;
        cout<<"Welcome to the buy system ?:";



        for(auto plane:planes) {
        for(auto flight:plane.getflights()){
            if(flight->getNum()==Fnum) {
                string name,resp1,resp2;
                bool ticket,bagage,group;
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Identity: "<<endl;
                cin >> id;
                cout << "Name: "<<endl;
                cin>>name;
                cout<<"Are you in a group ?: "<<endl;
                cin>>resp1;
                if(resp1 =="N")
                {
                    cout << "Would you like to use the automatic luggage check-in ?(Y or N): ";
                cin>>resp2;
                if(resp2 == "Y") {
                    bool bagage = true;
                    Passenger p1(id,name,ticket,bagage,group);
                    flight->addpassenger(p1);
                    cout<<"Congrats, you know have a flight reservation.";
                    fstream file;
                    file.open("info.txt", fstream::app);
                    size_t pos;
                    while ((pos = name.find(" ")) != std::string::npos) {
                        name.replace(pos, 1, "_");
                    }
                    file << "addClient " << id << " " << name << " " << ticket <<bagage<<group<< endl;
                    file.close();
                    return;
                }
                }
            }
        }
        }



}*/
void Menu::BuyTicket(Flight *f1){//    Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);
    int Fnum;
    cout<<"Welcome to the buy system ?:";
    int id;
    string name,resp1,resp2;
    bool ticket,bagage,group;
    //TO DO : TIRAR GROUP E TICKET.
    int n ;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "\nHow many tickets do you wish to buy? "<<endl;
    cin >>  n;
    group = (n != 1);
    while (n) {
        int id;
        cout << "\nIdentity: ";
        cin >> id;
        string name;
        cout << "\nName: "<<endl;
        getline(cin,name);
         char b;
        cout << "\nBaggage? (Y/N): ";
        cin >> b;
        Passenger p1(id, name, true, b == 'Y', group);
        f1->addpassenger(p1);
                        //FILE
                        fstream file;
                        file.open("info.txt", fstream::app);
                        file << id << " " << name << " " << ticket <<bagage<<group<< endl;
                        file.close();
                        n--;
                    }
            }





void Menu::selectPassenger(Flight *f1) {
    viewPassengers(f1);
    int id;
    cout<<"Insert an passenger by his id."<<endl;
    cin>>id;
    for(auto &x:f1->getPassengers()){
        if(x.getId() == id){
            //PassengerMenu(x);
        }
    }
}

void Menu::viewPassengers(Flight *f1) {
    if(f1->getPassengers().empty()){
        cout<<"There is no passengers in the system."<<endl;
    }
    else
        cout<<"this are the passengers:"<<endl;
    for(auto x:f1->getPassengers()){
        //      Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);   cout<<"Number: "<<(x->getNum())<<" -  Departure:"<<x->getOrigin().getId()<<" "<<x->getDateDeparture().getDate()
        cout<<"ID: "<<(x.getId())<<" -  Name:"<<x.getName()<<"  Ticket:"<<x.isTicket()<<" Luggage:"<<x.isLuggage()<<"  Group:"<<x.isGroup()<<"  F:"<<f1->getNum();
    }
}
void Menu::updateFlight(Flight *f1)
{// Flight( int num, Date dateDeparture,Time timeDeparture, Date dateArrival,Time timeArrival, Airport origin, Airport destiny);
    string op;
   cout<<" What you like to update?";
   //if(op ="")
}

