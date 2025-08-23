//
// Created by Yang on 8/19/25.
//

#ifndef CPP_DATA_STRUCTURE_SUV_H
#define CPP_DATA_STRUCTURE_SUV_H
#include <string>
#include "Automobile.h"
using namespace std;

// The SUV class represents an SUV.
class SUV : public Automobile {
private:
    int passengers;
public:
    // Default constructor
    SUV() {
        passengers = 0;
    }

    // Constructor #2
    SUV(string make, int model, int mileage, double price, int passengers) : Automobile(
        make, model, mileage, price) {
        this->passengers = passengers;
    }

    // Accessor function
    int getPassengers() const { return passengers; }
};
#endif // CPP_DATA_STRUCTURE_SUV_H
