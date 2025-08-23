//
// Created by Yang on 8/19/25.
//

#ifndef CPP_DATA_STRUCTURE_BOX_H
#define CPP_DATA_STRUCTURE_BOX_H
#include "Rectangle.h"

class Box : public Rectangle {
protected:
    double height;
    double volume;

public:
    // Default constructor
    Box() : Rectangle() {
        height = 0.0;
        volume = 0.0;
    }

    // Constructor #2
    Box(double, double, double);

    // Accessor function
    double getHeight() const { return height; }

    double getVolume() const { return volume; }
};
#endif // CPP_DATA_STRUCTURE_BOX_H
