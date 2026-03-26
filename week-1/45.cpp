#include <iostream>
using namespace std;

int main() {
    int choice, qty, total = 0;
    do {
        cin >> choice;
        if (choice == 0) break;
        cin >> qty;
        if (choice == 1) total += 50 * qty;
        else if (choice == 2) total += 30 * qty;
    } while (choice != 0);
    cout << "Bill: " << total;
    return 0;
}