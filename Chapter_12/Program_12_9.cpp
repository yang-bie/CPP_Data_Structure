//
// Created by Yang on 8/8/25.
//
// This program demonstrates the getline function with
// specified delimiter.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input; // To hold file input

    // Open the file for input.
    fstream dataFile("names2.txt", ios::in);

    // If the file was successfully opened, continue.
    if (dataFile) {
        // Read an item using $ as a delimiter.
        getline(dataFile, input, '$');

        // While the last read operation was successful, continue.
        while (dataFile) {
            // Display the last item read.
            cout << input << endl;

            // Read an item using $ as a delimiter.
            getline(dataFile, input, '$');
        }

        // Close the file.
        dataFile.close();
    } else {
        cout << "ERROR: Cannot open the file.\n";
    }
    return 0;
}