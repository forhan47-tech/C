#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Accessing and printing specific elements
    printf("Element at row 1, column 2: %d\n", matrix[1][2]);
    printf("Element at row 2, column 0: %d\n", matrix[2][0]);

    // Modifying an element
    matrix[1][2] = 3;
    printf("Element at row 1, column 2 after modification: %d\n", matrix[1][2]); 

    return 0;
}