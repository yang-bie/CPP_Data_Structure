//
// Created by Yang on 8/12/25.
//
// This class has overloaded constructors.
#ifndef CPP_DATA_STRUCTURE_INVENTORYITEM_H
#define CPP_DATA_STRUCTURE_INVENTORYITEM_H
#include <string>
using namespace std;

class InventoryItem {
private:
    string description; // The item description
    double cost; // The item cost
    int units; // Number of units on hand
public:
    // Constructor #1 (default constructor)
    InventoryItem() {
        // Initialize description, cost and units.
        description = "";
        cost = 0.0;
        units = 0;
    }

    // Constructor #2
    InventoryItem(string desc) {
        // Assign the value to description
        description = desc;

        // Initialize cost and units.
        cost = 0.0;
        units = 0;
    }

    // Constructor #3
    InventoryItem(string desc, double c, int u) {
        // Assign values to description, cost, and units.
        description = desc;
        cost = c;
        units = u;
    }

    // Mutator functions and Accessor functions
    string getDescription() const { return description; }
    void setDescription(const string d) { description = d; }
    double getCost() const { return cost; }
    void setCost(double c) { cost = c; }
    int getUnits() const { return units; }
    void setUnits(int u) { units = u; }
};

#endif // CPP_DATA_STRUCTURE_INVENTORYITEM_H
