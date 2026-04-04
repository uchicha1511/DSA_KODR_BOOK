#include <iostream>
#include <vector>
#include <unordered_map>

void solveQ78() {
    std::vector<int> nums = {3, 2, 3, 2, 2, 2};
    std::unordered_map<int, int> freq;
    for (int x : nums) freq[x]++;

    bool canDivide = true;
    for (auto const& [val, count] : freq) {
        if (count % 2 != 0) {
            canDivide = false;
            break;
        }
    }
    
    std::cout << "Q78 Can divide into equal pairs: " << (canDivide ? "Yes" : "No") << std::endl;
}