

#include <bits/stdc++.h>
void updateMultiplication() {
    std::vector<int> arr = {2, 3, 4, 5, 6};
    int n = arr.size();
    int prev = arr[0];
    arr[0] = arr[0] * arr[1];
    for (int i = 1; i < n - 1; i++) {
        int curr = arr[i];
        arr[i] = prev * arr[i + 1];
        prev = curr;
    }
    arr[n - 1] = prev * arr[n - 1];
    for (int x : arr) std::cout << x << " ";
    std::cout << std::endl;
}

int main()
{
    // std::cout<<"Hello World";
    updateMultiplication();
    return 0;
}