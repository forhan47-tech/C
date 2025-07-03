#include <stdio.h>

int main() {
    int n;
    float arr[100], mean = 0;

    // Input: Number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: Array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        mean += arr[i]; // Summing elements
    }

    mean /= n; // Mean calculation

    // Output mean
    printf("Mean of the array: %.2f\n", mean);
    
    return 0;
}

