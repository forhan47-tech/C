#include <stdio.h>

int main() {
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Accessing and printing an element in row 1, column 2
    printf("Element at row 1, column 2: %d\n", matrix[1][2]); // Output: 6

    matrix[1][2] = 3; // Modifying the element at row 1, column 2
    printf("Element at row 1, column 2 after modification: %d\n", matrix[1][2]); // Output: 3

    return 0;
}