#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num; 

    // Print 'num'
    printf("Value of num: %d\n", *ptr);

    // Modify 'num'
    *ptr = 10; 
    printf("New value of num: %d\n", num);

    return 0;
}