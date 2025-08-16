//
// Created by Yang on 7/28/25.
//
// This program uses a pointer to display the contents of an integer array.
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *ptr = numbers; // Make ptr point to numbers

    // Display the numbers in the array.
    cout << "The numbers are:\n";
    cout << *ptr << " "; // Display the first element

    while (ptr < &numbers[SIZE - 1]) {
        // Advance ptr to point the next element.
        ptr++;
        cout << *ptr << " ";
    }

    // Display the numbers in reverse order.
    cout << "\nThe numbers backward are:\n";
    cout << *ptr << " "; // Display the first element
    while (ptr > numbers) {
        // Move backward to the previous element.
        ptr--;
        cout << *ptr << " ";
    }
    return 0;
}