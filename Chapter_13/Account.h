//
// Created by Yang on 8/12/25.
//
// Specification file for Account class.

#ifndef CPP_DATA_STRUCTURE_ACCOUNT_H
#define CPP_DATA_STRUCTURE_ACCOUNT_H
class Account {
private:
    double balance;
    double interestRate;
    double interest;
    int transactions;

public:
    Account(double bal = 0, double iRate = 0.045) {
        balance = bal;
        interestRate = iRate;
        interest = 0;
        transactions = 0;
    }

    void setInterestRate(double iRate) { interestRate = iRate; }
    void makeDeposit(double amount) { balance += amount; transactions++;}
    bool withdraw(double amount);
    void calcInterest();
    double getInterestRate() { return interestRate; }
    double getBalance() { return balance; }
    double getInterest() { return interest; }
    int getTransactions() { return transactions; }
};


#endif // CPP_DATA_STRUCTURE_ACCOUNT_H
