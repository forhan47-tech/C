#include <stdio.h>

int findSingleElement(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is even or odd to determine which half is incomplete
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) 
                left = mid + 2; // Unique element is in right half
            else 
                right = mid; // Unique element is in left half
        } else {
            if (arr[mid] == arr[mid - 1]) 
                left = mid + 1; // Unique element is in right half
            else 
                right = mid - 1; // Unique element is in left half
        }
    }

    return arr[left]; // Single unique element
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5}; // Unique element = 3
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Single element: %d\n", findSingleElement(arr, n));
    return 0;
}
