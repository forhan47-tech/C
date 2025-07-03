#include <stdio.h>

int main() {
    char letters[5] = {'A', 'B', 'C', 'D', 'E'};  // Character array initialization

    printf("Value: %c\n ", letters[3]);

    // Modifying an element in the array
    letters[2] = 'Z';  // Change 'C' to 'Z'
    printf("Modified Value: %c\n", letters[2]);  // Print the modified value

    // Iterate through the array and print all elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %c\n", i, letters[i]);  // Print each element
    }
    printf("\n");

    return 0;
}
