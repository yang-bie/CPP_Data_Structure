//
// Created by Yang on 8/8/25.
//
// This program uses the getline function to read a line of
// data from the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;
    fstream nameFile;

    nameFile.open("murphy.txt", ios::in);

    if (nameFile) {
        getline(nameFile, input);
        while (nameFile) {
            cout << input << endl;
            getline(nameFile, input);
        }
        nameFile.close();
    } else {
        cout << "ERROR: Cannot open the file.\n";
    }
    return 0;
}
