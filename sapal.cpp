#include <iostream>
using namespace std;

void reverseAlternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        int j =(i + 1);
        if(j<size){
             swap(arr[i], arr[j]);
        }
       
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
