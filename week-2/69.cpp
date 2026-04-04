#include <iostream>
#include <vector>

void concatenateArray() {
    std::vector<int> nums = {1, 2, 1};
    int n = nums.size();
    std::vector<int> ans(2 * n);

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    for (int x : ans) std::cout << x << " ";
    std::cout << std::endl;
}