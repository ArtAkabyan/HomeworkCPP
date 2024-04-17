#include <iostream>

int main() {
   
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            array1[i][j] += array2[i][j];
            std::cout << array1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}