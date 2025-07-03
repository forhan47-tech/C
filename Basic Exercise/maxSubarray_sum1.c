#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0], currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + arr[i] > arr[i]) ? (currentSum + arr[i]) : arr[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum Subarray Sum: %d\n", maxSubarraySum(arr, n));
    return 0;
}
