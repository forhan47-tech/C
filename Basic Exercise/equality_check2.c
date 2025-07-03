#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    bool isEqual = 1; // Flag to track equality

    // Check if sizes are different
    if (n1 != n2) {
        isEqual = 0;
    } else {
        // Compare elements one by one
        for (int i = 0; i < n1; i++) {
            if (arr1[i] != arr2[i]) {
                isEqual = 0;
                break;
            }
        }
    }

    // Print result
    if (isEqual) {
        printf("Arrays are equal.\n");
    } else {
        printf("Arrays are not equal.\n");
    }

    return 0;
}

