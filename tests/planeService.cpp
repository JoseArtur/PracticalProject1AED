//
// Created by gdrp7 on 04/12/2021.
//

#include "planeService.h"

planeService::planeService(string t, string e, Date d) {
    this->type = t;
    this->employee = e;
    this->date = d;
}

string planeService::getType() const {
    return this->type;
}

string planeService::getEmployee() const {
    return this->employee;
}

void planeService::setType(string t) {
    this->type = t;
}

void planeService::setEmployee(string e) {
    this->employee = e;
}

Date planeService::getDate() const {
    return this->date;
}
