//
// Created by Yang on 8/19/25.
//

#ifndef CPP_DATA_STRUCTURE_AUTOMOBILE_H
#define CPP_DATA_STRUCTURE_AUTOMOBILE_H
#include <string>
using namespace std;

// The Automobile class holds general data
// about an automobile in inventory.
class Automobile {
private:
    string make;
    int model;
    int mileage;
    double price;
public:
    // Default constructor
    Automobile() {
        make = "";
        model = 0;
        mileage = 0.0;
        price = 0.0;
    }

    // Constructor #2
    Automobile(string make, int model, int mileage, double price) {
        this->make = make;
        this->model = model;
        this->mileage = mileage;
        this->price = price;
    }

    // // Mutator functions
    // void setMake(const string make) { this->make = make; }
    //
    // void setYearModel(const int model) { this->model = model; }
    //
    // void setMileage(double mileage) { this->mileage = mileage; }
    //
    // void setPrice(double price) { this->price = price; }

    // Accessor functions
    string getMake() const { return make; }
    
    int getModel() const { return model; }
    
    int getMileage() const { return mileage; }
    
    double getPrice() const { return price; }
};
#endif // CPP_DATA_STRUCTURE_AUTOMOBILE_H
