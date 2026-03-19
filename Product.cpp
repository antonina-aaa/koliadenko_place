#include "Product.h"
#include "Store.h"

Product::Product(string n, float p)
{
	name = n;
	price = p;
}

Product::~Product()
{
	cout << "..." << endl;
}

string Product::Getname()
{
	return name;
}



float Product::Getprice()
{
	return price;
}
