#include <stdio.h>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];

    // Manual copy of array elements
    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // Display copied array
    printf("Copied Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
