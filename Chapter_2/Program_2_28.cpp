//
// Created by Yang on 7/9/25.
//
// This program calculates the circumference pf a circle.
#include <iostream>
using namespace std;

int main() {
    // Constant
    const double PI = 3.14159; // cosnt is called qualifier
    const double DIAMETER = 10.0;

    // Variable to hold the circumference
    double circumference;

    // Calculating the circumference.
    circumference = PI * DIAMETER;

    // Display the circumference
    cout << "The circumference is: " << circumference << endl;

    return 0;
}
