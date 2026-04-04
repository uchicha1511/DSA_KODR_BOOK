#include <iostream>
#include <vector>
#include <unordered_set>

void solveQ79_Set() {
    std::vector<int> nums = {1, 3, 2, 1, 3, 2, 2};
    std::unordered_set<int> waitingRoom;
    int totalPairs = 0;

    for (int x : nums) {
        if (waitingRoom.count(x)) {
            totalPairs++;
            waitingRoom.erase(x); // Pair formed, remove it
        } else {
            waitingRoom.insert(x); // No pair yet, wait
        }
    }

    int leftoverElements = waitingRoom.size();

    std::cout << "Q79 Max Pairs (Set): " << totalPairs << std::endl;
    std::cout << "Q79 Leftover: " << leftoverElements << std::endl;
}