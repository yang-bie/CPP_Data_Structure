//
// Created by Yang on 8/10/25.
//
// This program uses smart pointers to allocate three
// instances of the Rectangle class.
//
// Created by Yang on 8/10/25.
//
// This program creates three instances of the Rectangle class.
#include <iostream>
#include <memory>
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

    // Dynamically allocate the objects.
    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);

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

    return 0;
}