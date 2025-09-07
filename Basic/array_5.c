#include <stdio.h>

int main() {
    int numbers[5] = {0}; // All elements are explicitly set to 0

    printf("Array elements initialized to 0:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}