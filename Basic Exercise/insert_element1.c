#include <stdio.h>

int main() {
    int arr[10] = {1, 3, 5, 7, 9}; // Sorted array with space for extra elements
    int size = 5, num = 6, i;

    for (i = size - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i]; // Shift elements right
    }
    arr[i + 1] = num; // Insert new element
    size++;

    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
