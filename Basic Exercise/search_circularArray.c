#include <stdio.h>

int circularLinearSearch(int arr[], int n, int target, int start) {
    for (int i = 0; i < n; i++) {
        int index = (start + i) % n; // Wrap-around using modulo
        if (arr[index] == target)
            return index;
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3}; // Circular array example
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int startIndex = 3; // Start searching from index 3

    int index = circularLinearSearch(arr, n, target, startIndex);
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
