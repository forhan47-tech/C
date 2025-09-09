#include <stdio.h>

int main() {
    const int numbers[5] = {10, 20, 30, 40, 50}; 

    // numbers[2] = 35; // Error: cannot modify a const array

    printf("Elements of the constant array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}