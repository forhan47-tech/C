#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;     
    int **pptr = &ptr;

    printf("Address of num: %p\n", &num);       
    printf("Value of ptr: %p\n", ptr);         
    printf("Value of *pptr: %p\n", *pptr); 
    printf("Address of ptr: %p\n", &ptr);      
    printf("Value of pptr: %p\n", pptr); 
    return 0;
}