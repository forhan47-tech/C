#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int *arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        arr[i] = i + 1;
    
    return arr;
}

int main() {
    int *arr = createArray(5);

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr); 
    return 0;
}
