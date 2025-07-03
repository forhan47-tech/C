#include <stdio.h>
#include <math.h> // For pow()

int main() {
    int n, i;
    float arr[100], mean = 0, variance = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        mean += arr[i]; 
    }

    mean /= n; // Calculate mean

    // Compute variance
    for (i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2); // (x_i - mean)^2
    }
    variance /= n; // Divide by total elements

    // Output variance
    printf("Variance of the array: %.2f\n", variance);

    return 0;
}

