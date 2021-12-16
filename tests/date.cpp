//
// Created by gdrp7 on 06/12/2021.
//

#include "Date.h"
#include <sstream>
#include <iostream>
using namespace std;
Date::Date(int day, int month, int year) {
    if(IsValid(day, month, year)){
        this->day = day;
        this->month = month;
        this->year = year;
    }}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const{
    return this->year;
}



bool Date::IsValid( int day,int month, int year)
{
    //The first comercial flight in history was in 1914
    if (! (1914<= year )  )
        return false;
    if (! (1<= month && month<=12) )
        return false;
    if (! (1<= day && day<=31) )
        return false;
    if ( (day==31) && (month==2 || month==4 || month==6 || month==9 || month==11) )
        return false;
    if ( (day==30) && (month==2) )
        return false;
    if ( (month==2) && (day==29) && (year%4!=0) )
        return false;
    if ( (month==2) && (day==29) && (year%400==0) )
        return true;
    if ( (month==2) && (day==29) && (year%100==0) )
        return false;
    return true;
}





string Date::getDate() const {
    stringstream datestring;
    datestring << this->getDay() << " - " << this->getMonth() << " - " << this->getYear() ;
    return datestring.str();
}

void Date::setDay(int day) {
    if (day < 1 && day > 31)
        cout << "Invalid day" << endl;
    else
        this->day = day;
}

void Date::setMonth(int month) {
    if (month < 1 && month > 12)
        cout << "Invalid month" << endl;
    else
        this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

/*
Date Date::operator=( Date date) {
    this->setDay(date.getDay());
    this->setMonth(date.getMonth());
    this->setYear(date.getYear());
    return *this;
}*/

bool Date::operator==(const Date& date) const {
    if (day == date.day && month == date.month && year == date.year)
    {return true;}
    else return false;
}


bool Date::operator<(const Date& date) const {
    if(year == date.getYear()) {
        if (month == date.getMonth()) {
            return day < date.getDay();
        }
        else return month < date.getMonth();
    }
    else return year < date.getYear();

}