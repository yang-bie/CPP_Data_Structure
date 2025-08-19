//
// Created by Yang on 8/16/25.
//
// Implementation file for class Budget.
#include "Budget.h"

// Definition of static member variable corpBudget
double Budget::corpBudget = 0.0;

//*************************************************************
// Definition of static member function mainOffice.
// This function adds the main office's budget to
// the corpBudget variable.
//*************************************************************

void Budget::mainOffice(double moffice) { corpBudget += moffice; }
