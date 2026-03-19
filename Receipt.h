#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include "Product.h"

using namespace std;
class Receipt 
{
public:
    static void generateReceipt(string GetStore, int receiptnumber, Product* Product[], int count, float total);
    
};
