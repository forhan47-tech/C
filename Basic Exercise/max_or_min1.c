#include <stdio.h>

int main() {
    int arr[] = {15, 42, 7, 90, 28, 63};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate array size dynamically

    int max = arr[0];  // Initialize max with the first element
    int min = arr[0];  // Initialize min with the first element

    // Traverse array to find max and min
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if current element is larger
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if current element is smaller
        }
    }

    // Display results
    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n", min);

    return 0;
}

