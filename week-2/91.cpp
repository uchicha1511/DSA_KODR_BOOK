#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void solveQ91() {
    std::vector<int> seats = {3, 1, 5}, students = {2, 7, 4};
    std::sort(seats.begin(), seats.end());
    std::sort(students.begin(), students.end());
    int moves = 0;
    for (int i = 0; i < seats.size(); i++) {
        moves += std::abs(seats[i] - students[i]);
    }
    std::cout << "Q91 Moves: " << moves << std::endl;
}