#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr1, *ptr2;  

    ptr1 = &a;  
    ptr2 = &b;  

    printf("Value of a: %d\n", *ptr1); 
    printf("Value of b: %d\n", *ptr2); 

    return 0;
}

