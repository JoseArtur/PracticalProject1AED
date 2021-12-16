//
// Created by josea on 14/12/2021.
//
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include "bst.h"
#include "carriage.h"
#include "Date.h"
#include "flight.h"
#include "luggage.h"
#include "Passenger.h"
#include "plane.h"
#include "planeService.h"
#include <fstream>

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    std::cout << "AED 2021/2022 - Aula Pratica 6" << std::endl;
    return RUN_ALL_TESTS();

}