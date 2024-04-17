#include <iostream>

int main() {
    int array[3][4] = {
        {20, 15, 30, 2},
        {2, 3, 5, 30},
        {6, 7, 6, 8}
    };

 
    bool visited[101] = {false}; 

    std::cout << "Неповторяющиеся элементы массива:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (!visited[array[i][j]]) { 
                std::cout << array[i][j] << " ";
                visited[array[i][j]] = true;
            }
        }
    }
    std::cout << std::endl;

    return 0;
}