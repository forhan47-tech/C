#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    int **arr;

    // Allocate memory for row pointers
    arr = (int **)malloc(rows * sizeof(int *));

    // Allocate memory for each row
    for (int i = 0; i < rows; i++)
        arr[i] = (int *)malloc(cols * sizeof(int));

    // Initialize the matrix
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = col * i + j; // Example initialization

    // Print the matrix
    printf("Dynamically Allocated 2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
