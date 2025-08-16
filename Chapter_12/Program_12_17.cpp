//
// Created by Yang on 8/9/25.
//
// This program demonstrates the seekg function.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch; // To hold a character

    // Open the file for input.
    fstream file("letters.txt", ios::in);

    // Move to byte 5 from the beginning of the file
    // (the 6th byte) and read the character there.
    file.seekg(5L, ios::beg);
    file.get(ch);
    cout << "Byte 5 from beginning : " << ch << endl;

    // Move to the 10th byte from the end of the file
    // and read the character there.
    file.seekg(-10L, ios::end);
    file.get(ch);
    cout << "10th byte from end: " << ch << endl;

    // Move to byte 3 from the current position
    // (4th byte) and read the character there.
    file.seekg(3L, ios::cur);
    file.get(ch);
    cout << "Bytes 3 from current: " << ch << endl;

    file.close();
    return 0;
}