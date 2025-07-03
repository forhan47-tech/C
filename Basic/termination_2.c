#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Before termination.\n");
    exit(0);  // Exit the program
    printf("This won't be printed.\n");  // Unreachable code
    return 0;
}