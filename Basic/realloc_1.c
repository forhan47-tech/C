#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(5 * sizeof(int));  // Initial allocation for 3 integers

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign initial values
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1
    }

    // Resize memory to hold 5 integers
    arr = (int*)realloc(arr, 5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Assign values for additional space
    for (int i = 3; i < 5; i++) {
        arr[i] = i + 1;  // Assign values for the new elements
    }

    // Display stored values
    printf("Modified array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // Free allocated memory

    return 0;
}
