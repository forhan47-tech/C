#include <stdio.h>

int main() {
    // Partial initialization of a 3x3 matrix
    int matrix[3][3] = {{1, 2}, {3}, {4, 5, 6}};

    // Print the matrix
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}