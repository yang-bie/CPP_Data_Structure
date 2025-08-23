//
// Created by Yang on 8/22/25.
//
// This program demonstrates the bad_alloc exception.
#include <iostream>
#include <new>
using namespace std;

int main() {
    double *ptr = nullptr; // Pointer to double

    try {
        ptr = new double [1000];
    } catch (bad_alloc) {
        cout << "Insufficient memory.\n";
    }

    return 0;
}