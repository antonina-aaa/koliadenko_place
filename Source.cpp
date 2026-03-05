#include <iostream>
#include "Store.h"
#include "Discount.h"

using namespace std;

int main() {

    Store petStore("Pet Store", "PET10");
    Store gameStore("Game Store", "GAME5");

    petStore.addProduct(Product("Dog Food", 500));
    petStore.addProduct(Product("Cat Toy", 150));
    petStore.addProduct(Product("Aquarium", 2000));

    gameStore.addProduct(Product("Gamepad", 1200));
    gameStore.addProduct(Product("Minecraft", 900));
    gameStore.addProduct(Product("Headset", 1500));

    int shopChoice;

    cout << "====== SELF CHECKOUT ======\n";
    cout << "1 - Pet Store\n";
    cout << "2 - Game Store\n";
    cin >> shopChoice;

    Store* selectedStore;

    if (shopChoice == 1)
        selectedStore = &petStore;
    else
        selectedStore = &gameStore;

    selectedStore->showProducts();

    PercentageDiscount percent10(10);
    FixedDiscount minus50(50);

    Discount* discount = nullptr;

    string code;
    cout << "\nEnter promo code: ";
    cin >> code;

    if (code == selectedStore->getPromoCode())
        discount = &percent10;

    Receipt receipt(discount);

    int choice;
    int quantity;

    char more = 'y';

    while (more == 'y') {

        cout << "Choose product number: ";
        cin >> choice;

        cout << "Quantity: ";
        cin >> quantity;

        receipt.addProduct(
            selectedStore->getProduct(choice - 1),
            quantity
        );

        cout << "Add more products? (y/n): ";
        cin >> more;
    }

    receipt.printReceipt();

    return 0;
}