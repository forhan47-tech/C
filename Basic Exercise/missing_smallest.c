#include <stdio.h>
#include <stdbool.h>

int findMissingPositive(int arr[], int n) {
    bool present[n + 1]; // Array to mark presence of numbers
    for (int i = 0; i <= n; i++) 
        present[i] = false;

    // Mark the presence of positive numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) 
            present[arr[i]] = true;
    }

    // Find the first missing positive number
    for (int i = 1; i <= n; i++) {
        if (!present[i]) 
            return i;
    }
    
    return n + 1; // If all numbers are present, return next possible missing number
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Smallest missing positive number: %d\n", findMissingPositive(arr, n));
    return 0;
}
