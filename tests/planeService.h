//
// Created by josea on 04/12/2021.
//


#ifndef PROJECT1_PLANESERVICE_H
#define PROJECT1_PLANESERVICE_H

#include "Date.h"
#include <queue>
#include "date.h"
#include <string>

using namespace std;

class planeService {
    string type;
    string employee;
    Date date;
public:
    planeService(string t, string e, Date date);
    string getType() const;
    string getEmployee() const;
    Date getDate() const;
    void setType(string t);
    void setEmployee(string e);
};

#endif //PROJECT1_PLANESERVICE_H