#include <stdio.h>

int main() {
    int num = 100;
    int *ptr = &num;
    int **pptr = &ptr;

    // Print value
    printf("Value of num: %d\n", **pptr);

    // Print address
    printf("Address of num: %p\n", *pptr);
    printf("Address of ptr: %p\n", pptr);

    return 0;
}
