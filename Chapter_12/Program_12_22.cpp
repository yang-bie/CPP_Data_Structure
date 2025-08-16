//
// Created by Yang on 8/9/25.
//
// This program allows the user to edit a specific record.
#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31; // Description size

// Declaration of InventoryItem structure
struct InventoryItem {
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main() {
    InventoryItem record; // To hold an Inventory record
    long recNum; // To hold a record number

    // Open the file in binary mode for input and output.
    fstream inventory("Inventory.dat", ios:: in | ios::out | ios::binary);

    // Get the record number of the desired record.
    cout << "Which record do you want to edit? ";
    cin >> recNum;

    // Move to the record and read it.
    inventory.seekg(recNum * sizeof(InventoryItem), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    // Display the record contents.
    cout << "Description: " << record.desc << endl;
    cout << "Quantity: " << record.qty << endl;
    cout << "Price: " << record.price << endl << endl;

    // Get the new record data.
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore(); // Skip over the remaining newline
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // Move back to the beginning of this record's position.
    inventory.seekg(recNum * sizeof(InventoryItem), ios::beg);
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    // Close the file.
    inventory.close();
    return 0;
}