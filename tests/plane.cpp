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

int plane::getindex(flight &flight) {
    for(int i = 0; i < flights.size();i++){
        if(flight.num()==flights[i].num()) return i
    }
    return -1;
}

bool plane::addflight(flight &flight) {
    if(getindex(flight)==-1){
        flights.pushback(flight);
        return true;
    }
    return false;
}

void plane::removeflight(flight &flight) {
    if(getindex(flight) >=0){
            clientes.erase(clientes.begin()+ getindex(flight));
            return true;
        }
    }
    return false;
}