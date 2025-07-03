#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right)
        return -1; // Not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid; // Found
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target); // Search right half
    else
        return binarySearchRecursive(arr, left, mid - 1, target); // Search left half
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearchRecursive(arr, 0, n - 1, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
