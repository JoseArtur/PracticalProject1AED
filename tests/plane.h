//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H

#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
#include "Flight.h"
=======
#include <queue>
#include "Flight.h"
#include "planeService.h"
>>>>>>> origin/b3

using namespace std;

class Plane {
    string mat;
    string type;
    int cap;
    vector<Flight> flights;
    queue<planeService> scheduled;
    queue<planeService> completed;
public:
    Plane(string mat, string type, int cap);
    string getMat();
    string getType();
    int getCap();
    void addflight(Flight &flight);
    void removeflight(Flight &flight);
    void scheduleService(planeService service);
    void completeService();
};

#endif //PROJETO_PLANE_H
