//
// Created by Yang on 8/6/25.
//
// This program uses fixed and setprecision manipulators
// to format file output.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    fstream dataFile;
    double num = 17.618392;

    dataFile.open("numfile.txt", ios::out);

    dataFile << fixed;
    dataFile << num << endl;

    dataFile << setprecision(4);
    dataFile << num << endl;

    dataFile << setprecision(3);
    dataFile << num << endl;

    dataFile << setprecision(2);
    dataFile << num << endl;

    dataFile << setprecision(1);
    dataFile << num << endl;

    cout << "Done.\n";
    dataFile.close();

    return 0;
}