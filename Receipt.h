#pragma once
#include "Product.h"
#include "Discount.h"

using namespace std;

class Receipt {
private:
    Product products[100];   // максимум 100 товарів
    int productCount;
    Discount* discount;

public:
    Receipt(Discount* discount);

    void addProduct(Product product);
    double calculateTotal();
    void printReceipt();
};