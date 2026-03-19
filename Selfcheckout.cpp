#include "Selfcheckout.h"
#include"Receipt.h"

double Selfcheckout::Selfservice(Store& store, Product* product[], int count, string promo)
{
    double total = 0;
    for (int i = 0; i < count; i++)
    {
        total += product[i]->Calculatediscountprice();
    }
    total = store.Discount(total,promo);
    int receiptnumber = store.Getnextnumber();
    Receipt::generateReceipt(store.Getname(), receiptnumber, product, count, total);
    return total;
}
