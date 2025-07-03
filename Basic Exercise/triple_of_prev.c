#include <stdio.h>

int main() {
    int arr[10];
    arr[0] = 1;

    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] * 3;
    }

    printf("Array elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
