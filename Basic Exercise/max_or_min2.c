#include <stdio.h>

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0];  // Assume first element is the max

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger value is found
        }
    }

    return max;  // Return the maximum value
}

int main() {
    int arr[] = {12, 45, 78, 23, 56, 89};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function and display result
    printf("Maximum value in the array: %d\n", findMax(arr, size));

    return 0;
}

