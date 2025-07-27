//
// Created by Yang on 7/24/25.
//
// This program demonstrates the range-based for loop.
#include <iostream>
using namespace std;

int main() {
    // Define an array of integers.
    int numbers[] = {10, 20, 30, 40, 50};

    // Display the values in the array.
    for (int value : numbers)
        cout << value << endl;
    return 0;
}