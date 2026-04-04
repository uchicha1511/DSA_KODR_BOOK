#include <iostream>
#include <vector>

void sumAbsoluteDifferences() {
    std::vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += (long long)arr[i] * (2 * i - n + 1);
    }
    std::cout << "Sum of absolute differences: " << totalSum << std::endl;
}