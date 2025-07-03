#include <stdio.h>

int peakIndexInMountainArray(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) // Peak condition
            return i;
    }
    return -1; // No peak found
}

int main() {
    int arr[] = {1, 3, 5, 6, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Peak Index: %d\n", peakIndexInMountainArray(arr, n));
    return 0;
}
