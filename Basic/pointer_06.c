#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr1, p2; // 'p1' is a pointer, 'p2' is an integer

    ptr1 = &a; 
    p2 = b;   

    printf("Value of a through pointer p1: %d\n", *ptr1);
    printf("Value of p2 (not a pointer): %d\n", p2);   

    return 0;
}

