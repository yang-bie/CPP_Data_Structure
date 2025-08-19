//
// Created by Yang on 8/16/25.
//
// This program demonstrates a static class member variable.
#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

int main() {
    int count; // Loop counter
    const int NUM_DIVISIONS = 4; // Number of divisions
    double mainOfficeRequest; // Main office budgest request

    // Get the main office budget request.
    cout << "Enter the main office's budget request: ";
    cin >> mainOfficeRequest;
    Budget::mainOffice(mainOfficeRequest);

    Budget divisions[NUM_DIVISIONS]; // Array of Budget objects
    AuxiliaryOffice auxOffice[4]; // Array of AuxiliaryOffice

    // Get the budget request for each division.
    for (count = 0; count < NUM_DIVISIONS; count++) {
        double budgetAmount;
        cout << "Enter the budget request for division " << (count + 1) << ": ";
        cin >>budgetAmount;
        divisions[count].addBudget(budgetAmount);

        // Get the request for the auxiliary office.
        cout << "Enter the budget request for the division's auxiliary office: ";
        cin >> budgetAmount;
        auxOffice[count].addBudget(budgetAmount, divisions[count]);
    }

    // Display the budget requests and corporate budget.
    cout << fixed << setprecision(2);
    cout << "\nHere are the division budget requests:\n";
    for (count = 0; count < NUM_DIVISIONS; count++) {
        cout << "\tDivision " << (count + 1) << "\t$ " << divisions[count].getDivisionBudget() << endl;
        cout << "\tAuxiliary office:\t$" << auxOffice[count].getDivisionBudget() << endl << endl;
    }
    cout << "\tTotal Budget Requests:\t$";
    cout << divisions[0].getCorpBudget() << endl;

    return 0;
}