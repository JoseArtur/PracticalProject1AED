//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H
#include <iostream>
#include <string>
#include <vector>
#include "/Flight.h"

using namespace std;


class Plane {
    string mat;
    string type;
    int cap;
    vector<Flight> flights;
public:
    Plane(string mat, string type, int cap);
    string getmat();
    string gettype();
    int getcap();
    void addflight(Flight &flight);
    void removeflight(Flight &flight);
};
#endif //PROJETO_PLANE_H
