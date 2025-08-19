//
// Created by Yang on 8/18/25.
//

#ifndef CPP_DATA_STRUCTURE_PERSON_H
#define CPP_DATA_STRUCTURE_PERSON_H
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
private:
    char *name;

public:
    // Default constructor
    Person() {
        cout << "*** default constructor ***\n";
        name = nullptr;
    }

    // Constructor with a parameter
    Person(char *n) {
        cout << "*** parameterized constructor ***\n";
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Move constructor
    Person(Person &&temp) {
        name = temp.name;
        temp.name = nullptr;
    }

    // Copy constructor
    Person(const Person &obj) {
        cout << "*** copy constructor ***\n";
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
    }

    // Destructor
    ~Person() {
        cout << "*** destructor ***\n";
        delete[] name;
    }

    // Overloaded = operator
    Person &operator=(const Person &right) {
        cout << "*** assignment operator ***\n";
        if (this != &right) {
            if (name != nullptr)
                delete[] name;
            name = new char[strlen(right.name)];
            strcpy(name, right.name);
        }
        return *this;
    }

    // Move = operator
    Person &operator=(Person &&right) {
        cout << "*** move assignment operator ***\n";
        if (this != &right) {
            swap(name, right.name);
        }
        return *this;
    }

    // getName member function
    char *getName() { return name; }
};
#endif // CPP_DATA_STRUCTURE_PERSON_H
