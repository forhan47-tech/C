#include <stdio.h>

int searchRotatedArrayDuplicates(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;

        if (arr[left] == arr[mid] && arr[mid] == arr[right]) { // Handle duplicates
            left++;
            right--;
            continue;
        }

        // Left half is sorted
        if (arr[left] <= arr[mid]) {
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // Right half is sorted
        else {
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int index = searchRotatedArrayDuplicates(arr, 0, n - 1, target);
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
