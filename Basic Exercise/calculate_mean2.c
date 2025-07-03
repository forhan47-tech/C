#include <stdio.h>

float calculateMean(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int arr[] = {4, 8, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    float mean = calculateMean(arr, n);
    printf("Mean = %.2f\n", mean);

    return 0;
}
