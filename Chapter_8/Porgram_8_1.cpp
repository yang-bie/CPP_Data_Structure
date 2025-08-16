//
// Created by Yang on 7/27/25.
//
// This program demonstrates the linear search algorithm.
#include <iostream>
using namespace std;

// Function prototype
int linearSearch(const int[], int, int);

int main() {
    const int SIZE = 5;
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;

    // Search the array for 100.
    results = linearSearch(tests, SIZE, 100);

    // If linearSearch returned -1, then 100 was not found.
    if (results == -1)
        cout << "You did not earn 100 points on any test.\n";
    else {
        // Otherwise results contains the subscript of the first 100 in the array.
        cout << "You earned 100 points on test " << (results + 1) << endl;
    }
    return 0;
}

//***************************************************************
// The linearSearch function performs a linear search on an
// integer array. The array arr, which has a maximum of size
// elements, is searched for the number stored in value. If the
// number is found, its array subscript is returned. Otherwise,
// -1 is returned indicating the value was not in the array.
//***************************************************************

int linearSearch(const int arr[], int size, int value) {
    int position = -1;
    bool found = false;

    for (int count = 0; count < size && !found; count++) {
        if (arr[count] == value) {
            found = true;
            position = count;
        }
    }
    return position;
}
