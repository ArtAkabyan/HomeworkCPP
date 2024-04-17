#include <iostream>

int main() {
    int num = 1221;
    int originalNum = num;
    int reversedNum = 0;

    
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    
    if (originalNum == reversedNum) {
        std::cout << " 'num'  is a palindrome." ;
    } else {
        std::cout << " 'num'  is not a palindrome." ;
    }
    return 0;
}
