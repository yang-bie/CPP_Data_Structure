//
// Created by Yang on 8/10/25.
//
// This program creates three instances of the Rectangle class.
#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle {
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

//**************************************************
// setWidth assigns a value to the width member.
//**************************************************

void Rectangle::setWidth(double w) {
    width = w;
}

//**************************************************
// setLength assigns a value to the length member.
//**************************************************

void Rectangle::setLength(double l) {
    length = l;
}

//**************************************************
// getWidth returns the value in the width member.
//**************************************************

double Rectangle::getWidth() const {
    return width;
}

//**************************************************
// getLength returns the value in the length member.
//**************************************************

double Rectangle::getLength() const {
    return length;
}

//**************************************************
// getArea returns the product of width times length.
//**************************************************

double Rectangle::getArea() const {
    return width * length;
}

int main() {
    double number; // To hold a number
    double totalArea; // The total area
    Rectangle *kitchen = nullptr;
    Rectangle *bedroom = nullptr;
    Rectangle *den = nullptr;

    // Dynamically allocate the objects.
    kitchen = new Rectangle;
    bedroom = new Rectangle;
    den = new Rectangle;

    // Get the kitchen dimensions.
    cout << "What is the kitchen's length? ";
    cin >> number;
    kitchen->setLength(number);
    cout << "What is the kitchen's width? ";
    cin >> number;
    kitchen->setWidth(number);

    // Get the bedroom dimensions.
    cout << "What is the bedroom's length? ";
    cin >> number;
    bedroom->setLength(number);
    cout << "What is the bedroom's width? ";
    cin >> number;
    bedroom->setWidth(number);

    // Get the den dimensions.
    cout << "What is the den's length? ";
    cin >> number;
    den->setLength(number);
    cout << "What is the den's width? ";
    cin >> number;
    den->setWidth(number);

    // Calculate the total area of the three rooms.
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

    // Display the total area of the three rooms.
    cout << "The total area of the three rooms is " << totalArea << endl;

    // Delete the objects from memory.
    delete kitchen;
    delete bedroom;
    delete den;
    kitchen = nullptr;
    bedroom = nullptr;
    den = nullptr;

    return 0;
}