#include <stdio.h>

int main() {
    const int numbers[5] = {10, 20, 30, 40, 50};

    // Print the elements of the constant array
    printf("Elements of the constant array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Attempt to modify an element (this will cause a compilation error)
    // numbers[2] = 35; // Uncommenting this line will result in an error

    return 0;
}