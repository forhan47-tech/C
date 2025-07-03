#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos;

    // Input: Position to delete
    printf("Enter position of element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements left to remove the element
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Reduce array size

    // Print updated array
    printf("Updated array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

