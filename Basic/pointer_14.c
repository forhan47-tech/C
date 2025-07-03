#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr3 = &num1;

    if (ptr1 == ptr3) {
        printf("ptr1 and ptr3 point to the same memory location.\n");
    }

    if (ptr1 != ptr2) {
        printf("ptr1 and ptr2 point to different memory locations.\n");
    }

    return 0;
}