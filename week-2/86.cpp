#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For std::gcd

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
void solveQ86() {
    std::vector<int> nums = {2, 5, 6, 9, 10};
    int minVal = *std::min_element(nums.begin(), nums.end());
    int maxVal = *std::max_element(nums.begin(), nums.end());
    std::cout << "Q86 GCD: " << gcd(minVal, maxVal) << std::endl;
}