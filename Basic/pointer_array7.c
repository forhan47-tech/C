#include <stdio.h>

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int *ptr = arr;

    while (ptr < arr + 5) {
        printf("%d ", *(++ptr)); // Increment the pointer, then access the value
        }
    
    printf("\n"); // Move to the next line for better output formatting
    return 0;
}

