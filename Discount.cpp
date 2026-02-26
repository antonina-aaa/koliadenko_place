#include "Discount.h"

PercentageDiscount::PercentageDiscount(double percent) {
    this->percent = percent;
}

double PercentageDiscount::applyDiscount(double total) {
    return total - (total * percent / 100.0);
}

FixedDiscount::FixedDiscount(double amount) {
    this->amount = amount;
}

double FixedDiscount::applyDiscount(double total) {
    return total - amount;
}