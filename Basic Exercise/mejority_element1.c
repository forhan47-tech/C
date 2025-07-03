#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = arr[0], count = 1;

    // Step 1: Find potential majority element
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    // Step 2: Verify if candidate is majority
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1;  // Return majority element or -1 if none
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMajorityElement(arr, n);
    if (result != -1) {
        printf("Majority Element: %d\n", result);
    } else {
        printf("No Majority Element\n");
    }

    return 0;
}
