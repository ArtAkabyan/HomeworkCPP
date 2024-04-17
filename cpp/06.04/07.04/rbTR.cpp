#include <iostream>

int main() {
    int height;
    std::cout << " enter height: ";
    std::cin >> height;



    for (int i = 0; i < height; ++i) {            
        for (int j = i; j < height - 1; ++j)      
            std::cout << " ";
        for (int j = 0; j < 2 * i + 1; ++j)       
            std::cout << "*";
        std::cout << std::endl;                   
    }

    return 0;
}