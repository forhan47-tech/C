#include <stdio.h>

int main() {
    int value = 5;
    int *ptr = &value; 

    (*ptr)++; // Incrementing the value through the pointer

    printf("%d\n", value);  

    return 0;
}

