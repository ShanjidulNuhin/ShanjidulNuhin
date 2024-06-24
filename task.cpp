#include <iostream>

// Function to print a 1D array
void print1DArray(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// Function to reverse print a 1D array
void reversePrint1DArray(int *array, int size) {
    for (int i = size - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// Function to find the minimum value in a 1D array
int findMin1DArray(int *array, int size) {
    int minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

// Function to find the maximum value in a 1D array
int findMax1DArray(int *array, int size) {
    int maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

// Function to search for a key in a 1D array
int searchIn1DArray(int *array, int size, int searchKey) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == searchKey) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function to print a 2D array
void print2DArray(int **array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to reverse print a 2D array
void reversePrint2DArray(int **array, int rows, int cols) {
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = cols - 1; j >= 0; --j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to find the minimum value in a 2D array
int findMin2DArray(int **array, int rows, int cols) {
    int minVal = array[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] < minVal) {
                minVal = array[i][j];
            }
        }
    }
    return minVal;
}

// Function to find the maximum value in a 2D array
int findMax2DArray(int **array, int rows, int cols) {
    int maxVal = array[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
            }
        }
    }
    return maxVal;
}

// Function to search for a key in a 2D array
bool searchIn2DArray(int **array, int rows, int cols, int searchKey) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] == searchKey) {
                return true; // Return true if found
            }
        }
    }
    return false; // Return false if not found
}

int main() {
    // 1D Array
    const int size = 5;
    int array[size];

    // Input array elements
    std::cout << "Enter " << size << " elements for the 1D array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // Print the 1D array
    std::cout << "1D Array: ";
    print1DArray(array, size);

    // Reverse print the 1D array
    std::cout << "Reversed 1D Array: ";
    reversePrint1DArray(array, size);

    // Find minimum and maximum in the 1D array
    std::cout << "Minimum value in the 1D array: " << findMin1DArray(array, size) << std::endl;
    std::cout << "Maximum value in the 1D array: " << findMax1DArray(array, size) << std::endl;

    // Search for a number in the 1D array
    int searchKey1D;
    std::cout << "Enter a number to search in the 1D array: ";
    std::cin >> searchKey1D;
    int searchResult1D = searchIn1DArray(array, size, searchKey1D);
    if (searchResult1D != -1) {
        std::cout << "Number found at index " << searchResult1D << " in the 1D array." << std::endl;
    } else {
        std::cout << "Number not found in the 1D array." << std::endl;
    }

    // 2D Array
    const int rows = 3;
    const int cols = 3;
    int **array2D = new int*[rows];

    // Allocate memory for the 2D array
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new int[cols];
    }

    // Input array elements for the 2D array
    std::cout << "Enter " << rows * cols << " elements for the 2D array: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array2D[i][j];
        }
    }

    // Print the 2D array
    std::cout << "2D Array:" << std::endl;
    print2DArray(array2D, rows, cols);

    // Reverse print the 2D array
    std::cout << "Reversed 2D Array:" << std::endl;
    reversePrint2DArray(array2D, rows, cols);

    // Find minimum and maximum in the 2D array
    std::cout << "Minimum value in the 2D array: " << findMin2DArray(array2D, rows, cols) << std::endl;
    std::cout << "Maximum value in the 2D array: " << findMax2DArray(array2D, rows, cols) << std::endl;

    // Search for a number in the 2D array
    int searchKey2D;
    std::cout << "Enter a number to search in the 2D array: ";
    std::cin >> searchKey2D;
    bool searchResult2D = searchIn2DArray(array2D, rows, cols, searchKey2D);
    if (searchResult2D) {
        std::cout << "Number found in the 2D array." << std::endl;
    } else {
        std::cout << "Number not found in the 2D array." << std::endl;
    }

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}
