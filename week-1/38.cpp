#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int temp = n;
    while (temp > 0) {
        int d = temp % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    if (sum == n) cout << "Strong Number";
    else cout << "Not Strong";
    return 0;
}