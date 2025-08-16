//
// Created by Yang on 7/27/25.
//
// Demetris Leadership Center (DLC) product lookup program
// This program allows the user to enter a product number
// and then displays the title, description , and price of
// that product.
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int getProdNum();
int binarySearch(const int[], int, int);
void displayProd(const string[], const string[], const double[], int);

// Global constants
const int NUM_PRODS = 9;          // Number of products produced
const int MIN_PRODNUM = 914;      // The lowest product number
const int MAX_PRODNUM = 922;      // The highest product number

int main() {
    int id;                 // Hold the id for search
    int results;            // Hold the search result
    char again;             // Hold a Y or N answer

    string title[NUM_PRODS] = {"Six Steps to Leadership", "Six Steps to Leadership",
                               "The Road to Excellence", "Seven Lessons of Quality",
                               "Seven Lessons of Quality", "Seven Lessons of Quality"
                                 "Teams Are Mad, Not Born", "Leadership for the Future",
                               "Leadership for the Future"};

    string description[NUM_PRODS] = {"Book", "AudioCD", "DVD", "Book", "Audio CD"
                                       "DVD", "Book", "Book", "Audio CD"};

    int prodNum[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922};

    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95};

    do {
        // Get the desired product number.
        id = getProdNum();

        // Search for the product number
        results = binarySearch(prodNum, NUM_PRODS, id);

        // Display the results of the search
        if (results == -1)
            cout << "That product number was not found.\n";
        else
            displayProd(title, description, prices, results);

        // Does the user want to do this again?
        cout << "Would you like to look up another product? (Y/N)";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    /*// Call function to prompt user to enter search id
    id = getProdNum();

    // Call function to search the id in the array
    results = binarySearch(prodNum, NUM_PRODS, id);

    // Display the relevant data about the search id
    displayProd(title, description, prices, results);*/
    return 0;
}

//***************************************************
// Definition of getProdNum function
// The getProdNum function asks the user to enter a
// product number. The input is validated, and when
// a valid number is entered, it is returned.
//***************************************************

int getProdNum() {
    int id;
    cout << "Enter the Product Number to search for: ";
    cin >> id;

    while ( id < MIN_PRODNUM || id > MAX_PRODNUM) {
        cout << "This ID is invalid. Please enter a valid ID: ";
        cin >> id;
    }

    return id;
}

//**************************************************************
// Definition of binarySearch function
// The binarySearch function performs a binary search on an
// integer array. proNum, which has a maximum of size elements
//, is searched for the number stored in searchID. If the
// number is found. its array subscript is returned. Otherwise
// -1 is returned indicating the value was not in the array.
//**************************************************************

int binarySearch(const int prodNum[], int size, int searchID) {
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last) {
        middle = (first + last) / 2;

        if (prodNum[middle] == searchID) {
            position = middle;
            found = true;
        } else if (prodNum[middle] > searchID)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}

//**************************************************************
// Definition of function displayProd
// This function displayProd accepts three arrays and an int
// as its arguments. It displays the information in each array
// contained at teh subscript.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void displayProd(const string title[], const string desc[], const double prices[], int id) {
    cout << left << setw(28) << "Product Tile" << setw(23) << "Product Description"
    << setw(18) << "Product Number" << setw(14) << "Unit Price" << endl;
    cout << left << setw(28) << title[id] << setw(23) << desc[id]
    << setw(18) << id << setw(14) << prices[id] << endl;
}
