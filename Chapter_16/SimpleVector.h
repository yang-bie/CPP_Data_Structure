//
// Created by Yang on 8/22/25.
//

#ifndef CPP_DATA_STRUCTURE_SIMPLEVECTOR_H
#define CPP_DATA_STRUCTURE_SIMPLEVECTOR_H
#include <iostream>
using namespace std;

template<class T>
class SimpleVector {
private:
    T *aptr; // To point to the allocated array
    int arraySize; // Number of elements in the array
    void memError() const; // Handles memory allocation errors
    void subError() const; // Handles subscripts out of range

public:
    // Default constructor
    SimpleVector() {
        aptr = nullptr;
        arraySize = 0;
    }

    // Constructor
    SimpleVector(int);

    // Copy constructor
    SimpleVector(const SimpleVector &);

    // Destructor
    ~SimpleVector();

    // Accessors
    int size() const { return arraySize; }

    T getElementAt(int) const;

    // Overloaded [] operator
    T &operator[](const int &);
};

template<class T>
void SimpleVector<T>::memError() const {
    cout << "ERROR: Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

template<class T>
void SimpleVector<T>::subError() const {
    cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}

template<class T>
SimpleVector<T>::SimpleVector(int size) {
    arraySize = size;

    // Allocate memory for the array.
    try {
        aptr = new T[arraySize]();
    } catch (bad_alloc) {
        memError();
    }

    // Initialize the array.
    // for (int count = 0; count < arraySize; count++)
    //     *(aptr + count) = 0;
}

template<class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
    // Copy the array size
    arraySize = obj.arraySize;

    // Allocate memory for the array.
    aptr = new T[arraySize];
    if (aptr == nullptr)
        memError();

    // Copy the element of obj's array
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
}

template<class T>
SimpleVector<T>::~SimpleVector() {
    if (arraySize > 0)
        delete[] aptr;
}

template<class T>
T SimpleVector<T>::getElementAt(int sub) const {
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}

template<class T>
T &SimpleVector<T>::operator[](const int &sub) {
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}

#endif // CPP_DATA_STRUCTURE_SIMPLEVECTOR_H
