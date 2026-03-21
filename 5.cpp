#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = ++a;
    int c = a--;
    int d = --a;
    int e = a++;
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    return 0;
}