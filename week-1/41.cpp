#include <iostream>
using namespace std;

int main() {
    int ch;
    double a, b;
    do {
        cin >> a >> b >> ch;
        switch (ch) {
            case 1: cout << a + b << endl; break;
            case 2: cout << a - b << endl; break;
            case 3: cout << a * b << endl; break;
            case 4: cout << a / b << endl; break;
        }
    } while (ch != 0);
    return 0;
}