#include <stdio.h>

// Recursive function to reverse array
void reverseArray(int arr[], int start, int end) {
    if (start >= end)  // Base case: Stop when indices meet or cross
        return;

    // Swap elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call with updated indices
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call recursive function to reverse array
    reverseArray(arr, 0, size - 1);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

