#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr1[] = {10, 20, 30, 40, 50};  // First array
    int arr2[] = {10, 20, 30, 40, 50};  // Second array (identical)
    int size = sizeof(arr1) / sizeof(arr1[0]);
    bool isEqual = true;  // Assume arrays are equal initially

    // Compare each element
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            isEqual = false;
            break;  // Exit loop once a mismatch is found
        }
    }

    // Display result
    if (isEqual) {
        printf("Both arrays are equal.\n");
    } else {
        printf("Arrays are different.\n");
    }

    return 0;
}

