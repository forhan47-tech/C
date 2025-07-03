#include <stdio.h>

#define SIZE 5  // Define array size

int main() {
    int arr1[SIZE] = {1, 2, 3, 4, 5};  // First array
    int arr2[SIZE] = {10, 20, 30, 40, 50};  // Second array

    // Swap elements one by one
    for (int i = 0; i < SIZE; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("After swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

