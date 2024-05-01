#include <iostream>

int findEvenMultiplier(const int* arr, int size) {
    int multiplier = 1;
    for (const int* ptr = arr; ptr < arr + size; ++ptr) {
        if (*ptr % 2 == 0) {
            multiplier *= *ptr;
        }
    }
    return multiplier;
}
int main() {
    const int size = 5;
    int originalArray[size] = {2, 3, 6, 8, 10}; 
    
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;
    int evenMultiplier = findEvenMultiplier(originalArray, size);
    std::cout << "Multiplier of even numbers: " << evenMultiplier << std::endl;
    return 0;
}