//
// Created by Yang on 8/12/25.
//
// This program demonstrates passing an argument to a constructor.
#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main() {
    const double TAX_RATE = 0.06; // 6 percent tax rate
    double cost; // To hold the item cost

    // Get the cost of the item.
    cout << "Enter the cost of the item: ";
    cin >> cost;

    // Create a Sale object.
    Sale itemSale(cost, TAX_RATE);

    // Set numeric output formatting.
    cout << fixed << setprecision(2);

    // Display the sales tax and total.
    cout << "The amount of sales tax is $" << itemSale.getTax() << endl;
    cout << "The total of the sale is $" << itemSale.getTotal() << endl;

    return 0;
}