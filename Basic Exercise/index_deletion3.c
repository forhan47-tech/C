#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 2; // Index to delete (0-based)

    // Ensure valid index
    if (index < 0 || index >= size) {
        printf("Invalid index!\n");
        return 1;
    }

    // Shift elements left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Reduce logical size

    // Print updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
