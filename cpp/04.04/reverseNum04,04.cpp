#include <iostream>

int main() {
    int num = 12345;
    int reverse = 0;

    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    std::cout << "Reversed number: " << reverse;

    return 0;
}
