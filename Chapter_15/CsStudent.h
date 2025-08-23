//
// Created by Yang on 8/21/25.
//

#ifndef CPP_DATA_STRUCTURE_CSSTUDENT_H
#define CPP_DATA_STRUCTURE_CSSTUDENT_H
#include "Student.h"

// Constants for required hours
const int MATH_HOURS = 20;
const int CS_HOURS = 40;
const int GEN_ED_HOURS = 60;

class CsStudent : public Student {
private:
    int mathHours;
    int csHours;
    int genEdHours;

public:
    // Default constructor
    CsStudent() : Student() {
        mathHours = 0;
        csHours = 0;
        genEdHours = 0;
    }

    // Constructor
    CsStudent(string name, string idNumber, int yearAdmitted) : Student(name, idNumber, yearAdmitted) {
        mathHours = 0;
        csHours = 0;
        genEdHours = 0;
    }

    // Mutator functions
    void setMathHours(int mathHours) { this->mathHours = mathHours; }

    void setCsHours(int csHours) { this->csHours = csHours; }

    void setGenEdHours(int genEdHours) { this->genEdHours = genEdHours; }

    // Overridden getRemainingHours function
    // defined in CsStudent.cpp
    virtual int getRemainingHours() const override;
};
#endif // CPP_DATA_STRUCTURE_CSSTUDENT_H
