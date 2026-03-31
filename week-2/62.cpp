#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, key;
    cin >> n >> key;
    vector<int> arr(n);
    int res = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == key) res = i;
    }
    cout << res << endl;
    return 0;
}