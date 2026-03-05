#pragma once
#include "Product.h"
#include "Discount.h"
#include <iostream>

using namespace std;

class Receipt {
private:
    Product products[100];
    int quantities[100];
    int productCount;
    Discount* discount;

public:
    Receipt(Discount* discount);

    void addProduct(Product product, int quantity);
    double calculateTotal();
    void printReceipt();
};