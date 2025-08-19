//
// Created by Yang on 8/17/25.
//

#ifndef CPP_DATA_STRUCTURE_STOCKPURCHASE_H
#define CPP_DATA_STRUCTURE_STOCKPURCHASE_H
#include "Stock.h"

class StockPurchase {
private:
    Stock stock;
    int shares;

public:
    // The default constructor sets shares to 0. The stock
    // object is initialized by its default constructor.
    StockPurchase() { shares = 0; }

    // Constructor
    StockPurchase(const Stock &obj, int numShares) {
        stock = obj;
        shares = numShares;
    }

    // Accessor function
    double getCost() const { return shares * stock.getSharePrice(); }
};
#endif // CPP_DATA_STRUCTURE_STOCKPURCHASE_H
