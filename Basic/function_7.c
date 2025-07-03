#include <stdio.h>

void increment(int *num) {
    (*num)++; 
}

int main() {
    int x = 10;

    increment(&x);  
    printf("After: %d\n", x);

    return 0;
}