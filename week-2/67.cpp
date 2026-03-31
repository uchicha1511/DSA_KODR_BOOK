#include <iostream>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

void checkStrong(int n) {
    int temp = n, sum = 0;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    std::cout << n << (sum == n ? " is Strong" : " is not Strong") << std::endl;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    checkStrong(145);
    return 0;
}