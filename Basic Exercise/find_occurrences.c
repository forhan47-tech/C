#include <stdio.h>

void findOccurrences(int arr[], int n, int target) {
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) 
                first = i;
            last = i;
        }
    }

    if (first != -1)
        printf("First occurrence: %d\nLast occurrence: %d\n", first, last);
    else
        printf("Element not found.\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    findOccurrences(arr, n, target);
    return 0;
}
