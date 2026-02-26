#include "Product.h"
#include "Store.h"

Product::Product() {
    name = "";
    price = 0;
}

Product::Product(string name, double price) {
    this->name = name;
    this->price = price;
}

string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}
