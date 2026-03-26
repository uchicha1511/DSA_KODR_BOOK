#include <iostream>
using namespace std;

int main() {
    int a, b;
    long long res = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++) res *= a;
    cout << res;
    return 0;
}