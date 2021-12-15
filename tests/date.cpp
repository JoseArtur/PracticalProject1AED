//
// Created by gdrp7 on 06/12/2021.
//

#include "date.h"

Date::Date(unsigned int day, unsigned int month, unsigned int year, unsigned int hour, unsigned int minute) {
    if (day >= 1 && day <= 31) this->day = day;
    if (month >= 1 && month <= 12)this->month = month;
    this->year = year;
    if (hour >= 0 && hour <= 23)this->hour = hour;
    if (minute >= 0 && minute <= 59)this->minute = minute;
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