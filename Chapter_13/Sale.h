//
// Created by Yang on 8/12/25.
//
// Specification file foe the Sale class.
#ifndef CPP_DATA_STRUCTURE_SALE_H
#define CPP_DATA_STRUCTURE_SALE_H
class Sale {
private:
    double itemCost; // Cost of item
    double taxRate; // Sales tax rate
public:
    Sale(double cost, double rate = 0.05) {
        itemCost = cost;
        taxRate = rate;
    }

    double getItemCost() const { return itemCost; }
    double getTaxRate() const { return taxRate; }
    // void setItemCost(double cost) { itemCost = cost; }
    // void setTaxRate(double rate) { taxRate = rate; }
    double getTax() const { return itemCost * taxRate; }
    double getTotal() const { return (itemCost + getTax()); }
};

#endif // CPP_DATA_STRUCTURE_SALE_H
