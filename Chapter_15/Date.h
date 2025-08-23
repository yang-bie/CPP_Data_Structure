//
// Created by Yang on 8/21/25.
//

#ifndef CPP_DATA_STRUCTURE_DATE_H
#define CPP_DATA_STRUCTURE_DATE_H
class Date {
protected:
    int day;
    int month;
    int year;
public:
    // Default constructor
    Date() {
        this->day = 1;
        this->month = 1;
        this->year = 1990;
    }

    // Constructor
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // Accessors
    int getDay() const { return day; }

    int getMonth() const { return month; }

    int getYear() const { return year; }
};
#endif // CPP_DATA_STRUCTURE_DATE_H
