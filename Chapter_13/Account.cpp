//
// Created by Yang on 8/12/25.
//
// Implementation file for Account class.
#include "Account.h"
#include <iostream>
using namespace std;

bool Account::withdraw(double amount)
{
    if (amount <= balance) {
        balance -= amount;
        transactions++;
        return true;
    } else {
        cout << "Error withdraw amount.\n";
        return false;
    }
}

void Account::calcInterest() {
    interest = balance * interestRate;
    balance += interest;
}
