#include <stdio.h>

int main() {
    int n, i;
    float arr[100], mean = 0, diffArr[100];

    // Input: Number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: Array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        mean += arr[i]; // Summing elements
    }

    mean /= n; // Calculate mean

    // Compute difference of each element to the mean
    printf("Differences from mean:\n");
    for (i = 0; i < n; i++) {
        diffArr[i] = arr[i] - mean; // Store differences
        printf("%.2f ", diffArr[i]); // Output difference
    }

    return 0;
}

