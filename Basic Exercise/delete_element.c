#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 8; // Element to delete
    int i, found = 0,index;

    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            index = i; // Store the index of the first occurrence
            found = 1;
            break; // Stop at the first occurrence
        }
    }

    if (found) {
        for (i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Shift elements left
        }
        size--; // Reduce array size
    }

    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
