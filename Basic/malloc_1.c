#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));  // Allocate memory

    if (ptr == NULL) {  // Check if allocation was successful
        printf("Memory allocation failed!\n");
        return 1;  // Exit if allocation failed
    }

    *ptr = 50;  // Assign value
    printf("Allocated value: %d\n", *ptr);

    free(ptr);  // Release memory

    return 0;
}

