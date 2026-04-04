#include <iostream>
#include <vector>
#include <algorithm>

void solveQ88() {
    int num = 2932;
    std::vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    std::sort(digits.begin(), digits.end());

 int num1 = 0, num2 = 0;    
    for(int i=0;i<digits.size();i++) {
        
        if(i%2==0){
            num1=num1*10+digits[i];
        }
        else{
            num2=num2*10+digits[i];
        }
    }
     std::cout << "Q88 Minimum Sum: " << num1 + num2 << std::endl;
}