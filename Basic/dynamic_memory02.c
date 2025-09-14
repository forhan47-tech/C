#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL) { 
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1; 
    }

    for (int i = 0; i < 5; i++) {
        printf("Value at ptr[%d]: %d\n", i, arr[i]);
    }

    free(ptr); 
    return 0;
}