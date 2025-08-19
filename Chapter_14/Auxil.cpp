//
// Created by Yang on 8/16/25.
//
#include "Budget.h"
#include "Auxil.h"

//*************************************************************
// Definition of member function addBudget.
// This function is declared a friend by the Budget class.
// It adds the value of argument b to the static corpBudget
// member variable of the Budget class.
//*************************************************************

void AuxiliaryOffice::addBudget(double b, Budget &div) {
    auxBudget += b;
    div.corpBudget += b;
}
