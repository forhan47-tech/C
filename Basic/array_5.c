#include <stdio.h>

int main() {
    // Declare and initialize the array
    int numbers[5] = {0}; // All elements are explicitly set to 0

    // Print the values of the array
    printf("Array elements initialized to 0:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}