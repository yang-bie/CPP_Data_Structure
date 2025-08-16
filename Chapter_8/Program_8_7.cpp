//
// Created by Yang on 7/27/25.
//
// This program demonstrates how to sort and search a
// string vector using selection sort and binary search.
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function prototype
void selectionSort(vector<string> &);
void swap(string &, string &);
int binarySearch(const vector<string> &, string);

int main() {
    string searchValue; // Value to search
    int position; // Position of found value

    // Define a vector of strings.
    vector<string> names{"Lopez",
                         "Smith",
                         "Pike",
                         "Jones",
                         "Abernathy",
                         "Hall",
                         "Wilson",
                         "Kimura",
                         "Alvarado",
                         "Harrison",
                         "Geddes",
                         "Irvine"};

    // Sort the vector.
    selectionSort(names);

    // Display the vector's elements.
    cout << "Here are the sorted names: \n";
    for (auto element: names)
        cout << element << endl;
    cout << endl;

    // Search for a name.
    cout << "Enter a name to search for: ";
    getline(cin, searchValue);
    position = binarySearch(names, searchValue);

    // Display the results.
    if (position != -1)
        cout << "That name is found at position " << position << endl;
    else
        cout << "That name is not found.\n";

    return 0;
}

// Definition of function selectionSort

void selectionSort(vector<string> &v) {
    for (int start = 0; start < (v.size() - 1); start++) {
        string minValue = v[start];
        int minIndex = start;
        for (int index = start + 1; index < v.size(); index++) {
            if (v[index] < minValue) {
                minValue = v[index];
                minIndex = index;
            }
        }
        swap(v[start], v[minIndex]);
    }
}

// Definition of function binarySearch

int binarySearch(const vector<string> &v, string str) {
    int first = 0;
    int last = v.size() - 1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (v[middle] == str) {
            found = true;
            position = middle;
        } else if (v[middle] > str)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}

// The swap function

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}
