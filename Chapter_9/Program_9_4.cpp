//
// Created by Yang on 7/27/25.
//
// This program demonstrates a pointer variable referencing
// different variables.
#include <iostream>
using namespace std;

int main() {
    int x = 25, y = 50, z = 75; // Three int variable
    int *ptr = nullptr; // Pointer variable

    // Display the contents of x, y, and z.
    cout << "Here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    // Use the pointer to manipulate x, y, and z.

    ptr = &x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    // Display the contents of x, y, and z.
    cout << "Once again, here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    return 0;
}
