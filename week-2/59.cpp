#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }
    for (int x : b) cout << x << " ";
    return 0;
}