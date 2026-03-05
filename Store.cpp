#include "Store.h"
#include <iostream>

Store::Store(string name, string promoCode) {
    this->name = name;
    this->promoCode = promoCode;
    productCount = 0;
}

void Store::addProduct(Product p) {
    products[productCount] = p;
    productCount++;
}

void Store::showProducts() {

    cout << "\nProducts in " << name << endl;

    for (int i = 0; i < productCount; i++) {
        cout << i + 1 << ". "
            << products[i].getName()
            << " - "
            << products[i].getPrice()
            << endl;
    }
}

Product Store::getProduct(int index) {
    return products[index];
}

string Store::getPromoCode() {
    return promoCode;
}

string Store::getName() {
    return name;
}