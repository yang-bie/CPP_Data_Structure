//
// Created by Yang on 8/8/25.
//
// This program demonstrates reading from one file and writing
// to a seconde file.
#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // Needed for the toupper function.
using namespace std;

int main() {
    string fileName; // To hold the file name
    char ch; // To hold a character
    ifstream inFile; // Input file

    // Open a file for output
    ofstream outFile("out.txt");

    // Get the input file name.
    cout << "Enter a file name: ";
    cin >> fileName;

    // Open the file for input.
    inFile.open(fileName);

    // If the input file opened successfully, continue.
    if (inFile) {
        // Read a char from the input file.
        inFile.get(ch);

        // While the last read operation was successful, continue.
        while (inFile) {
            // Write uppercase char to output file.
            outFile.put(toupper(ch));

            // Read another char from input file.
            inFile.get(ch);
        }
        // Close the two file.
        inFile.close();
        outFile.close();
    } else {
        cout << "Cannot open " << fileName << endl;
    }
    return 0;
}