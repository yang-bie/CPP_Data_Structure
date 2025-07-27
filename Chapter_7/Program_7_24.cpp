//
// Created by Yang on 7/26/25.
//
// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;                // Number of employees
    vector<int> hours(NUM_EMPLOYEES);           // A vector of integers
    vector<double> payRate(NUM_EMPLOYEES);      // A vector of doubles
    int index;

    // Input the data.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES;
    cout << " employees and their hourly tates.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Display each employee's gross pay.
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1) <<": $" << grossPay << endl;
    }
    return 0;
}