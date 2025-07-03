#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // Pointer to the first element of the array

    printf("Size of array: %zu bytes\n", sizeof(arr));  // Output: 20 bytes
    printf("Size of each element: %zu bytes\n", sizeof(arr[0]));  // Output: 4 bytes
    printf("Number of elements: %zu\n", sizeof(arr) / sizeof(arr[0]));  // Output: 5

    printf("Size of pointer: %zu bytes\n", sizeof(ptr));  // Output: 8 bytes (on a 64-bit system)
    
    return 0;
}