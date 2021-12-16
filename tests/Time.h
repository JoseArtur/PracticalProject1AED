//
// Created by josea on 16/12/2021.
//

#ifndef PROJECT1_TIME_H
#define PROJECT1_TIME_H

#include <ctime>
#include <string>
using namespace std;
class Time {
    int hour;
    int minute;
public:
    /**
     *  The constructor of the class, where the time will be holded.
     */
    Time();
    /**
     * Constructor with arguments (hour, minute, day, month, year)
     * @param hour
     * @param minute
     */
    Time( int hour, int minute);
    /**
     *
     * Copy constructor
     * @param date
     */
    int getHour() const;
    int getMinute() const;
    void setHour(int hour);
    void setMinute(int minute);

    /**
     *
     * @return a string in human-readable format
     */
    string getTime() const;
    bool operator ==(const Time& time) const;
    bool operator <(const Time& time) const;
    //Time operator =(const Time& time);


};


#endif //HEAD_TIME_H
