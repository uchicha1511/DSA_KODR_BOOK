#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cin >> n;
    if (n < 2) isPrime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { isPrime = false; break; }
    }
    if (isPrime) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}