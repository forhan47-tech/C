#include <stdio.h>

int main() {
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Example matrix
    int rows = 3, cols = 3; // Matrix dimensions


    int rowSum[100] = {0}, colSum[100] = {0}; // Initialize sums to 0

    // Calculate row sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j]; // Sum up each row
        }
    }

    // Calculate column sums
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j]; // Sum up each column
        }
    }

    // Print row sums
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    // Print column sums
    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d sum = %d\n", j + 1, colSum[j]);
    }

    return 0;
}

