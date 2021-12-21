#include "plane.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Plane::Plane(string mat, string type, int cap) {
    this->mat = mat;
    this->type = type;
    this->cap = cap;
}

string Plane::getMat(){
    return mat;
}

void Plane::setMat(string & mat){
    this->mat = mat;
}

string Plane::getType(){
    return type;
}

void Plane::setType(string & type){
    this->type = type;
}

int Plane::getCap(){
    return cap;
}

void Plane::setCap(int & cap){
    this->cap=cap;
}

bool Plane::addflight(Flight flight) {
    int count = -1;
    for(auto x:flights){
        if(x == flight) return false;
    }
    flights.push_back(flight);
    return true;
}

bool Plane::removeflight(int num) {
    for(int i = 0; i < flights.size();i++){
        if(flights[i].getNum() == num){
            flights.erase(flights.begin()+i);
            return true;
        }
    }
    return false;
}

bool Plane::addpassenger(Flight &flight, Passenger pass) {
    int count = -1;
    for(auto & i : flights) {
        if(i.getNum() == flight.getNum()){
            for(int j = 0; j < i.getPassengers().size();j++){
                vector<Passenger> a= i.getPassengers();
                if(a[j].getId() == pass.getId()){
                    count++;
                }
            }
            if ( this->cap - i.getPassengers().size() > 0 && count == -1) {
                 i.getPassengers().push_back(pass);
                return true;
            }
        }
    }
    return false;
}


void Plane::scheduleService(planeService service) {
    this->scheduled.push(service);
}

void Plane::completeService() {
    this->completed.push(scheduled.front());
    this->scheduled.pop();
}


vector<Flight> Plane::getflights(){
    return this->flights;
}

void Plane::setflights(vector<Flight> flights) {
    this->flights = flights;
}

queue<planeService> Plane::getScheduled() const {
    return this->scheduled;
}

queue<planeService> Plane::getCompleted() const {
    return this->completed;
}
void Plane::sort(vector<Flight> sortflights){
    for(int i = 0;i<sortflights.size()-1;i++){
        for(int j = i+1;j<sortflights.size();j++){
            if(sortflights[i].getNum()>sortflights[j].getNum()){
                Flight swap = sortflights[i];
                sortflights[i] = sortflights[j];
                sortflights[j] = swap;
            }
        }
    }
}