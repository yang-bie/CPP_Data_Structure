//
// Created by Yang on 8/11/25.
//
// Specification file for the Rectangle class.

#ifndef CPP_DATA_STRUCTURE_RECTANGLE_H
#define CPP_DATA_STRUCTURE_RECTANGLE_H
// Rectangle class declaration.

class Rectangle {
private:
    double width;
    double length;

public:
    Rectangle(double, double); // Constructor
    Rectangle();
    void setWidth(double);
    void setLength(double);
    double getWidth() const { return width; }
    double getLength() const { return length; }
    double getArea() const { return width * length; }
};
#endif // CPP_DATA_STRUCTURE_RECTANGLE_H
