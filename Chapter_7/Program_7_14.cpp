//
// Created by Yang on 7/24/25.
//
// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 100; // Array size
    int numbers[ARRAY_SIZE];    // Array with 100 elements
    int count = 0;              // Loop counter variable
    ifstream inputFile;         // Input file stream object

    // Open the file
    inputFile.open("numbers.txt");

    // Check if the file can be opened.
    if (!inputFile) {
        cout << "Sorry! Can't open the file. The program will be terminated...";
        exit(EXIT_FAILURE);
    }

    // Read the numbers from the file into the array.
    // After this loop executes, the count variable will hold
    // the number of values that were stored in the array.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Close the file.
    inputFile.close();

    // Display the numbers read.
    cout << "The number are: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
