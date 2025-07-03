#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30}; // Partial initialization

    // Accessing elements
    printf("First element: %d\n", numbers[0]);
    printf("Last element: %d\n", numbers[4]);

    // Modifying elements
    numbers[2] = 35;
    printf("Modified third element: %d\n", numbers[2]);

    // Iterate through the array and print all elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }


    return 0;
}