//
#ifndef PROJECT1_PASSANGER_H
#define PROJECT1_PASSANGER_H
#include <string>
using namespace std;

class Passenger {
    int id;
    string name;
    bool ticket;
    bool hasLuggage;
    bool group;

public:
    Passenger(int id, string name, bool ticket, bool hasLuggage, bool group);

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    bool isTicket() const;

    void setTicket(bool ticket);

    bool isLuggage() const;

    void setLuggage(bool bagage);

    bool isGroup() const;

    void setGroup(bool group);

};
#endif //PROJECT1_PASSANGER_H