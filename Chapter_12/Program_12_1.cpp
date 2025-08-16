//
// Created by Yang on 8/6/25.
//
// This program uses a fstream object to write data to a file.
#include <iostream>
#include<fstream>
using namespace std;

int main() {
    fstream dataFile;

    cout << "Opening the file...\n";
    dataFile.open("demofile.txt", ios::out);
    cout << "Now writing data to the file.\n";
    dataFile << "Jones\n";
    dataFile << "Smith\n";
    dataFile << "Willis\n";
    dataFile << "Davis\n";
    dataFile.close();
    cout << "Done.\n";
    return 0;
}