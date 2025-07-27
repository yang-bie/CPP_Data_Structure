//
// Created by Yang on 7/26/25.
//
// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates.

#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    vector<int> hours;          // hour is an empty vector
    vector<double> payRate;     // payRate is an empty vector
    int numEmployees;           // The number of employees
    int index;                  // Loop counter

    // Get the number of employees.
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Input the payroll data.
    cout << "Enter the hours worked by " << numEmployees << " employees and their hourly rates.\n";
    for (index = 0; index < numEmployees; index++) {
        int temHours;           // To hold the number of hours worked
        double temRate;         // To hold the pay rate entered
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> temHours;
        hours.push_back(temHours);          // Add an element to hours
        cout << "Hourly pay rate for employee #" << (index + 1) <<": ";
        cin >> temRate;
        payRate.push_back(temRate);
    }

    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << setprecision(2);
    for (index = 0; index < numEmployees; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
    }
    return 0;
}