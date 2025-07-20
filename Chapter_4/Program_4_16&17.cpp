//
// Created by Yang on 7/15/25.
//
// This program demonstrates the logical || operator.
#include <iostream>
using namespace std;

int main() {
    // Constants for minimum income and years
    const double MIN_INCOME = 35000.0;
    const int MIN_YEAR = 5;

    double income;  // Annual income
    int years;       // Years at the current job

    // Get the annual income
    cout << "What is your annual income? ";
    cin >> income;

    // Get the number of years at the current job
    cout << "How many years have you worked at "
            << "your current job?";
    cin >> years;

    // Determine the user's loan qualifications.
    /*if (income >= MIN_INCOME || years > MIN_YEAR)
        cout << "You qualify.\n";
    else {
        cout << "You must earn at least $"
        << MIN_INCOME << " or have been "
        << "employed more than " << MIN_YEAR
        << " years.\n";
    }*/

    if (!(income >= MIN_INCOME && income <= MIN_YEAR)) {
        cout << "You must earn at least $"
        << MIN_INCOME << " or have been "
        << "employed more than " << MIN_YEAR
        << " years.\n";
    } else
        cout << "You qualify.\n";

    return 0;
}
