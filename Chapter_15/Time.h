//
// Created by Yang on 8/21/25.
//

#ifndef CPP_DATA_STRUCTURE_TIME_H
#define CPP_DATA_STRUCTURE_TIME_H

class Time {
protected:
    int hour;
    int min;
    int sec;

public:
    // Default constructor
    Time() {
        hour = 0;
        min = 0;
        sec = 0;
    }

    // Constructor
    Time(int hour, int min, int sec) {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }

    // Accessor functions
    int getHour() const { return hour; }

    int getMin() const { return min; }

    int getSec() const { return sec; }
};
#endif // CPP_DATA_STRUCTURE_TIME_H
