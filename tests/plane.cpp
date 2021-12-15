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

string Plane::getMat(){
    return mat;
}

string Plane::getType(){
    return type;
}

int Plane::getCap(){
    return cap;
}

void Plane::scheduleService(planeService service) {
    this->scheduled.push(service);
}

void Plane::completeService() {
    this->completed.push(scheduled.front());
    this->scheduled.pop();
}
