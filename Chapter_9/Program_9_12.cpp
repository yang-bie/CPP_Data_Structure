//
// Created by Yang on 7/28/25.
//
// This Program demonstrates that a pointer may be used as a
// parameter to accept the address of an array.
#include <iomanip>
#include <iostream>
#include <set>
using namespace std;

// Function prototype
void getSales(double *, int);
double totalSales(double *, int);

int main() {
    const int QTRS = 4;
    double sales[QTRS];

    // Get the sales for all quarters.
    getSales(sales, QTRS);

    // Set numeric output formatting
    cout << fixed << setprecision(2);

    // Display the total sales for the year
    cout << "The total sales for thr year are $" << totalSales(sales, QTRS) << endl;
    return 0;
}

// Definition of getSales.

void getSales(double *arr, int size) {
    for (int count = 0; count < size; count++) {
        cout << "Enter the sales figure for quarter ";
        cout << (count + 1) << ": ";
        cin >> arr[count];
    }
}

// Definition of totalSales.

double totalSales(double *arr, int size) {
    double sum = 0.0;

    for (int count = 0; count < size; count++) {
        sum += *arr;
        arr++;
    }
    return sum;
}
