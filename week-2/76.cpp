#include <iostream>
#include <vector>
#include <algorithm>

void solveQ76() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    int n = arr.size();
    std::sort(arr.begin(), arr.begin() + n/2);
    std::sort(arr.begin() + n/2, arr.end(), std::greater<int>());
    
    std::cout << "Q76 Result: ";
    for(int x : arr) std::cout << x << " ";
    std::cout << std::endl;
}