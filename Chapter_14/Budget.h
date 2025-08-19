//
// Created by Yang on 8/16/25.
//
// Budget class declaration
#ifndef CPP_DATA_STRUCTURE_BUDGET_H
#define CPP_DATA_STRUCTURE_BUDGET_H
#include "Auxil.h"
class Budget {
private:
    static double corpBudget; // Static member
    double divisionBudget; // Instance member
public:
    Budget() { divisionBudget = 0.0;}

    void addBudget(double b) {
        divisionBudget += b;
        corpBudget += b;
    }

    double getDivisionBudget() const {return divisionBudget;}

    double getCorpBudget() const {return corpBudget;}

    static void mainOffice(double); // Static member function

    // Friend function
    friend void AuxiliaryOffice::addBudget(double, Budget &);
};
#endif // CPP_DATA_STRUCTURE_BUDGET_H
