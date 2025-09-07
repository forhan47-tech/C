#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30}; 
    int *ptr = arr; // point to the first element 
    
    // Modifying value
    *ptr = 15;      
    printf("First element: %d\n", *ptr); 

    // Access value  
    printf("Second element: %d\n", *(ptr + 1)); 
    printf("Third element: %d\n", *(ptr + 2)); 

    return 0;
}

