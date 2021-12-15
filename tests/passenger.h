//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PASSENGER_H
#define PROJETO_PASSENGER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class passenger {
    bool bagage;
    bool group;
public:
    passenger(bool bagage, bool group);
    bool getbagage();
    bool getgroup();
};
#endif //PROJETO_PASSENGER_H
