#include <iostream>
using namespace std;

int main() {
    double amount;
    cin >> amount;
    if (amount > 1000) cout << amount * 0.9;
    else cout << amount;
    return 0;
}