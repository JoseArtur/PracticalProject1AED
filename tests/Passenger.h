//
#ifndef PROJECT1_PASSANGER_H
#define PROJECT1_PASSANGER_H
#include <string>
using namespace std;

class Passenger {
    int id;
    string name;
    bool ticket;
    bool bagage;
    bool group;

public:
    Passenger(int id, string name, bool ticket, bool bagage, bool group);
    int getid();
    void setid(int id);
    string getname();
    void setname(string  name);
    bool getticket();
    void setticket(bool  ticket);
    bool getbagage();
    void setbagage(bool bagage);
    bool getgroup();
    void setgroup(bool  group);
};
#endif //PROJECT1_PASSANGER_H