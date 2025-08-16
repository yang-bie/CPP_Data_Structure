//
// Created by Yang on 8/11/25.
//
// This program uses the Rectangle class, which is declared in
// the Rectangle.h file. The member Rectangle class's member
// functions are defined in the Rectangle.cpp file. This program
// should be compiled with those files in a project.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle box; // Define an instance of the Rectangle class
    double recWidth; // Local variable for width
    double recLength; // Local variable for length

    // Get the rectangle's width and length from the user.
    cout << "This program will calculate the area of a\n";
    cout << " rectangle. What is the width? ";
    cin >> recWidth;
    cout << "What is the length? ";
    cin >> recLength;

    // Store the width and length of the rectangle in the box object.
    box.setWidth(recWidth);
    box.setLength(recLength);

    // Display the rectangle's data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}
