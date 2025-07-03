#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    for (int *ptr = arr; ptr < arr + 5; ptr++) {
        printf("%d ", *ptr); // Access and print the current value
    }

    printf("\n"); // Move to the next line for better output formatting
    return 0;
}

