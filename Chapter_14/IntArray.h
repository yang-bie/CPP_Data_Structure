//
// Created by Yang on 8/17/25.
//
// Specification file for IntArray class.
#ifndef CPP_DATA_STRUCTURE_INTARRAY_H
#define CPP_DATA_STRUCTURE_INTARRAY_H

class IntArray {
private:
    int *aptr; // Pointer to the array
    int arraySize; // Holds the array size
    void subscriptError(); // Handles invalid subscripts
public:
    IntArray(int); // Constructor
    IntArray(const IntArray &); // Copy constructor
    ~IntArray(); // Destructor

    int size() const { return arraySize; }

    const IntArray operator=(const IntArray &);
    int &operator[](const int &);
};
#endif // CPP_DATA_STRUCTURE_INTARRAY_H
