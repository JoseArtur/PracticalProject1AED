
#ifndef PROJETO_PLANE_H
#define PROJETO_PLANE_H

#include <iostream>
#include <string>
#include <vector>
#include "flight.h"
#include "planeService.h"
#include <list>
#include "Passenger.h"
#include <queue>
#include "planeService.h"

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
    bool addflight(Flight flight);
    bool removeflight(int num);
    bool addpassenger(Flight &flight, Passenger pass);
    void scheduleService(planeService service);
    void completeService();
    vector<Flight> getflights();
    void setflights(vector<Flight> flights);
    queue<planeService> getScheduled() const;
    queue<planeService> getCompleted() const;
    void sort(vector<Flight> sortflights);
};
#endif //PROJETO_PLANE_H

