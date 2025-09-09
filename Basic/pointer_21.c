#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *start = &arr[0];
    int *end = &arr[3];
    
    printf("Address of start: %p\n", start);
    printf("Address of end: %p\n", end);

    printf("Number of elements between start and end: %ld\n", end - start); 
    
    return 0;
}