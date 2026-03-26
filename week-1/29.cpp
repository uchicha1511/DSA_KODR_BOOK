#include <iostream>
using namespace std;

int main() {
    int start, end, eSum = 0, oSum = 0;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) eSum += i;
        else oSum += i;
    }
    cout << "Even Sum: " << eSum << " Odd Sum: " << oSum;
    return 0;
}