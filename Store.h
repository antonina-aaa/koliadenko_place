#pragma once
#include "Receipt.h"

using namespace std;

class Store {
private:
    string name;
    string promoCode;

    Receipt* receipts[100];   // максимум 100 чеків
    int receiptCount;

public:
    Store(string name, string promoCode);

    string getPromoCode() const;
    string getName() const;

    void addReceipt(Receipt* receipt);
    void showAllReceipts();
};