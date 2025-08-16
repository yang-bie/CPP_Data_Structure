//
// Created by Yang on 8/12/25.
//
// This program calls the Rectangle class constructor.
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main() {
    double houseWidth; // To hold the room width
    double houseLength; // To hold the room length

    // Get the width of the house.
    cout << "In feet, how wide is your house? ";
    cin >> houseWidth;

    // Get the length of the house.
    cout << "In feet, how long is your house? ";
    cin >> houseLength;

    // Create a Rectangle object.
    Rectangle house(houseWidth, houseLength);

    // Display the house's width and length, and area.
    cout << fixed << setprecision(2);
    cout << "The house is " << houseWidth << " feet wide.\n";
    cout << "The house is " << houseLength << " feet long.\n";
    cout << "The house is " << house.getArea() << " square feet in area.\n";

    return 0;
}