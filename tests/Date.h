//
// Created by gdrp7 on 06/12/2021.
//
#ifndef PROJECT1_DATE_H
#define PROJECT1_DATE_H
#include <time.h>
#include <ctime>
#include <string>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
public:
    /**
     *  The constructor of the class, where the date will be holded.
     */
    Date(){};
    /**
     * Constructor with arguments ( day, month, year)
     * @param day
     * @param month
     * @param year
     */
    Date(int day, int month, int year);
    /**
     *
     * Copy constructor
     * @param date
     */
    // Date(Date const &date);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    /**
     *
     * @return a string in human-readable format
     */
    string getDate() const;
    bool IsValid( int day,int month, int year);
    bool operator ==(const Date& date) const;
    bool operator <(const Date& date) const;
};

#endif //PLANESERVICE_CPP_DATE_H
