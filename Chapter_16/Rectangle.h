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
    Rectangle(); // Default constructor
    Rectangle(double, double); // Constructor

    // Exception class for a negative width
    class NegativeWidth {
    private:
        double value;

    public:
        NegativeWidth(double value) { this->value = value; }

        double getValue() { return value; }
    };

    // Exception class for a negative length
    class NegativeLength {
    private:
        double value;
    public:
        NegativeLength(double value) {
            this->value = value;
        }

        double getValue() { return value; }
    };
    void setWidth(double);
    void setLength(double);
    double getWidth() const { return width; }
    double getLength() const { return length; }
    double getArea() const { return width * length; }
};
#endif // CPP_DATA_STRUCTURE_RECTANGLE_H
