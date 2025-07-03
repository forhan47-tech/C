#include <stdio.h>

int main() {
    int matrix[][] = {  // Original matrix
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = sizeof(matrix) / sizeof(matrix[0]);

    // Print main diagonal
    printf("Main diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSecondary diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][size - i - 1]);
    }

    return 0;
}

