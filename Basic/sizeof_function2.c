#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  

    printf("Size of array: %zu bytes\n", sizeof(arr));  
    printf("Size of each element: %zu bytes\n", sizeof(arr[0]));  
    printf("Number of elements: %zu\n", sizeof(arr) / sizeof(arr[0])); 

    printf("Size of pointer: %zu bytes\n", sizeof(ptr));  
    return 0;
}