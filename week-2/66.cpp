#include <iostream>
#include <vector>
#include <unordered_map>

void countSubarrays() {
    std::vector<int> nums = {1, 2, 3, 7, 5};
    int target = 12;
    std::unordered_map<int, int> prevSums;
    prevSums[0] = 1; 

    int currentSum = 0;
    int count = 0;

    for (int num : nums) {
        currentSum += num;
        if (prevSums.find(currentSum - target) != prevSums.end()) {
            count += prevSums[currentSum - target];
        }
        prevSums[currentSum]++;
    }
    std::cout << "Count of subarrays: " << count << std::endl;
}
