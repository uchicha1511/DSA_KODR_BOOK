#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int first = arr[0], second = arr[0];
    for (int x : arr) {
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x != first) {
            second = x;
        }
    }
    cout << "Second greatest element = " << second << endl;
    return 0;
}