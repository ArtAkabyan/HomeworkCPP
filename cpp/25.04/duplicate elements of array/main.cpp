#include <iostream>

void duplicateElements(int* arr, int size) {
    for (int* ptr = arr; ptr < arr + size; ++ptr) {
        *(ptr + size) = *ptr; 
    }
}

int main() {
    const int size = 5;
    int originalArray[size] = {1, 2, 3, 4, 5}; 
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;
    
    duplicateElements(originalArray, size);
    for (int i = 0; i < size * 2; ++i) {
        std::cout << originalArray[i] << " ";
    }
   

    return 0;
}
