#include <stdio.h>

int main() {
    int num = 10;
    int *ptr1 = &num;     // First pointer to num
    int *ptr2 = ptr1;     // Assign ptr1's value (address of num) to ptr2

    printf("Value via ptr1: %d\n", *ptr1);
    printf("Value via ptr2: %d\n", *ptr2);

    *ptr2 = 20;           // Modify num via ptr2
    printf("Updated num: %d\n", num); // Both pointers reflect the change
    return 0;
}