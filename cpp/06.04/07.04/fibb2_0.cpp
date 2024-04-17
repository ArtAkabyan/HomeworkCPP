#include <iostream>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main() {
    int num;
    std::cout << "enter yor num:: ";
    std::cin >> num;

    int fib1 = 1, fib2 = 1, fib3;
    std::cout << "tr Fib:" << std::endl;
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << fib1 << " ";
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;
        }
        std::cout << std::endl;
    }

    return 0;
}