
#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H

#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
#include "flight.h"
#include "planeService.h"
#include <list>
#include "Passenger.h"
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
    void setMat(string & mat);
    string getType();
    void setType(string & type);
    int getCap();
    void setCap(int & cap);
    void addflight(Flight flight);
    bool removeflight(int num);
    bool addpassenger(Flight &flight, Passenger &pass);
    void scheduleService(planeService service);
    void completeService();
    vector<Flight> getflights();
    void setflights(vector<Flight> &flights);
};
#endif //PROJETO_PLANE_H

