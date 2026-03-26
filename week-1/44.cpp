#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1, guess;
    do {
        cin >> guess;
        if (guess > target) cout << "Lower" << endl;
        else if (guess < target) cout << "Higher" << endl;
    } while (guess != target);
    cout << "Correct!";
    return 0;
}