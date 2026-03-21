#include <iostream>
using namespace std;

int main() {
    char g;
    cin >> g;
    if (g == 'm' || g == 'M') cout << "Good Morning Sir";
    else if (g == 'f' || g == 'F') cout << "Good Morning Ma'am";
    else cout << "Wrong Input";
    return 0;
}