//
#ifndef PROJECT1_PASSANGER_H
#define PROJECT1_PASSANGER_H
#include <string>
using namespace std;

class Passenger {
    int id;
    string name;
    bool hasLuggage;
    bool autoCheck;
public:
    Passenger(int id, string name, bool hasLuggage, bool autoCheck);

    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    bool isLuggage() const;

    void setLuggage(bool hasLuggage);

    bool isAutoCheck() const;

    void setAutoCheck(bool aC);
};

#endif //PROJECT1_PASSANGER_H