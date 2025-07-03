#include <stdio.h>

void generateSubsets(int arr[], int n, int index, int subset[], int subsetSize) {
    if (index == n) { // Base case
        printf("{ ");
        for (int i = 0; i < subsetSize; i++) printf("%d ", subset[i]);
        printf("}\n");
        return;
    }

    subset[subsetSize] = arr[index]; // Include element
    generateSubsets(arr, n, index + 1, subset, subsetSize + 1);

    generateSubsets(arr, n, index + 1, subset, subsetSize); // Exclude element(backtrack)
}

int main() {
    int arr[] = {1, 2, 3};
    int subset[3];
    generateSubsets(arr, 3, 0, subset, 0);

    return 0;
}
