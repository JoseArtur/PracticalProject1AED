//
// Created by gdrp7 on 06/12/2021.
//

#include "date.h"

Date::Date(unsigned int day, unsigned int month, unsigned int year, unsigned int hour, unsigned int minute) {
    this->day = day;
    this->month = month;
    this->year = year;
    this->hour = hour;
    this->minute = minute;
}

unsigned Date::getHour() const {
    return this->hour;
}

unsigned Date::getMinute() const {
    return this->minute;
}

unsigned Date::getDay() const {
    return this->day;
}

unsigned Date::getMonth() const {
    return this->month;
}

unsigned Date::getYear() const{
    return this->year;
}

Date::Date() {
    this->day = 0;
    this->month = 0;
    this->year = 0;
    this->hour = 0;
    this->minute = 0;
}
