#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;  // Pointer stores the address of 'num'.

    printf("Address of num: %p\n", ptr);
    printf("Value of num: %d\n", *ptr);

    *ptr = 10;  // Modify 'num' through the pointer.
    printf("New value of num: %d\n", num);

    return 0;
}