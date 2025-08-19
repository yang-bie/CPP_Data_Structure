//
// Created by Yang on 8/16/25.
//

#ifndef CPP_DATA_STRUCTURE_AUXIL_H
#define CPP_DATA_STRUCTURE_AUXIL_H
class Budget; // Forward declaration

class AuxiliaryOffice {
private:
    double auxBudget;
public:
    AuxiliaryOffice(){auxBudget = 0;}

    double getDivisionBudget() const {return auxBudget;}

    void addBudget(double, Budget &);
};
#endif // CPP_DATA_STRUCTURE_AUXIL_H
