//
// Created by Yang on 7/30/25.
//
// This program shows the donations made to the United Cause
// by the employees of CK Graphics, Inc. It displays
// the donations in order from lowest to highest
// and in the original order they were received.
#include <iostream>
using namespace std;

// Function prototype
void arrSelectionSort(int *[], int);
void showArray(const int[], int);
void showArrPtr(int *[], int);
int main() {
    const int NUM_DONATIONS = 15; // Number of donations

    // An array containing the donation amounts.
    int donations[NUM_DONATIONS] = {5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10};

    // An array of pointers to int
    int *arrPtr[NUM_DONATIONS] = {nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};

    // Each element of arrPtr is a pointer to int. Make each element point to an element in the donations array.
    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];

    // Sort the elements of the array of pointers.
    arrSelectionSort(arrPtr, NUM_DONATIONS);

    // Display the donations using the array of pointers. This will display them in sorted order.
    showArrPtr(arrPtr, NUM_DONATIONS);

    // Display the donations in their original order.
    cout << "The donations, in their original order, are: \n";
    showArray(donations, NUM_DONATIONS);

    return 0;
}

//****************************************************************
// Definition of function arrSelectionSort.
// This function performs an ascending order selection sort on
// arr, which is an array of pointers. Each element of array
// points to an element of a second array. After the sort,
// arr will point to the elements of the second array in
// ascending order.
//****************************************************************

void arrSelectionSort(int *arr[], int size) {
    for (int start = 0; start < (size - 1); start++) {
        int *minValue = arr[start];
        int minIndex = start;
        for (int index = start + 1; index < size; index++) {
            if (*(arr[index]) < *minValue) {
                minValue = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[start];
        arr[start] = minValue;
    }
}

//

void showArray(const int arr[], int size) {
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl << endl;
}

void showArrPtr(int *arr[], int size) {
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl << endl;
}
