#include <stdio.h>

int main() {
    // Array initialization
    int numbers[] = {10, 20, 30, 40, 50}; // Size is 5

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}