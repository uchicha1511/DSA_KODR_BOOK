#include <iostream>
#include <vector>

void solveQ85() {
    std::vector<int> nums = {2, 4, 1, 1, 6, 5};
    int n = nums.size();
    int count = 0;
    int i=0;
    int j=1;
    while(j<n-1){
        if((nums[i]<nums[j] && nums[j]>nums[j+1]) || (nums[i]>nums[j] && nums[j]<nums[j+1])){
            count++;
            i=j;
        }
        j++;
    }
    std::cout << "Q85 Hills and Valleys: " << count << std::endl;
}