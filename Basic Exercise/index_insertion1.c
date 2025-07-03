#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Initialize array
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, pos;

    // Input: Element to insert & position
    printf("\nEnter element to insert: ");
    scanf("%d", &element);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Shift elements to the right
    for (int i = n; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert element
    arr[pos - 1] = element;
    n++; // Update array size

    // Print updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

