#include <iostream>
#include <vector>
#include <cmath>

void solveQ75() {
    std::vector<int> arr = {1, 2, 1, 2, 1, 3};
    int n = arr.size();
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n / 2; i++) leftSum += arr[i];
    for (int i = n / 2; i < n; i++) rightSum += arr[i];
    std::cout << "Q75 Value to add: " << std::abs(leftSum - rightSum) << std::endl;
}