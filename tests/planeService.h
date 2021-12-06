//
// Created by josea on 04/12/2021.
//

#ifndef PROJECT1_PLANESERVICE_H
#define PROJECT1_PLANESERVICE_H

#include <queue>
#include <string>

using namespace std;

class planeService {
    string type;
    string employee;
public:
    planeService();
    planeService(string t, string e);
    string getType() const;
    string getEmployee() const;
    void setType(string t);
    void setEmployee(string e);
};


#endif //PROJECT1_PLANESERVICE_H
