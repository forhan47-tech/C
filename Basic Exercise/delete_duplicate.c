#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique[n], index = 0;

    // Traverse array and store unique elements
    for (int i = 0; i < n; i++) {
        bool found = 0;
        for (int j = 0; j < index; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[index++] = arr[i];
        }
    }

    // Print unique elements
    printf("Array after removing duplicates: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}

