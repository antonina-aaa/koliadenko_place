#pragma once
#include "Product.h"
class Accessories:public Product
{
public:
	Accessories(string n, float p);
	float Calculatediscountprice() override ;
    string Gettype() override;









};
