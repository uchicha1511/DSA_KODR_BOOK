#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sq = (long long)n * n;
    bool isAuto = true;
    int temp = n;
    while (temp > 0) {
        if (temp % 10 != sq % 10) { isAuto = false; break; }
        temp /= 10;
        sq /= 10;
    }
    if (isAuto) cout << "Automorphic";
    else cout << "Not Automorphic";
    return 0;
}