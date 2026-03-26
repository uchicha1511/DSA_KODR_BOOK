#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;
    int temp = n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    if (n == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}