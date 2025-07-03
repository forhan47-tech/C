#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};  // First array initialized with values
    int arr2[] = {6, 7, 8, 9, 10}; // Second array initialized with values
    int size = sizeof(arr1) / sizeof(arr1[0]);  // Calculate array size dynamically
    int sum[size];  // Array to store the sum

    // Perform addition
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];  // Element-wise addition
    }

    // Display result
    printf("Sum of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}

