#include <stdio.h>

// Function to print a VLA (Variable-Length Array)
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);  // Access elements using standard indexing
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 4;
    int matrix[3][4] = {  // Declare a 3x4 array
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printMatrix(rows, cols, matrix);  // Pass dimensions and array

    return 0;
}