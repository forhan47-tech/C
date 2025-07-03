#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory functions

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int)); // Allocates memory for 3 integers

    if (ptr == NULL) { // Check if memory allocation succeeded
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Assign values
    }

    for (int i = 0; i < 5; i++) {
        printf("Value at ptr[%d]: %d\n", i, ptr[i]); // Access values
    }

    free(ptr); // Free allocated memory

    return 0;
}