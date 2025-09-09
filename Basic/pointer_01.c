#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // pointer stores the address of 'num'

    // Print value
    printf("Value of num: %d\n", num);
    printf("Value via *ptr: %d\n", *ptr);

    // Print address
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);

    return 0;
}
