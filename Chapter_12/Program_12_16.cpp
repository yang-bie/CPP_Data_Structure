//
// Created by Yang on 8/8/25.
//
// This program uses a structure variable to read a record from a file.
#include <fstream>
#include <iostream>
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

int main() {
    Info person; // To hold info about a person
    char again; // To hold Y or N
    fstream people; // File stream object

    // Open the file for binary input.
    people.open("people.dat", ios::in | ios::binary);

    // Test for errors.
    if (!people) {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    cout << "Here are the people in the file:\n\n";
    // Read the first record from the file.
    //people.read(reinterpret_cast<char *>(&person), sizeof(person));

    // While the read operation is successful, display the records.
    while (people.read(reinterpret_cast<char *>(&person), sizeof(person))) {
        // Display the record.
        cout << "Name: " << person.name << endl;
        cout << "Age: " << person.age << endl;
        cout << "Address line 1: " << person.address1 << endl;
        cout << "Address line 2: " << person.address2 << endl;
        cout << "Phone: " << person.phone << endl;

        // Wait for the user to press the Enter key.
        cout << "\nPress the Enter key to see the next record.\n";
        cin.get(again);

        // Read the next record from the file.
        //people.read(reinterpret_cast<char *>(&person), sizeof(person));
    }

    cout << "That's all the data in the file!\n";
    people.close();
    return 0;
}
