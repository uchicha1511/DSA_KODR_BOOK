#include <iostream>
#include <vector>

void solveQ93() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};
    int r = matrix.size(), c = matrix[0].size();
    std::vector<std::vector<int>> trans(c, std::vector<int>(r));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            trans[j][i] = matrix[i][j];
        }
    }
    std::cout << "Q93 Transpose (first element): " << trans[0][0] << std::endl;
}