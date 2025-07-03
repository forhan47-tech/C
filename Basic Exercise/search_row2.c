#include <stdio.h>

// Binary Search function
int binarySearch(int arr[], int cols, int target) {
    int left = 0, right = cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return 1; // Found
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0; // Not found
}

// Function to search which rows contain the target
void searchRowsBinary(int matrix[][4], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        if (binarySearch(matrix[i], cols, target)) {
            printf("Element %d found in row %d\n", target, i);
        }
    }
}

int main() {
    int matrix[3][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}};
    int target = 5;

    searchRowsBinary(matrix, 3, 4, target);
    return 0;
}
