//
// Created by Yang on 8/12/25.
//
// This program a constructor's default argument.
#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main() {
    double cost; // To hold the item cost

    // Get the cost of the item.
    cout << "Enter the cost of the item: ";
    cin >> cost;

    // Create a Sale object.
    Sale itemSale(cost  );

    // Set numeric output formatting.
    cout << fixed << setprecision(2);

    // Display the sales tax and total.
    cout << "The amount of sales tax is $" << itemSale.getTax() << endl;
    cout << "The total of the sale is $" << itemSale.getTotal() << endl;

    return 0;
}