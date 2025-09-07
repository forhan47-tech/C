#include <stdio.h>

int main() {
    char letters[5] = {'A', 'B', 'C', 'D', 'E'};  

    // access element
    printf("Value: %c\n ", letters[3]);

    // Modifying an element
    letters[2] = 'Z'; 
    printf("Modified Value: %c\n", letters[2];

    // print all elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %c\n", i, letters[i]); 
    }
    printf("\n");

    return 0;
}
