#include <iostream>
#include <vector>
#include <algorithm>

void solveQ87() {
    std::vector<int> gain = {-5, 1, 5, 0, -7};
    int current = 0;
    int maxAlt = 0;
    for (int g : gain) {
        current += g;
        maxAlt = std::max(maxAlt, current);
    }
    std::cout << "Q87 Highest Altitude: " << maxAlt << std::endl;
}