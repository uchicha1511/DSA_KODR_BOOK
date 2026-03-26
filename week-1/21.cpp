#include <iostream>
using namespace std;

int main() {
    int units;
    cin >> units;
    double bill = 0;
    if (units <= 100) bill = units * 4.2;
    else if (units <= 200) bill = (100 * 4.2) + (units - 100) * 6.5;
    else bill = (100 * 4.2) + (100 * 6.5) + (units - 200) * 8.2;
    cout << bill;
    return 0;
}