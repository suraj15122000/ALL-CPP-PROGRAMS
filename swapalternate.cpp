#include <iostream>

void reverseAlternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        int j = std::min(i + 1, size - 1);
        std::swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    reverseAlternate(arr, size);

    std::cout << "\nArray after reversing alternate elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
