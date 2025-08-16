//
// Created by Yang on 7/28/25.
//
// This program totals and averages the sales amounts for any
// number of days. The amounts are stored in a dynamically
// allocated array.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double *sales = nullptr, total = 0.0, average;
    int numDays, count;

    // Get the number of days of sales.
    cout << "How many days of sales amounts do you wish to process? ";
    cin >> numDays;
    // Dynamically allocate an array large enough to hold
    // that many days of sales amounts.
    sales = new double[numDays];

    // Get the sales amounts for each day.
    cout << "Enter the sales amounts below.\n";
    for (count = 0; count < numDays; count++) {
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];
    }

    // Calculate the total sales
    for (count = 0; count < numDays; count++) {
        total += sales[count];
    }

    // Calculate the average sales per day
    average = total / numDays;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    // Free dynamically allocated memory
    delete [] sales;
    sales = nullptr; // Make sales a null pointer

    return 0;
}
