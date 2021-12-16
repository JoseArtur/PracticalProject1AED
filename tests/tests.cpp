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
    Plane a( "22A", "A", 10);
    a.addflight(&f1);
    a.addflight(&f1);
    a.removeflight(141);
    EXPECT_EQ(true, a.addflight(&f1));
}
TEST(test_3, addplane){
    vector<Flight> a;
    Plane b("22","B",20);
}