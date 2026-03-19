#pragma once
#include "Store.h"
#include"Product.h"
class Selfcheckout
{
public:
	static double Selfservice(Store& store, Product* product[], int count, string promo);


};