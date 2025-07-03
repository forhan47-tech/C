#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 3, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3, replacement = 8;

    // Replace occurrences
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) arr[i] = replacement;
    }

    printf("\nModified Array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);

    return 0;
}
