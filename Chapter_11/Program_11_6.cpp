//
// Created by Yang on 8/5/25.
//
// This program has functions that accept structure variables as arguments.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem {
    int partNum; // Part number
    string description; // Item description
    int onHand; // Units on hand
    double price; // Unit price
};

// Function prototype
void getItem(InventoryItem&); // Argument passed by reference
void showItem(const InventoryItem&); // Argument passed by value

int main() {
    InventoryItem part;

    getItem(part);
    showItem(part);
    return 0;
}

//**********************************************************************
// Definition of function getItem.
// This function uses a structure reference variable as its parameter.
// It asks the user for information to store in the structure.
//**********************************************************************

void getItem(InventoryItem &item) {
    // Get the part number.
    cout << "Enter the par number: ";
    cin >> item.partNum;

    // Get the part description.
    cout << "Enter the part description: ";
    cin.ignore(); //  Ignore the remaining newline character
    getline(cin, item.description);

    // Get the quantity on hand
    cout << "Enter the quantity on hand: ";
    cin >> item.onHand;

    // Get the unit price
    cout << "Enter the unit price; ";
    cin >> item.price;
}

//**********************************************************************
// Definition of function showItem.
// This function accepts an argument of the InventoryItem structure type.
// The contents of the structure is displayed.
//**********************************************************************

void showItem(const InventoryItem &item) {
    cout << fixed << setprecision(2);
    cout << "Part Number: " << item.partNum << endl;
    cout << "Description: " << item.description << endl;
    cout << "Units On Hand: " << item.onHand << endl;
    cout << "Price: $" << item.price << endl;
}

