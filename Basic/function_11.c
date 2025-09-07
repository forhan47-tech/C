#include <stdio.h>

int x = 5;  // Global variable

void change() {
    x = 100; 
    printf("Inside function: x = %d\n", x);
}

int main() {
    change();
    printf("Outside function: x = %d\n", x);
    return 0;
}
