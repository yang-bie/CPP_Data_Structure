//
// Created by Yang on 8/4/25.
//
// This program demonstrates the use of structures.
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct PayRoll {
    int empNumber; // Employee number
    string name; // Employee's name
    double hours; // Hours worked
    double payRate; // Hourly payRate
    double grossPay; // Gross pay
};

int main() {
    PayRoll employee; // employee is a PayRoll structure.

    // Get the employee's number.
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;

    // Get the employee's name
    cout << "Enter employee's name: ";
    cin.ignore(); // To skip the remaining '\n\ character
    getline(cin, employee.name);

    // Get the hours worked by the employee.
    cout << "How many hours did the employee work?";
    cin >> employee.hours;

    // Get the employee's hourly pay rate.
    cout << "What is the employee's hourly payRate?";
    cin >> employee.payRate;

    // Calculate the employee's gross pay.
    employee.grossPay = employee.hours * employee.payRate;

    // Display the employee data.
    cout << "Here is the employee's payroll data:\n";
    cout << "Name: " << employee.name << endl;
    cout << "Number: " << employee.empNumber << endl;
    cout << "Hours worked: " << employee.hours << endl;
    cout << "Hourly payRate: " << employee.payRate << endl;
    cout << fixed << setprecision(2);
    cout << "Gross pay: $" << employee.grossPay << endl;
    return 0;
}