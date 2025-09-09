#include <stdio.h>

int main() {
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Matrix contents:\n");
    for (int k = 0; k < 9; ++k) {
        int row = k / 3;
        int col = k % 3;
        printf("%3d ", matrix[row][col]);

        // Print newline every third element by restructuring loop
        if ((k + 1) % 3 == 0) printf("\n");
    }

    return 0;
}
