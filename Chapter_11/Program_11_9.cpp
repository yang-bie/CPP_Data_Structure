//
// Created by Yang on 8/5/25.
//
// This program demonstrates an enumerated data type.
#include <iomanip>
#include <iostream>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main() {
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];
    double total = 0;
    int index;

    // Get the sales for each day
    for (index = MONDAY; index <= FRIDAY; index++) {
        cout << "Enter the sales for day " << index << ": ";
        cin >> sales[index];
    }

    // Calculate the total sales.
    for (index = MONDAY; index <= FRIDAY; index++) {
        total += sales[index];
    }

    // Display the total.
    cout << "The total sales are $" << setprecision(2) << fixed << total << endl;
    return 0;
}
