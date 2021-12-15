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

string Plane::gettype(){
    return type;
}

int Plane::getcap(){
    return cap;
}

