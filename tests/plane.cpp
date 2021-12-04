//
// Created by jccmg on 04/12/2021.
//

#include "plane.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

plane::plane(string mat, string type, int cap) {
    this->mat = mat;
    this->type = type;
    this->cap = cap;
}

string plane::getmat(){
    return mat;
}

string plane::gettype(){
    return type;
}

int plane::getcap(){
    return cap;
}
