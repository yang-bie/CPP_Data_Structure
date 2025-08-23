//
// Created by Yang on 8/19/25.
//

#ifndef CPP_DATA_STRUCTURE_CARS_H
#define CPP_DATA_STRUCTURE_CARS_H
#include "Automobile.h"
#include <string>
using namespace std;

// The Car class represents a car.
class Car : public Automobile {
private:
    int doors;
public:
    // Default constructor
    Car() : Automobile() {
        doors = 0;
    }

    // Constructor #2
    Car(string make, int model, int mileage, double price, int doors) : Automobile(make,
        model, mileage, price) {
        this->doors = doors;
    }

    // Mutator and Accessor functions
    int getDoors() const { return doors; }

    // void setNumDoors(int doors) { this->doors = doors; }
};
#endif // CPP_DATA_STRUCTURE_CARS_H
