#include "Accessories.h"

Accessories::Accessories(string n, float p) :Product(n, p)
{
    
}

float Accessories::Calculatediscountprice()
{
    return price*0.5;
}

string Accessories::Gettype()
{
    return "Kolidenko Accessories:";
}
