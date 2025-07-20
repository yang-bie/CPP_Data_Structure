//
// Created by Yang on 7/8/25.
//
// This program calculates the amount of pay that
// will be contributed to a retirement plan if 5%,
// 7%, or 10% of monthly pay is withheld.
#include <iostream>
using namespace std;

int main() {
    double monthlyPay = 6000.0;

    double contribution = monthlyPay * 0.05;
    cout << "5 percent is $" << contribution
            << " per month.\n";

    contribution = monthlyPay * 0.07;
    cout << "7 percent is $" << contribution
            << " per month.\n";

    contribution = monthlyPay * 0.1;
    cout << "10 percent is $" << contribution
            << " per month.\n";

    return 0;
}
