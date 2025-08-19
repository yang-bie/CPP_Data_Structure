//
// Created by Yang on 8/17/25.
//

#ifndef CPP_DATA_STRUCTURE_STOCK_H
#define CPP_DATA_STRUCTURE_STOCK_H
#include <string>
using namespace std;

class Stock {
private:
    string symbol;
    double sharePrice;

public:
    // Default constructor
    Stock() { set("", 0); }

    // Constructor
    Stock(const string sym, double price) { set(sym, price); }

    // Copy constructor
    Stock(const Stock &obj) { set(obj.symbol, obj.sharePrice); }

    // Mutator function
    void set(string sym, double price) {
        symbol = sym;
        sharePrice = price;
    }

    // Accessor function
    string getSymbol() const { return symbol; }
    double getSharePrice() const { return sharePrice; }
};

#endif // CPP_DATA_STRUCTURE_STOCK_H
