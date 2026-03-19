#include "Store.h"

Store::Store(string n, string p, float d)
{
	name = n;
	promocode = p;
	discountprom = d;

}
float Store::Discount(double total, string Enterpromo)
{
	if (Enterpromo == promocode)
	{
		return total * (1 - discountprom / 100);
	}
	return total;
}
string Store::Getname()
{
	return name;
}
int Store::Getnextnumber()
{
	return receiptnumber++;
}
