#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array

    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array
    int start = 0, end = size - 1;  // End index

    // Reverse the array using swapping
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Display reversed array
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

