//
// Created by josea on 16/12/2021.
//

#include <sstream>
#include "Time.h"
//
// Created by gdrp7 on 06/12/2021.
//
Time::Time( int hour, int minute) {
    this->hour = hour;
    this->minute = minute;
}

int Time::getHour() const {
    return this->hour;
}

int Time::getMinute() const {
    return this->minute;
}



Time::Time() {
    this->hour = 0;
    this->minute = 0;
}

void Time::setHour(int hour) {
this->hour = hour;
}

void Time::setMinute(int minute) {
this->minute = minute;
}

string Time::getTime() const {
    stringstream timestring;
    timestring << hour << " : " << minute ;
    return timestring.str();
}

bool Time::operator==(const Time &time) const {
    return hour== time.getHour() && minute == time.getMinute();
}

bool Time::operator<(const Time &time) const {
    if(hour == time.getHour()){
        return minute< time.getMinute();
    }
    else return hour<time.getHour();
}