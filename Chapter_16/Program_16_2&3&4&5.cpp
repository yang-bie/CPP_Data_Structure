//
// Created by Yang on 8/21/25.
//
// This program demonstrates Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    double width;
    double length;
    bool tryAgain = true;

    // Create a Rectangle object.
    Rectangle myRectangle;

    // get the width and length.
    cout << "Enter the rectangle's width: ";
    cin >> width;

    // Store the width in the myRectangle object.
    while (tryAgain) {
        try {
            myRectangle.setWidth(width);
            // If no exception was thrown, then the
            // next statement will execute.
            tryAgain = false;
        } catch (Rectangle::NegativeWidth e) {
            cout << "Error: " << e.getValue() << " is an invalid value for the "
                << "rectangle's width.\n";
            cout << "Please enter a non-negative value: ";
            cin >> width;
        }
    }

    cout << "Enter the rectangle's length: ";
    cin >> length;

    tryAgain = true;

    // Store the length in the myRectangle object.
    while (tryAgain) {
        try {
            myRectangle.setLength(length);
            // If no exception was thrown, then the
            // next statement will execute.
            tryAgain = false;
        } catch (Rectangle::NegativeLength e) {
            cout << "Error: " << e.getValue() << " is an invalid value for the "
                << "rectangle's length.\n";
            cout << "Please enter a non-negative value: ";
            cin >> length;
        }
    }

    // Store these values in the Rectangle object.
    // try {
    //     myRectangle.setWidth(width);
    //     myRectangle.setLength(length);
    //     cout << "The area of the rectangle is " << myRectangle.getArea() << endl;
    // } catch (Rectangle::NegativeLength) {
    //     cout << "Error: A negative value was given for the rectangle's length.\n";
    // } catch (Rectangle::NegativeWidth) {
    //     cout << "Error: A negative value was given for the rectangle's width.\n";
    // }

    // Display the area of the rectangle.
    cout << "The rectangle's are is " << myRectangle.getArea() << endl;
    // cout << "End of the program.\n";
    return 0;
}