//
// Created by Yang on 8/16/25.
//
// Specification file for class Tree
#ifndef CPP_DATA_STRUCTURE_TREE_H
#define CPP_DATA_STRUCTURE_TREE_H
class Tree {
private:
    static int objectCount; // Static member variable.
public:
    // Constructor
    Tree() { objectCount++; }

    // Accessor function for objectCount
    int getObjectCount() const { return objectCount; }
};

// Definition of the static member variable , written outside the class.
int Tree::objectCount = 0;
#endif // CPP_DATA_STRUCTURE_TREE_H
