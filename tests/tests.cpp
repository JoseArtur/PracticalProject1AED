//
// Created by josea on 16/12/2021.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "airport.h"
#include "bst.h"
#include "carriage.h"
#include "Date.h"
#include "flight.h"
#include "luggage.h"
#include "Passenger.h"
#include "plane.h"
#include "planeService.h"
#include <fstream>
#include "Menu.h"
using testing::Eq;

TEST(test_1, buildService){
    Date d1(26,1,2002);
    planeService s1("M", "jose", d1);
    EXPECT_EQ("M", s1.getType());
    EXPECT_EQ(2002, s1.getDate().getYear());
    EXPECT_EQ("jose", s1.getEmployee());
}
TEST(test_2, addPlane)
{
    Date t1(30,12,2019);
    Date t2(31,12,2019);
    Time time1(22,30);
    Time time(6,30);
    Airport a1("SLZ");
    Airport a2("LIS");
    Flight f1(141,t1,time1,t2,time,a1,a2);
    Flight f2(141,t1,time1,t2,time,a1,a2);
    Plane a( "22A", "A", 10);
    a.addflight(&f1);
    a.addflight(&f1);
    a.removeflight(141);
    EXPECT_EQ(true, a.addflight(&f1));
}
TEST(test_3, addplane){
    vector<Flight> a;
    Plane b("22","B",20);
    vector<Airport*> airports;
    Airport* newAirport = new Airport("OPO");
    airports.push_back(newAirport);
    return;
}
TEST(test_4, createSystem){
    /*
    cout<<endl<<"Testing 'create'"<<endl;
    ifstream f;
    f.open("flightInfo.txt");
    if(!f.is_open()) {cout<<"F"; return;}
    string line;
    string name;
    string mean;
    //BSB-ALE|D:22/12/2019-16:40|A:23/12/2019-06:30|F:141
    while (getline(f, line)){
        istringstream iline(line);
        getline(f,name,'-');
        getline(f,mean,'-');
        WordMean a(name,mean);
        words.insert(a);}
*/


}
TEST(test_5,carriage){
    Time t1(12,30);
    Carriage c1("Train",140,t1);
    Carriage c2("Bus",200,t1);
    Airport GRU("GRU");
    GRU.addCarriage(c1);
    GRU.addCarriage(c2);
    Carriage a = GRU.getCarriages().find(c1);
    //EXPECT_EQ(c1,(GRU.getCarriages().begin()));
}
TEST(test_6, menu){
    Menu menu;
    menu.DisplayMenu();
}
