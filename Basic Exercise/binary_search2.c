#include <stdio.h>

int searchSortedMatrix(int matrix[][4], int rows, int cols, int target) {
    int left = 0, right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / cols][mid % cols];

        if (midValue == target)
            return 1; // Found
        else if (midValue < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0; // Not found
}

int main() {
    int matrix[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    if (searchSortedMatrix(matrix, 3, 4, target))
        printf("Element found in the matrix.\n");
    else
        printf("Element not found in the matrix.\n");

    return 0;
}
