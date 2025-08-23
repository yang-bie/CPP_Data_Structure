//
// Created by Yang on 8/21/25.
//

#ifndef CPP_DATA_STRUCTURE_DATETIME_H
#define CPP_DATA_STRUCTURE_DATETIME_H
#include "Date.h"
#include "Time.h"

class DateTime : public Date, public  Time {
public:
    // Default constructor
    DateTime();

    // Constructor
    DateTime(int, int, int, int, int, int);

    // The showDateTime function displays the date and the time.
    void showDateTime() const;
};
#endif // CPP_DATA_STRUCTURE_DATETIME_H
