#include "Receipt.h"

void Receipt::generateReceipt(string GetStore, int receiptnumber, Product* Product[], int count, float total)
{
    string filepath = GetStore + "_receipt" + to_string(receiptnumber) + ".txt";
    ofstream file(filepath);
    file << GetStore << endl;
    for (int i = 0; i < count; i++)
    {
        file << Product[i]->Getname()
            << Product[i]->Gettype()
            << Product[i]->Calculatediscountprice() << "grn";
    }
    file << "Total" << total << "grn";
    file.close();

}
