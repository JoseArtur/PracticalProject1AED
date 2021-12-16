//
// Created by jccmg on 04/12/2021.
//

#ifndef PROJETO_FLIGHT_H
#define PROJETO_FLIGHT_H
#include "Airport.h"
#include <iostream>
#include <string>
#include <vector>
#include "Passenger.h"

#include "Date.h"
#include "Time.h"
using namespace std;

class Flight {
private:
    int num;
    Date dateDeparture, dateArrival;
    Time timeDeparture,timeArrival;
    Airport origin;
    Airport destiny;
    vector<Passenger> passengers;
public:

    Flight( int num, Date dateDeparture,Time timeDeparture, Date dateArrival,Time timeArrival, Airport origin, Airport destiny);

    int getNum() const;
    void setNum(int num);
    const Date &getDateArrival() const;
    void setDateArrival(const Date &dateArrival);
    const Time &getTimeDeparture() const;
    void setTimeDeparture(const Time &timeDeparture);
    const Time &getTimeArrival() const;
    void setTimeArrival(const Time &timeArrival);
    const Airport &getOrigin() const;
    void setOrigin(const Airport &origin);
    const Airport &getDestiny() const;
    void setDestiny(const Airport &destiny);
    const vector<Passenger> &getPassengers() const;
    void setPassengers(const vector<Passenger> &passengers);
    const Date &getDateDeparture() const;
    void setDateDeparture(const Date &dateDeparture);
    bool addpassenger(Passenger &pass);
    bool removepassenger(Passenger &pass);
    Time getDur();
    bool operator==(Flight *flight);


};
#endif //PROJETO_FLIGHT_H
