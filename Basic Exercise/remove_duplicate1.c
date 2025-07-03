#include <stdio.h>
#include <stdbool.h>

void removeDuplicates(int arr[], int n) {
    bool seen[1000] = {false}; // Assumes values are in range [0, 999]
    
    printf("Unique Elements: ");
    for (int i = 0; i < n; i++) {
        if (!seen[arr[i]]) {
            printf("%d ", arr[i]);
            seen[arr[i]] = true;
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, n);
    return 0;
}
