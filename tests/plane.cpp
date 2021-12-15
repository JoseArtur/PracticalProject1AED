//
// Created by jccmg on 04/12/2021.
//

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

string Plane::getmat(){
    return mat;
}

void Plane::setmat(string & mat){
    this->mat = mat;
}

string Plane::gettype(){
    return type;
}

void Plane::settype(string & type){
    this->type = type;
}

int Plane::getcap(){
    return cap;
}

void Plane::setcap(int & cap){
    this->cap=cap;
}

void Plane::addflight(Flight &flight) {
    int count = -1;
    for(int i = 0; i < flights.size();i++) {
        if(flights[i].getnum()== flight.getnum()){
            count ++;
        }
    }
    if (count == -1) flights.push_back(flight);
}

void Plane::removeflight(Flight &flight) {
    for(int i = 0; i < flights.size();i++){
        if(flights[i].getnum() == flight.getnum()){
            flights.erase(flights.begin()+i);
        }
    }
}

bool Flight::addpassenger(Flight &flight, passenger &pass) {
    int count = -1;
    for(int i = 0; i < passengers.size();i++) {
        if(flights[i].getnum() == flight.getnum()){
            for(int j = 0; j < flights[i].getpassangers().size();j++){
                if(flights[i].getpassanger()[j].getid() == pass.getid()){
                    count++;
                }
            }
            if ( this->cap - flights[i].getpassengers().size() > 0 && count == -1) {
                pass.setticket(true);
                flight[i].getpassengers().addpassenger(pass);
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
    return flights;
}

void Plane::setflights(vector<Flight> &flights) {
    this->flights = flights;
}