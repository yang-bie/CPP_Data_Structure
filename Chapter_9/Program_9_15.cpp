//
// Created by Yang on 7/28/25.
//
// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototype
int *getRandomNumbers(int);

int main() {
    int *numbers = nullptr; // To point to the numbers

    // Get an array of five random numbers.
    numbers = getRandomNumbers(5);

    // Display the numbers.
    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;

    // Free the memory.
    delete [] numbers;
    numbers = nullptr;

    return 0;
}

// Definition of getRandomNumbers

int *getRandomNumbers(int num) {
    int *arr = nullptr;

    if (num <= 0)
        return nullptr;

    arr = new int[num];

    srand(time(0));

    for (int count = 0; count < num; count++)
        arr[count] = rand();
    return arr;
}
