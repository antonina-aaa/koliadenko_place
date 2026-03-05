#include "Receipt.h"

Receipt::Receipt(Discount* discount) {
    this->discount = discount;
    productCount = 0;
}

void Receipt::addProduct(Product product, int quantity) {
    products[productCount] = product;
    quantities[productCount] = quantity;
    productCount++;
}

double Receipt::calculateTotal() {

    double total = 0;

    for (int i = 0; i < productCount; i++) {
        total += products[i].getPrice() * quantities[i];
    }

    if (discount != nullptr) {
        total = discount->applyDiscount(total);
    }

    return total;
}

void Receipt::printReceipt() {

    cout << "\n======= RECEIPT =======\n";

    for (int i = 0; i < productCount; i++) {
        cout << products[i].getName()
            << " x" << quantities[i]
            << " = "
            << products[i].getPrice() * quantities[i]
            << endl;
    }

    cout << "-----------------------\n";
    cout << "TOTAL: " << calculateTotal() << endl;
    cout << "=======================\n\n";
}