//
// Created by Yang on 8/21/25.
//

#ifndef CPP_DATA_STRUCTURE_STUDENT_H
#define CPP_DATA_STRUCTURE_STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    string name;
    string idNumber;
    int yearAdmitted;

public:
    // Default constructor
    Student() {
        name = "";
        idNumber = "";
        yearAdmitted = 0;
    }

    // Constructor
    Student(string name, string idNumber, int yearAdmitted) { set(name, idNumber, yearAdmitted); }

    // The set function sets the attribute data.
    void set(string name, string idNumber, int yearAdmitted) {
        this->name = name;
        this->idNumber = idNumber;
        this->yearAdmitted = yearAdmitted;
    }

    // Accessor functions
    const string getName() const { return name; }

    const string getIdNumber() const { return idNumber; }

    int getYearAdmitted() const { return yearAdmitted; }

    // Pure virtual function
    virtual int getRemainingHours() const = 0;
};
#endif // CPP_DATA_STRUCTURE_STUDENT_H
