#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    getline(cin, name);
    cin >> age;
    if (age >= 18) {
        cout << "Hello " << name << ", You are a valid voter." << endl;
    } else {
        cout << "Sorry " << name << ", you can't cast the vote." << endl;
        cout << "Try again after " << 18 - age << " years." << endl;
    }
    return 0;
}