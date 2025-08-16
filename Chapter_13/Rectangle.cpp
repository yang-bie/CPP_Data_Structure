//
// Created by Yang on 8/11/25.
//
// Implementation file for the Rectangle class.
#include "Rectangle.h" // Needed for the Rectangle class
#include <cstdlib> // Needed for the exit function
#include <iostream> // Needed for cout
using namespace std;

//**************************************************
// setWidth assigns a value to the width member.
//**************************************************

void Rectangle::setWidth(double w) {
    if (w >= 0) {
        width = w;
    } else {
        cout << "Invalid width.\n";
        exit(EXIT_FAILURE);
    }
}

//**************************************************
// setLength assigns a value to the length member.
//**************************************************

void Rectangle::setLength(double l) {
    if (l >= 0) {
        length = l;
    } else {
        cout << "Invalid length.\n";
        exit(EXIT_FAILURE);
    }
}

//*****************************************************
// The constructor initializes width and length to 0.0
//***************************************** ************

 Rectangle::Rectangle(double w, double l) {
    width = w;
    length = l;
}

 Rectangle::Rectangle() {
    width = 0.0;
    length = 0.0;
}


//
// //**************************************************
// // getWidth returns the value in the width member.
// //**************************************************
//
// double Rectangle::getWidth() const { return width; }
//
// //**************************************************
// // getLength returns the value in the length member.
// //**************************************************
//
// double Rectangle::getLength() const { return length; }
//
// //**************************************************
// // getArea returns the product of width times length.
// //**************************************************
//
// double Rectangle::getArea() const { return width * length; }
