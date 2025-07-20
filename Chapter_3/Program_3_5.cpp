//
// Created by Yang on 7/9/25.
//
// This program calculates the area of a circle.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    double area, radius;

    cout << "This program calculates the area of a circle.\n";
    cout << "What is the radius of the circle? ";
    cin >> radius;
    area = PI * pow(radius, 2.0);  // pow is a library function, radius and 2.0 are arguments
    cout << "The area is " << area << endl;
    return 0;
}
