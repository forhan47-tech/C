#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3, 4, 5}; 
    int *ptr = arr;  

    printf("First element: %d\n", *ptr); 

    ptr++;            // Moves to the second element
    printf("Second element: %d\n", *ptr); 

    ptr +=2;         // Moves to the third element
    printf("Third element: %d\n", *ptr); 

    return 0;
}


