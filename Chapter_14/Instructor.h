//
// Created by Yang on 8/17/25.
//

#ifndef CPP_DATA_STRUCTURE_INSTRUCTOR_H
#define CPP_DATA_STRUCTURE_INSTRUCTOR_H
#include <iostream>
#include <string>
using namespace std;

class Instructor {
private:
    string lastName;
    string firstName;
    string officeNumber;
public:
    Instructor() {
        lastName = "";
        firstName = "";
        officeNumber = "";
    }

    Instructor(string lName, string fName, string officeNum) {
        set(lName, fName, officeNum);
    }

    void set(string lName, string fName, string officeNum) {
        lastName = lName;
        firstName = fName;
        officeNumber = officeNum;
    }

    void print() const{
        cout << "Last Name: " << lastName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Office number: " << officeNumber << endl;
    }
};
#endif // CPP_DATA_STRUCTURE_INSTRUCTOR_H
