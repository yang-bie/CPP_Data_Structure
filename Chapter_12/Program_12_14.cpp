//
// Created by Yang on 8/8/25.
//
// This program uses the write and read functions.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int SIZE = 10;
    fstream file;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Open the file for output in binary mode.
    file.open("numbers.dat", ios::out | ios::binary);

    // Write the contents of the array to the file.
    file.write(reinterpret_cast<char *>(numbers), sizeof(numbers));

    // Close the file.
    file.close();

    // Open the file for input in binary mode.
    file.open("numbers.dat", ios::in | ios::binary);

    // Read the contents of the array into the array.
    file.read(reinterpret_cast<char *>(numbers), sizeof(numbers));

    // Close the file.
    file.close();

    // Display the contents of the array.
    for (int count = 0; count < SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;

    return 0;
}