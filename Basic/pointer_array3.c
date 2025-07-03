#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30}; // Array initialization
    int *ptr = arr;            // Pointer pointing to first element of the array

    printf("First element: %d\n", *ptr);     // Outputs: 10 (first element)
    printf("Second element: %d\n", *(ptr+1)); // Outputs: 20 (second element)
    printf("Third element: %d\n", *(ptr+2));  // Outputs: 30 (third element)

    return 0;
}

