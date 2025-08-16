//
// Created by Yang on 8/9/25.
//
// This program randomly reads a record of data from a file.
#include <iostream>
#include <fstream>
using namespace std;

// Array size
const int NAME_SIZE = 51;
const int ADDR_SIZE = 51;
const int PHONE_SIZE = 14;

// Declare a structure for the record.
struct Info {
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};

// Function prototypes
long byteNum(int);
void showRec(Info);

int main() {
    Info person; // To hold info about a person
    fstream people; // File stream object

    // Open the file for binary input.
    people.open("people.dat", ios::in | ios::binary);

    // Test for errors.
    if (!people) {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    // Read and display record 1.
    cout << "\nHere is record 1:\n";
    people.seekg(byteNum(1), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);

    // Read and display record 0.
    cout << "\nHere is record 0:\n";
    people.seekg(byteNum(0), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);

    // Close the file.
    people.close();
    return 0;
}

//***********************************************************
// Definition of function byteNum. Accepts an integer as
// its argument. Returns the byte number in the file of the
// record whose number is passed as the argument.
//***********************************************************

long byteNum(int recNum) {
    return recNum * sizeof(Info);
}

//***********************************************************
// Definition of function showRec. Accepts an Info structure
// as its argument, and display the structure's contents.
//***********************************************************

void showRec(Info record) {
    cout << "Name: " << record.name << endl;
    cout << "Age: " << record.age << endl;
    cout << "Address line 1: " << record.address1 << endl;
    cout << "Address line 2: " << record.address2 << endl;
    cout << "Phone: " << record.phone << endl;
}
