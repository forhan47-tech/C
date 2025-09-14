#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("Processing columns:\n");
    for (int j = 0; j < 4; j++) { 
        printf("Column %d: ", j);
        for (int i = 0; i < 3; i++) { // Process each row for the column
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
