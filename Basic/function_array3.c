#include <stdio.h>

// Function to print a 2D array
void printMatrix(int matrix[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {  // Number of columns must match
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // Declare a 3x3 matrix
    printMatrix(matrix, 3);  // Pass the matrix and the number of rows
    return 0;
}