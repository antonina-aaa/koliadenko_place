#pragma once
using namespace std;

class Discount {
public:
    virtual double applyDiscount(double total) = 0;
    virtual ~Discount() {}
};

class PercentageDiscount : public Discount {
private:
    double percent;

public:
    PercentageDiscount(double percent);
    double applyDiscount(double total) override;
};

class FixedDiscount : public Discount {
private:
    double amount;

public:
    FixedDiscount(double amount);
    double applyDiscount(double total) override;
};