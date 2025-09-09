#include <stdio.h>

int main() {
    int arr = 10, b = 20;
    
    int *ptr1 = &a; 
    int *ptr2 = &b; 

    if (ptr1 < ptr2) {
        printf("ptr1 point to memory location less than ptr2.\n");
    }

    if (ptr2 > ptr1) {
        printf("ptr2 point to memory location is greater than ptr1.\n");
    }

    return 0;
}