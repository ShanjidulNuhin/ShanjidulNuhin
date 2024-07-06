#include <iostream>
#include <vector>
#include <algorithm>

// Function to perform counting sort on a vector
void countingSort(std::vector<int>& arr) {
    // Find the maximum element in the array
    int maxElement = *std::max_element(arr.begin(), arr.end());

    // Create a count array to store the count of each unique element
    std::vector<int> count(maxElement + 1, 0);

    // Store the count of each element in the count array
    for (int num : arr) {
        count[num]++;
    }

    // Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i <= maxElement; ++i) {
        while (count[i]-- > 0) {
            arr[index++] = i;
        }
    }
}

int main() {
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    countingSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

