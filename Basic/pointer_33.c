#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int *ptrArr[] = {arr1, arr2}; // Array of pointers
    int **ptr = ptrArr; // Pointer to pointer

    printf("First element of second array: %d\n", ptr[1][0]);
    return 0;
}
