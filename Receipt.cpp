#include "Receipt.h"

Receipt::Receipt(Discount* discount) {
    this->discount = discount;
    productCount = 0;
}

void Receipt::addProduct(Product product) {
    if (productCount < 100) {
        products[productCount] = product;
        productCount++;
    }
}

double Receipt::calculateTotal() {
    double total = 0;

    for (int i = 0; i < productCount; i++) {
        total += products[i].getPrice();
    }

    if (discount != nullptr) {
        total = discount->applyDiscount(total);
    }

    return total;
}

void Receipt::printReceipt() {
    cout << "----- RECEIPT -----" << endl;

    for (int i = 0; i < productCount; i++) {
        cout << products[i].getName()
            << " - "
            << products[i].getPrice()
            << endl;
    }

    cout << "Total: " << calculateTotal() << endl;
    cout << "-------------------" << endl << endl;
}