//
// Created by Yang on 8/12/25.
//
// This program demonstrates the Account class.
#include <cctype>
#include <iomanip>
#include <iostream>
#include "Account.h"
using namespace std;

// Function prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main() {
    Account savings;
    char choice;

    // Set numeric output formatting.
    cout << fixed << setprecision(2);

    do {
        // Display the menu and get valid selection.
        displayMenu();
        cin >> choice;
        while (toupper(choice) < 'A' || toupper(choice) > 'G') {
            cout << "Please make a choice in the range of A through G";
            cin >> choice;
        }

        // Process the user's menu selection.
        switch (toupper(choice)) {
            case 'A':
                cout << "The current balance is $" << savings.getBalance() << endl;
                break;
            case 'B':
                cout << "There have been " << savings.getTransactions() << " transactions.\n";
                break;
            case 'C':
                cout << "Interest earned for this period: $" << savings.getInterest() << endl;
            case 'D':
                makeDeposit(savings);
                break;
            case 'E':
                withdraw(savings);
                break;
            case 'F':
                savings.calcInterest();
                cout << "Interest added.\n";
                break;
            default:
                cout << "Invalid selection, please select again.\n";
        }
    } while (toupper(choice) != 'G');
}

//*************************************************************
// Definition of displayMenu function. This function
// displays the user's menu on the screen.
//*************************************************************

void displayMenu() {
    cout << "\n                Menu\n";
    cout << "----------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

//*************************************************************
// Definition of makeDeposit function. This function accepts
// a reference to Account object. The user is prompted for
// the dollar amount of the deposit, and the makeDeposit
// member of the Account object is called.
//*************************************************************

void makeDeposit(Account &acnt) {
    double dollars;

    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}

//*************************************************************
// Definition of withdraw function. This function accepts
// a reference to an Account object. The user is prompted for
// the dollar amount of the withdrawal, and the withdraw
// member of the Account is then called.
//*************************************************************

void withdraw(Account &acnt) {
    double dollars;

    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;
    cin.ignore();
    if (!acnt.withdraw(dollars)) {
        cout << "ERROR: Withdrawal amount too large.\n\n";
    };
}
