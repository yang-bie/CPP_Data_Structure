//
// Created by Yang on 8/12/25.
//
// This program demonstrates a clss with a destructor.
#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main() {
    // Define a ContactInfo object with the following data:
    // Name: Kristen Lee, Phone Number: 555-2021
    ContactInfo entry("Kristen Lee", "555-2021");

    // Display the object's data.
    cout << "Name; " << entry.getName() << endl;
    cout << "Phone Number: " << entry.getPhone() << endl;
    return 0;
}