#include <stdio.h>

int peakIndexInMountainArray(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[mid + 1]) // Descending, peak is in left half
            right = mid;
        else // Ascending, peak is in right half
            left = mid + 1;
    }
    return left; // Peak index
}

int main() {
    int arr[] = {1, 3, 5, 6, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Peak Index: %d\n", peakIndexInMountainArray(arr, n));
    return 0;
}
