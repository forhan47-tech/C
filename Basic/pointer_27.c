#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    for (int i = 0; i < 3; i++) {
        *(ptr + i) += 5;  // Increment each element by 5
    }

    for (int i = 0; i < 3; i++) {
        printf("Updated arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
