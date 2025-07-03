#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 89, 23, 90, 34, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first = 0, second = 0, third = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    printf("Top 3 highest numbers: %d, %d, %d\n", first, second, third);
    return 0;
}
