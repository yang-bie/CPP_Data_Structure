//
// Created by Yang on 7/27/25.
//
// This program produces a sales report for DLC, Inc.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype
void calcSales(const int[], const double[], double[], int);
void dualSort(double[], int[], int);
void swap(double &, double &);
void swap(int &, int &);
void showOrder(const int[], const double[], int);
void showTotals(const int[], const double[], int);

int main() {
    // The number of products produced.
    const int NUM_PRODS = 9;

    // Array with product ID numbers
    int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922};

    // Array with number of units sold for each product
    int units[NUM_PRODS] = {842, 416, 127, 514, 437, 269, 97, 492, 212};

    // Array with product prices
    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};

    // Array to hold the computed sales amounts
    double sales[NUM_PRODS];

    // Calculate each product's sales
    calcSales(units, prices, sales, NUM_PRODS);

    // Sort the elements in the sales array in descending order and shuffle the ID numbers
    // in the id array to keep them in parallel.
    dualSort(sales, id, NUM_PRODS);

    // Set numeric output formatting
    cout << fixed << setprecision(2);

    // Display the products and sales amounts
    showOrder(id, sales, NUM_PRODS);

    // Display the total units and sales amounts.
    showTotals(units, sales, NUM_PRODS);

    return 0;
}

//************************************************************
// Definition of calcSales. Accepts units, prices, and sales
// arrays as arguments. The size of these arrays is passed
// into the size parameter. This function calculates each
// product's sales by multiplying its units sold by each
// unit's price. The result is stored in the sales array.
//************************************************************

void calcSales(const int units[], const double prices[], double sales[], int size) {
    for (int index = 0; index < size; index++) {
        sales[index] = units[index] * prices[index];
    }
}

//***************************************************************
// Definition of function dualSort. Accepts id and sales arrays
// as arguments. The size of these array is passed into size.
// This function performs a descending order selection sort on
// the sales array. The elements of the id array are exchanged
// identically as those of the sales array. size is the number
// of elements in each array.
//***************************************************************

void dualSort(double sales[], int prodNum[], int size) {
    for (int start = 0; start < (size - 1); start++) {
        double maxValue = sales[start];
        int maxIndex = start;
        for (int index = start + 1; index < size; index++) {
            if (sales[index] > maxValue) {
                maxValue = sales[index];
                maxIndex = index;
            }
            swap(sales[start], sales[maxIndex]);
            swap(prodNum[start], prodNum[maxIndex]);
        }
    }
}

//***************************************************************
// Definition of showOrder function. Accepts sales and id arrays
// as arguments. The size of these arrays is passed into size.
// The function first displays a heading, then sorted list of
// product numbers and sales.
//***************************************************************

void showOrder(const int prodNum[], const double sales[], int size) {
    cout << left << setw(16) << "Product Number" << setw(15) << "Product Sales" << endl;
    cout << "-------------------------------" << endl;
    for (int index = 0; index < size; index++)
        cout << left << setw(16) << prodNum[index] << setw(15) << sales[index] << endl;
}

//***************************************************************
// Definition of showTotal function. Accepts sales and units arrays
// as arguments. The size of these arrays is passed into size.
// The function first calculates the total units sold and the total
// sales. It then displays these amounts.
//***************************************************************

void showTotals(const int units[], const double sales[], int size) {
    double totalSales = 0.0;
    int totalUnits = 0;
    for (int index = 0; index < size; index++) {
        totalSales += sales[index];
        totalUnits += units[index];
    }
    cout << "Total units sold: " << totalUnits << endl;
    cout << "Total sales: " << totalSales << endl;
}

//***************************************************************
// The swap function swaps doubles a and b in memory.
//***************************************************************

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//***************************************************************
// The swap function swaps ints a and b in memory.
//***************************************************************

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}