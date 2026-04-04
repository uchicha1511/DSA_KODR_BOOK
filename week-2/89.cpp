#include <iostream>
#include <vector>
#include <algorithm>

void solveQ89() {
    std::vector<int> nums = {4, 1, 2, 3};
    std::vector<int> even, odd;
    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) even.push_back(nums[i]);
        else odd.push_back(nums[i]);
    }
    std::sort(even.begin(), even.end());
    std::sort(odd.begin(), odd.end(), std::greater<int>());
    
    for (int i = 0, e = 0, o = 0; i < nums.size(); i++) {
        if (i % 2 == 0) nums[i] = even[e++];
        else nums[i] = odd[o++];
    }
    std::cout << "Q89 Result: ";
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
}