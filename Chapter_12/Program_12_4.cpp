//
// Created by Yang on 8/6/25.
//
// This program writes 3 rows of numbers to a file.
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int nums[ROWS][COLS] = {2897, 5, 837, 34, 7, 1623, 390, 3456, 12};

    fstream dataFile("table.txt", ios::out);

    // Writes the three rows of numbers with each number in a field of 8 character space.
    for (int r = 0; r < ROWS; r ++) {
        for (int c = 0; c < COLS; c++) {
            dataFile << setw(8) << nums[r][c];
        }
        dataFile << endl;
    }

    dataFile.close();
    cout << "Done.\n";
    return 0;
}
