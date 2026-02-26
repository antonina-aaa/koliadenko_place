#include "Store.h"

Store::Store(string name, string promoCode) {
    this->name = name;
    this->promoCode = promoCode;
    receiptCount = 0;
}

string Store::getPromoCode() const {
    return promoCode;
}

string Store::getName() const {
    return name;
}

void Store::addReceipt(Receipt* receipt) {
    if (receiptCount < 100) {
        receipts[receiptCount] = receipt;
        receiptCount++;
    }
}

void Store::showAllReceipts() {
    cout << "Store: " << name << endl;
    cout << "Promo code: " << promoCode << endl << endl;

    for (int i = 0; i < receiptCount; i++) {
        receipts[i]->printReceipt();
    }
}