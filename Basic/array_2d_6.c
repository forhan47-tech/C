#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("Processing rows:\n");
    for (int i = 0; i < 3; i++) { // Loop through rows
        printf("Row %d: ", i);
        for (int j = 0; j < 4; j++) { // Loop through columns of that row
            printf("%d ", arr[i][j]); // Access elements row-wise
        }
        printf("\n"); // Move to next line for better readability
    }

    return 0;
}

