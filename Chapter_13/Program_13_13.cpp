//
// Created by Yang on 8/12/25.
//
// This program demonstrates a class with overloaded constructors.
#include <iomanip>
#include <iostream>
#include "../Chapter_12/InventoryItem.h"
using namespace std;

int main() {
    // Create an InventoryItem object with constructor #1.
    InventoryItem item1;
    item1.setDescription("Hammer");
    item1.setCost(6.95);
    item1.setUnits(12);

    // Create an InventoryItem object with constructor #2.
    InventoryItem item2("Pliers");

    // Create an InventoryItem object with constructor #3.
    InventoryItem item3("Wrench", 8.75, 20);

    cout << "The following items are in inventory:\n";
    cout << fixed << setprecision(2);

    // Display the data for item1.
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Cost: " << item1.getCost() << endl;
    cout << "Units on hand: " << item1.getUnits() << endl << endl;

    // Display the data for item2.
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Cost: " << item2.getCost() << endl;
    cout << "Units on hand: " << item2.getUnits() << endl << endl;

    // Display the data for item3.
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Cost: " << item3.getCost() << endl;
    cout << "Units on hand: " << item3.getUnits() << endl << endl;
    return 0;
}