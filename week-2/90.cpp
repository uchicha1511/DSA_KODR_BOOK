#include <iostream>
#include <vector>
#include <algorithm>

void solveQ90() {
    std::vector<int> nums = {1, 3, 5, 2, 4, 8, 2, 2};
    while (nums.size() > 1) {
        std::vector<int> next;
        for (int i = 0; i < nums.size() / 2; i++) {
            if (i % 2 == 0) next.push_back(std::min(nums[2 * i], nums[2 * i + 1]));
            else next.push_back(std::max(nums[2 * i], nums[2 * i + 1]));
        }
        nums = next;
    }
    std::cout << "Q90 Winner: " << nums[0] << std::endl;
}