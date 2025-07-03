#include <stdio.h>

int findRotationPivot(int arr[], int left, int right) {
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right]) // Pivot is in right half
            left = mid + 1;
        else // Pivot is in left half
            right = mid;
    }
    return left; // Returns index of the smallest element
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findRotationPivot(arr, 0, n - 1);
    printf("Rotation pivot found at index: %d\n", pivotIndex);

    return 0;
}
