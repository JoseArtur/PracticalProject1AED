//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H
#include <iostream>
#include <string>
#include <vector>
#include "../flight.h"

using namespace std;


class plane {
    string mat;
    string type;
    int cap;
    vector<flight> flights;
public:
    plane(string mat, string type, int cap);
    string getmat();
    string gettype();
    int getcap();
    void addflight(flight &flight);
    void removeflight(flight &flight);
};
#endif //PROJETO_PLANE_H
