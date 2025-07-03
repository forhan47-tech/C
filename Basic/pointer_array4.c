#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = &arr[0][0]; // Pointer to the first element of the array

    printf("Processing elements:\n");
    for (int i = 0; i < 9; i++) { // Total elements: 3x3 = 9
        printf("%d ", *(ptr + i)); // Accessing elements using pointer arithmetic
    }

    return 0;
}
