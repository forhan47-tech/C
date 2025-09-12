#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)calloc(5, sizeof(int));  // Allocate space

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Stored values after allocation: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // Release allocated memory

    return 0;
}

