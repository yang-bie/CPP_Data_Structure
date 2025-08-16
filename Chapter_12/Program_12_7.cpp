//
// Created by Yang on 8/8/25.
//
// This program demonstrates how the >> operator should not
// be used to read data that contains whitespace characters.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input; // To hold file input
    fstream nameFile; // File stream object

    // Open the file in input mode.
    nameFile.open("murphy.txt", ios::in);

    // If the file was successfully opened, continue.
    if (nameFile) {
        while (nameFile >> input)
            cout << input;

        // Close the file.
        nameFile.close();
    } else
        cout << "ERROR: Cannot open file.\n";

    return 0;
}