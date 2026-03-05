#pragma once
#include "Product.h"
#include "Receipt.h"

class Store {
private:
    string name;
    string promoCode;

    Product products[10];
    int productCount;

public:
    Store(string name, string promoCode);

    void addProduct(Product p);
    void showProducts();

    Product getProduct(int index);

    string getPromoCode();
    string getName();
};