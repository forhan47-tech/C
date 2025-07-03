#include <stdio.h>

void generateSubsets(int arr[], int n, int index, int subset[], int subsetSize) {
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < subsetSize; i++)
            printf("%d ", subset[i]);
        printf("}\n");
        return;
    }

    // Include current element
    subset[subsetSize] = arr[index];
    generateSubsets(arr, n, index + 1, subset, subsetSize + 1);

    // Exclude current element
    generateSubsets(arr, n, index + 1, subset, subsetSize);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subset[n];

    generateSubsets(arr, n, 0, subset, 0);
    return 0;
}
