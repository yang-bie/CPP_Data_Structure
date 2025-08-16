//
// Created by Yang on 8/6/25.
//
// This program writes data to a file, closes the file, then reopens
// and appends more data.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream dataFile;

    cout << "Opening the file...\n";
    // Open the file in output mode.
    dataFile.open("demofile.txt", ios::out);
    cout << "Now writing data to the file.\n";
    dataFile << "Jones\n";
    dataFile << "Smith\n";
    cout << "Now closing the file.\n";
    dataFile.close();

    cout << "Opening the file again...\n";
    // Open the file in append mode.
    dataFile.open("demofile.txt", ios::out | ios::app);
    cout << "Writing more data to the file.\n";
    dataFile << "Willis\n";
    dataFile << "Davis\n";
    cout << "Now closing the file.\n";
    dataFile.close();

    return 0;
}