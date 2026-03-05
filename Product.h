#pragma once
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product();
    Product(string name, double price);

    string getName() const;
    double getPrice() const;
};