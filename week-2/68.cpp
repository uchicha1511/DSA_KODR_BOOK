#include <iostream>

void checkSpecial(int n) {
    int temp = n, sum = 0, prod = 1;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        prod *= digit;
        temp /= 10;
    }
    std::cout << n << (sum + prod == n ? " is Special" : " is not Special") << std::endl;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    checkSpecial(123);
    return 0;
}