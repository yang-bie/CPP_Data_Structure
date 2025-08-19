//
// Created by Yang on 8/17/25.
//

#ifndef CPP_DATA_STRUCTURE_TEXTBOOK_H
#define CPP_DATA_STRUCTURE_TEXTBOOK_H
#include <iostream>
#include <string>
using namespace std;

class TextBook {
private:
    string title;
    string author;
    string publisher;

public:
    TextBook() {
        title = "";
        author = "";
        publisher = "";
    }

    TextBook(string bTitle, string bAuthor, string bPublisher) {
        set(bTitle, bAuthor, bPublisher);
    }

    void set(string bTitle, string bAuthor, string bPublisher) {
        title = bTitle;
        author = bAuthor;
        publisher = bPublisher;
    }

    void print() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};
#endif // CPP_DATA_STRUCTURE_TEXTBOOK_H
