#pragma once
#include <string>
#include <iostream>
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