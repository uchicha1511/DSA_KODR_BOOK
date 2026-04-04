#include <iostream>
#include <vector>

void solveQ92() {
    std::vector<std::vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = mat.size(), sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];             // Primary
        sum += mat[i][n - 1 - i];     // Secondary
    }
    if (n % 2 != 0) sum -= mat[n/2][n/2];
    std::cout << "Q92 Diagonal Sum: " << sum << std::endl;
}