//
// Created by Yang on 8/19/25.
//

#ifndef CPP_DATA_STRUCTURE_PICKUP_H
#define CPP_DATA_STRUCTURE_PICKUP_H
#include <string>
#include "Automobile.h"
using namespace std;

// The Truck class represents a truck.
class Truck : public Automobile {
private:
    string driveType;

public:
    // Default constructor
    Truck() { driveType = ""; }

    // Constructor #2
    Truck(string make, int model, int mileage, double price, string driveType) :
        Automobile(make, model, mileage, price) {
        this->driveType = driveType;
    }

    // Mutator and Accessor functions
    string getDriveType() const { return driveType; }

    // void setDriveType(string driveType) { this->driveType = driveType; }
};
#endif // CPP_DATA_STRUCTURE_PICKUP_H
