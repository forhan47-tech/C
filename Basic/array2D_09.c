#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printf("Processing rows:\n");
    for (int i = 0; i < 3; i++) { 
        printf("Row %d: ", i);
        for (int j = 0; j < 4; j++) { 
            printf("%d ", arr[i][j]); // Access elements row-wise
        }
        printf("\n"); 
    }

    return 0;
}

