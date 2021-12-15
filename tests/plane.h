//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H
#include <iostream>
#include <string>
#include <vector>
#include "Flight.h"
#include "planeService.h"
#include <list>
#include "passenger.h"

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
    string getmat();
    void setmat(string & mat);
    string gettype();
    void settype(string & type);
    int getcap();
    void setcap(int & cap);
    void addflight(Flight &flight);
    void removeflight(Flight &flight);
    bool addpassenger(Flight &flight, passenger &pass);
    void scheduleService(planeService service);
    void completeService();
    vector<Flight> getflights();
    void setflights(vector<Flight> &flights);
};
#endif //PROJETO_PLANE_H
