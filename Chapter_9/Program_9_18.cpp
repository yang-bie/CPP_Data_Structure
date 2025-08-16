//
// Created by Yang on 7/29/25.
//
// This program demonstrates a unique_ptr pointing
// to a dynamically allocated array of integers.
#include <iostream>
#include <memory>
using namespace std;

int main() {
    int max; // Max size of the array

    // Get the number of values to store.
    cout << "How many numbers do you want to enter? ";
    cin >> max;

    // Define a unique_ptr smart pointer, pointing to a dynamically allocated array of ints.
    unique_ptr<int[]> ptr(new int[max]);

    // Get values for the array.
    for (int count = 0; count < max; count++) {
        cout << "Enter an integer number: ";
        cin >> ptr[count];
    }

    // Display the values in the array.
    cout << "Here are the values you entered:\n";
    for (int count = 0; count < max; count++)
        cout << ptr[count] << endl;

    return 0;
}