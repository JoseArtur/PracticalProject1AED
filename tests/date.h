//
// Created by gdrp7 on 06/12/2021.
//

#ifndef PLANESERVICE_CPP_DATE_H
#define PLANESERVICE_CPP_DATE_H

class Date {
    unsigned hour;
    unsigned minute;
    unsigned day;
    unsigned month;
    unsigned year;
public:
    Date();
    Date(unsigned day, unsigned month, unsigned year, unsigned hour, unsigned minute);
    unsigned getHour() const;
    unsigned getMinute() const;
    unsigned getDay() const;
    unsigned getMonth() const;
    unsigned getYear() const;
};

#endif //PLANESERVICE_CPP_DATE_H
