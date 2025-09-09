#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0, j = size - 1; i <= j; i++, j--) {
        printf("arr[%d] = %d\narr[%d] = %d\n", i, arr[i], j, arr[j]);
    }

    return 0;
}