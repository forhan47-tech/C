#include <stdio.h>

void printSubarrays(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Start index
        for (int j = i; j < n; j++) { // End index
            printf("{ ");
            for (int k = i; k <= j; k++) // Print elements
                printf("%d ", arr[k]);
            printf("}\n");
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("All Subarrays:\n");
    printSubarrays(arr, n);
    return 0;
}
