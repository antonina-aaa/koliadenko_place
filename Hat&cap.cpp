#include "Hat&cap.h"
HatCap::HatCap(string n, float p) :Product(n, p)
{
   
}

float HatCap::Calculatediscountprice()
{
    return price*0.3;
}

string HatCap::Gettype()
{
    return "Kolidenko hat's:";
}
