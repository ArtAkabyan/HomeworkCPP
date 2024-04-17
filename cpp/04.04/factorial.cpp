#include <iostream>

int main() {
    int n;
    int factorial = 1;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " is: " << factorial;
    
    } else {
        std::cout << "Factorial is not defined for negative numbers." ;
    }
         

    return 0;
}