#include <iostream>
using namespace std;
void print1DArray(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void reversePrint1DArray(int *array, int size) {
    for (int i = size - 1; i >= 0; --i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int findMin1DArray(int *array, int size) {
    int minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

int findMax1DArray(int *array, int size) {
    int maxVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

int searchIn1DArray(int *array, int size, int searchKey) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == searchKey) {
            return i; 
        }
    }
    return -1; 
}

void print2DArray(int **array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void reversePrint2DArray(int **array, int rows, int cols) {
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = cols - 1; j >= 0; --j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

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

bool searchIn2DArray(int **array, int rows, int cols, int searchKey) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] == searchKey) {
                return true; 
            }
        }
    }
    return false; 
}

int main() {
    const int size = 5;
    int array[size];

    std::cout << "Enter " << size << " elements for the 1D array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    std::cout << "1D Array: ";
    print1DArray(array, size);

    std::cout << "Reversed 1D Array: ";
    reversePrint1DArray(array, size);

    std::cout << "Minimum value in the 1D array: " << findMin1DArray(array, size) << std::endl;
    std::cout << "Maximum value in the 1D array: " << findMax1DArray(array, size) << std::endl;

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

    for (int i = 0; i < rows; ++i) {
        array2D[i] = new int[cols];
    }

    std::cout << "Enter " << rows * cols << " elements for the 2D array: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array2D[i][j];
        }
    }

    std::cout << "2D Array:" << std::endl;
    print2DArray(array2D, rows, cols);

    std::cout << "Reversed 2D Array:" << std::endl;
    reversePrint2DArray(array2D, rows, cols);

    std::cout << "Minimum value in the 2D array: " << findMin2DArray(array2D, rows, cols) << std::endl;
    std::cout << "Maximum value in the 2D array: " << findMax2DArray(array2D, rows, cols) << std::endl;

    int searchKey2D;
    std::cout << "Enter a number to search in the 2D array: ";
    std::cin >> searchKey2D;
    bool searchResult2D = searchIn2DArray(array2D, rows, cols, searchKey2D);
    if (searchResult2D) {
        std::cout << "Number found in the 2D array." << std::endl;
    } else {
        std::cout << "Number not found in the 2D array." << std::endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}
