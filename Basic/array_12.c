#include <stdio.h>

int main() {
    int arr[] = {10, -5, 20, -15, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Positive numbers in the array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            continue; // Skip negative numbers
        }
        printf("%d\n", arr[i]);
    }
    return 0;
}