#include <iostream>

int main() {
    int heigth;
    std::cout << "enter heigth: ";
    std::cin >> heigth;

    for (int i = 0; i < heigth; ++i) {
        for (int j = 0; j < heigth - i ; ++j)
            std::cout << " ";
        for (int j = 0; j <= i; ++j)
            std::cout << "*";
        std::cout << std::endl;
    }

    return 0;
}