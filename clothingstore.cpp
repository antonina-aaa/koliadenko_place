#include <iostream>
using namespace std;

int main() {

    string items[] = { "T-shirt", "Jeans", "Jacket", "Sneakers", "Hoodie" };
    double prices[] = { 20.0, 45.0, 80.0, 60.0, 35.0 };

    int day, month;
    char dot;

    cout << "Enter date: ";
    cin >> day >> dot >> month;

    
    int discountIndex = (day + month) % 5;

    cout << "\n=== TODAY'S DISCOUNT ===\n";
    cout << "Discount product: " << items[discountIndex] << " (-10%)\n";

    cout << "\n=== STORE ===\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << items[i]
            << " - $" << prices[i];

        if (i == discountIndex) {
            cout << " (-10% TODAY!)";
        }

        cout << endl;
    }

    int choice;
    double total = 0;

    cout << "\nChoose item (0 to finish)\n";

    while (true) {
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0) break;

        if (choice >= 1 && choice <= 5) {

            double price = prices[choice - 1];

            
            if (choice - 1 == discountIndex) {
                price *= 0.9;
                cout << "Day discount applied! ";
            }

            cout << items[choice - 1] << " - $" << price << endl;

            total += price;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

 
    string promo;
    cout << "\nEnter promo code (or 'no'): ";
    cin >> promo;

    if (promo == "SALE10") {
        total *= 0.9;
        cout << "Promo -10% applied!\n";
    }
    else if (promo == "SALE20") {
        total *= 0.8;
        cout << "Promo -20% applied!\n";
    }
    else if (promo == "SUPER30") {
        total *= 0.7;
        cout << "Promo -30% applied!\n";
    }
    else if (promo != "no") {
        cout << "Invalid promo code!\n";
    }

    cout << "\nTOTAL: $" << total << endl;

    return 0;
}
