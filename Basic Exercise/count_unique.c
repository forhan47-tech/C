#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int uniqueCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                count++;
                break; // Avoid duplicate counting
            }
        }
        if (count == 1) {
            uniqueCount++;
        }
    }

    printf("Number of unique elements: %d\n", uniqueCount);
    return 0;
}
