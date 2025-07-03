#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 6, 8, 10};  // First array initialized with values
    int arr2[] = {3, 5, 7, 9, 11};  // Second array initialized with values
    int size = sizeof(arr1) / sizeof(arr1[0]);  // Calculate array size dynamically
    int product[size];  // Array to store the product

    // Perform multiplication
    for (int i = 0; i < size; i++) {
        product[i] = arr1[i] * arr2[i];  // Element-wise multiplication
    }

    // Display result
    printf("Product of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", product[i]);
    }
    printf("\n");

    return 0;
}

