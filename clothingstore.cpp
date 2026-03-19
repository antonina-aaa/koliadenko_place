#include <iostream>
using namespace std;

int main() {

    string items[] = { "T-shirt", "Jeans", "Jacket", "Sneakers", "Hoodie" };
    double prices[] = { 20.0, 45.0, 80.0, 60.0, 35.0 };

    int choice;
    double total = 0;

    cout << "=== CLOTHING STORE ===" << endl;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << items[i] << " - $" << prices[i] << endl;
    }

    cout << endl;
    cout << "Choose an item (0 to finish shopping)" << endl;

    while (true) {
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        if (choice >= 1 && choice <= 5) {

            cout << "You selected: " << items[choice - 1]
                << " - $" << prices[choice - 1] << endl;

            total += prices[choice - 1];
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    cout << endl;
    cout << "Total price: $" << total << endl;

    return 0;
}