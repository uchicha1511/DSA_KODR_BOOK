#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, r, t;
    cin >> p >> r >> t;
    double amount = p * pow((1 + r / 100), t);
    double ci = amount - p;
    cout << ci << endl;
    return 0;
}