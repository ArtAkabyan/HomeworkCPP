#include <iostream>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;


    int a = 1, b = 1;
    std::cout << "The Fibonacci sequence for" << n << " elements: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        int temp = a;
        a = b;
        b += temp;
    }

    std::cout << std::endl;
    std::cout << "Representation of the Fibonacci sequence in the form of a triangle:" << std::endl;
    int prev_a = 0, prev_b = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << prev_b << " ";
            int temp = prev_a;
            prev_a = prev_b;
            prev_b += temp;
        }
        std::cout << std::endl;
    }

    return 0;
}