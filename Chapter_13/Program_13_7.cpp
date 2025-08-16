//
// Created by Yang on 8/11/25.
//
// This program uses the Rectangle class's constructor.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle box;

    // Display the rectangle's data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}