#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = matrix; // Pointer to 2D array

    printf("First row, second element: %d\n", ptr[0][1]);
    printf("Second row, third element: %d\n", ptr[1][2]);

    return 0;
}
