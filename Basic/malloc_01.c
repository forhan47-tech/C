#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));  // Allocate memory

    if (ptr == NULL) {  
        printf("Memory allocation failed!\n");
        return 1;  
    }

    *ptr = 50;  
    printf("Allocated value: %d\n", *ptr);

    free(ptr);  // Release memory

    return 0;
}

