#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8};
    int i = 0;

    while (i < 4) {
        printf("Element %d: %d\n", i, arr[i]);
        i++;
    }

    return 0;
}
