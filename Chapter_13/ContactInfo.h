//
// Created by Yang on 8/12/25.
//
// Specification file for Contact class

#ifndef CPP_DATA_STRUCTURE_CONTACTINFO_H
#define CPP_DATA_STRUCTURE_CONTACTINFO_H
#include <cstring>

// ContactInfo class declaration.
class ContactInfo {
private:
    char *name; // The name
    char *phone; // The phone number

    // Private member function: initName
    // This function initializes the name attribute.
    void initName(char *n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Private member function: initPhone
    // This function initializes the phone attribute.
    void initPhone(char *p) {
        phone = new char[strlen(p) + 1];
        strcpy(phone, p);
    }
public:
    // Constructor
    ContactInfo(char *n, char *p) {
        // Allocate just enough memory for the name and phone number.
        //name = new char[strlen(n) + 1];
        //phone = new char[strlen(p) + 1];

        // Copy the name and phone number to the allocated memory..
        //strcpy(name, n);
        //strcpy(phone, p);

        // Initialize the name and phone attributes.
        initName(n);
        initPhone(p);
    }

    // Destructor
    ~ContactInfo() {
        delete[] name;
        delete[] phone;
    }

    const char *getName() const { return name; }

    const char *getPhone() const { return phone; }
};

#endif // CPP_DATA_STRUCTURE_CONTACTINFO_H
