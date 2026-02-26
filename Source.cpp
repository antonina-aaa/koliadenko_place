#include <iostream>
#include "Store.h"
#include "Discount.h"

using namespace std;

int main() {

    // Філії
    Store electronics("Electronics", "ELEC10");
    Store clothes("Clothes", "CLOTH5");

    // Знижки
    PercentageDiscount percent10(10);
    FixedDiscount minus100(100);

    // Чек 1
    Receipt receipt1(&percent10);
    receipt1.addProduct(Product("Laptop", 20000));
    receipt1.addProduct(Product("Mouse", 800));

    electronics.addReceipt(&receipt1);

    // Чек 2
    Receipt receipt2(&minus100);
    receipt2.addProduct(Product("Jacket", 3000));
    receipt2.addProduct(Product("Shoes", 2500));

    clothes.addReceipt(&receipt2);

    // Самокаса показує всі філії
    electronics.showAllReceipts();
    clothes.showAllReceipts();

    return 0;
}