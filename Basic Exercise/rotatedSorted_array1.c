#include <stdio.h>

int searchTwoPointer(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        // Check both ends
        if (arr[left] == target) return left;
        if (arr[right] == target) return right;

        left++;
        right--;
    }
    
    return -1; // Not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int index = searchTwoPointer(arr, n, target);
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found.\n");

    return 0;
}
