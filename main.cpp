//
// Created by josea on 14/12/2021.
//
#include "gtest/gtest.h"
#include <iostream>
#include "tests/Menu.h"


int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    std::cout << "AED 2021/2022 - Projeto  Companhia Aérea" << std::endl;
    Menu menu;
    menu.DisplayMenu();
    //return RUN_ALL_TESTS();
}