//
// Created by Yang on 8/5/25.
//
// This program demonstrates an enumerated data type.
#include <iostream>
#include <iomanip>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main() {
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];
    double total = 0;
    Day workDay;

    // Get sales for each day.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1)) {
        cout << "Enter the sales for day " << workDay << ": ";
        cin >> sales[workDay];
    }

    // Calculate the total sales.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
        total += sales[workDay];

    // Display the total.
    cout << "The total sales are $" << setprecision(2) << fixed << total << endl;

    return 0;
}