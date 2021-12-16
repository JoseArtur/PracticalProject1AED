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
    planeService s1("M", "alberto", d1);
    EXPECT_EQ("M", s1.getType());
    EXPECT_EQ(2002, s1.getDate().getYear());
    EXPECT_EQ("jose", s1.getEmployee());
}
TEST(test_2, PlaneDelete) //just to show the throw
{
    list<Flight> b;
    Plane a( "22A", "A", 10);
    EXPECT_EQ(false, a.removeflight(4));

}