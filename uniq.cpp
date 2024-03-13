#include <iostream>
#include <unordered_map>

int findUniqueElement(int arr[], int size) {
    std::unordered_map<int, int> countMap;

    // Count the frequency of each element in the array
    for (int i = 0; i < size; i++) {
        countMap[arr[i]]++;
    }

    // Find the element with frequency 1
    for (int i = 0; i < size; i++) {
        if (countMap[arr[i]] == 1) {
            return arr[i];
        }
    }

    // Return -1 if no unique element is found
    return -1;
}

int main() {
    int arr[] = {2, 4, 7, 2, 4, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = findUniqueElement(arr, size);

    if (uniqueElement != -1) {
        std::cout << "Unique element: " << uniqueElement << std::endl;
    } else {
        std::cout << "No unique element found." << std::endl;
    }

    return 0;
}
