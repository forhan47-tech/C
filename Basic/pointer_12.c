#include <stdio.h>

int main() {
    int value = 5;
    int *ptr = &value; // Pointer storing the address of 'value'

    (*ptr)++; // Incrementing the value through the pointer

    printf("%d\n", value);  // Outputs: 6

    return 0;
}

