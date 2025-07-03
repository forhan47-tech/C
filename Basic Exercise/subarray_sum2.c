#include <stdio.h>
#include <stdbool.h>

bool findSubarraySum(int arr[], int n, int target) {
    int left = 0, sum = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > target && left <= right) {
            sum -= arr[left++];
        }

        if (sum == target) return true;
    }

    return false;
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 33;
    printf("%s\n", findSubarraySum(arr, n, target) ? "Subarray found" : "No subarray found");
    return 0;
}
