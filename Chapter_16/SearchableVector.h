//
// Created by Yang on 8/22/25.
//

#ifndef CPP_DATA_STRUCTURE_SEARCHABLEVECTOR_H
#define CPP_DATA_STRUCTURE_SEARCHABLEVECTOR_H
#include "SimpleVector.h"

template<class T>
class SearchableVector : public SimpleVector<T> {
public:
    // Default constructor
    SearchableVector() : SimpleVector<T>() {};

    // Constructor
    SearchableVector(int size) : SimpleVector<T>(size) {};

    // Copy constructor
    SearchableVector(const SearchableVector &);

    // Accessor
    int findItem(const T) const;
};

template<class T>
SearchableVector<T>::SearchableVector(const SearchableVector &obj) : SimpleVector<T>(obj.size()) {
    for (int count = 0; count < this->size(); count++)
        this->operator[](count) = obj[count];
}

template<class T>
int SearchableVector<T>::findItem(const T item) const{
    for (int count = 0; count < this->size(); count++) {
        if (this->getElementAt(count) == item)
            return count;
    }
    return -1;
}

#endif // CPP_DATA_STRUCTURE_SEARCHABLEVECTOR_H
