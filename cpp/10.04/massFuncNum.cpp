#include <iostream>

void findSumPair(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == num) {
                std::cout << "Pair found: " << arr[i] << " and " << arr[j] << std::endl;
                return;
            }
        }
    }
    std::cout << "No pair found for the given number." << std::endl;
}

int main() {
    int arr[] = {1, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    findSumPair(arr, size, target);

    return 0;
}