#include <stdio.h>
#include <math.h> // For sqrt()

int main() {
    int n, i;
    float arr[100], mean = 0, stdDev = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: Array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        mean += arr[i]; // Summing elements
    }

    mean /= n; // Calculate mean

    // Compute standard deviation
    for (i = 0; i < n; i++) {
        stdDev += pow(arr[i] - mean, 2); // (x_i - mean)^2
    }
    stdDev = sqrt(stdDev / n); // Square root of variance

    // Output standard deviation
    printf("Standard Deviation: %.2f\n", stdDev);
    
    return 0;
}

