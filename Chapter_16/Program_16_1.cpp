//
// Created by Yang on 8/21/25.
//
// This program demonstrates how to use try catch to handle thrown exception.
#include <iostream>
#include <string>
using namespace std;

// Function prototype
double divide(int, int);

int main() {
    int num1, num2;
    double quotient;

    // Get two numbers.
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Divide num1 by num2 and catch any
    // potential exceptions.
    try {
        quotient = divide(num1, num2);
        cout << "The quotient is " << quotient << endl;
    } catch (string exceptionString) {
        cout << exceptionString;
    }

    cout << "End of the program.\n";
    return 0;
}

//*********************************************
// The divide function divides the numerator
// by the denominator. If the denominator is
// zero, the function throws an exception.
//*********************************************

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        string exceptionString = "Error: Cannot divided by 0.\n";
        throw exceptionString;
    } else
        return static_cast<double>(numerator) / denominator;
}
