#include <stdio.h>

int main() {
    int numbers[5]; // Declare an integer array with 5 elements

    printf("Enter 5 integers:\n");  // Input values into the array using scanf
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]); // Read user input and store in the array
    }

    // Output the values of the array using printf
    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]); // Print each element
    }

    return 0;
}