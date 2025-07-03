#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 5, 6}; // Array with space for new elements
    int size = 5; // Current size
    int num = 4; // Element to insert
    int index = 3; // Position to insert at

    // Ensure valid index
    if (index < 0 || index > size) {
        printf("Invalid index!\n");
        return 1;
    }

    // Shift elements right
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = num; // Insert new element
    size++; // Increase logical size

    // Print updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
