#include <iostream>

int main() {
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4;
    int cols = 4;

    int row_start = 0;
    int row_end = rows - 1;
    int col_start = 0;
    int col_end = cols - 1;

    while (row_start <= row_end && col_start <= col_end) {
        for (int i = col_start; i <= col_end; ++i) {
            std::cout << array[row_start][i] << " ";
        }
        ++row_start;

        for (int i = row_start; i <= row_end; ++i) {
            std::cout << array[i][col_end] << " ";
        }
        --col_end;

        for (int i = col_end; row_start <= row_end && i >= col_start; --i) {
            std::cout << array[row_end][i] << " ";
        }
        --row_end;

        for (int i = row_end; col_start <= col_end && i >= row_start; --i) {
            std::cout << array[i][col_start] << " ";
        }
        ++col_start;
    }

    return 0;
}