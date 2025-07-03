#include <stdio.h>

int main() {
    int arr1[] = {10, 20, 30, 40, 50};  // First array initialized with values
    int arr2[] = {2, 4, 6, 8, 10};      // Second array initialized with values
    int size = sizeof(arr1) / sizeof(arr1[0]);  // Calculate array size dynamically
    float division[size];  // Array to store the division results

    // Perform division
    for (int i = 0; i < size; i++) {
        division[i] = (arr2[i] != 0) ? (float) arr1[i] / arr2[i] : 0;  // Avoid division by zero
    }

    // Display result
    printf("Division of arrays:\n");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", division[i]);  // Display division results with 2 decimal precision
    }
    printf("\n");

    return 0;
}

