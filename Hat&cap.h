#pragma once
#include "Product.h"
class HatCap :public Product
{
public:
	HatCap(string n, float p);
	float Calculatediscountprice() override;
	string Gettype() override;

};
