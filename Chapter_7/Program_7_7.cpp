//
// Created by Yang on 7/24/25.
//
// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 10;  // Array size
    int numbers[ARRAY_SIZE];    // Array with 10 elements
    int count = 0;              // Loop counter variable
    ifstream inputFile;         // Input file steam object

    // Open the file.
    inputFile.open("TheNumbers.txt");

    // Check if the file is successfully opened
    if (!inputFile) {
        cout << "Can't find such a file...Sorry~";
        exit(EXIT_FAILURE);
    }

    // Read the numbers form the file into the array.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count ++;

    // Close the file.
    inputFile.close();

    // Display the numbers read.
    cout << "The numbers are: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;
    return 0;
}
