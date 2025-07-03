#include <stdio.h>

int main() {
    int arr[10] = {1, 3, 5, 7, 9}; // Sorted array
    int size = 5; // Initial number of elements
    int num = 6; // Element to insert

    int i, pos = 0;

    // Find the correct position
    while (pos < size && arr[pos] < num) {
        pos++;
    }

    // Shift elements to the right
    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num; // Insert new element
    size++; // Increase logical size

    // Print updated array
    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
