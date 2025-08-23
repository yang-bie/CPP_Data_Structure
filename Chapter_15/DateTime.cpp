//
// Created by Yang on 8/21/25.
//
#include "DateTime.h"
#include <iostream>
using namespace std;

//************************************************
// Default constructor
// Note that this constructor does nothing other
// than call default base class constructors.
//************************************************

DateTime::DateTime() : Date(), Time() {}

//************************************************
// Constructor
// Note that this constructor does nothing other
// than call base class constructors.
//************************************************

DateTime::DateTime(int day, int month, int year, int hour, int min, int sec) :
    Date(day, month, year), Time(hour, min, sec) {}

//************************************************
// The showDateTime member function displays the
// date and time.
//************************************************

void DateTime::showDateTime() const {
    // Display the date in the form MM/DD/YY.
    cout << getMonth() << "/" << getDay() << "/" << getYear() << " ";

    // Display the time in the form HH:MM:SS.
    cout << getHour() << ":" << getMin() << ":" << getSec() << endl;
}
