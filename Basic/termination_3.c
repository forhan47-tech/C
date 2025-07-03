#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Program started.\n");
    printf("Error occurred. Terminating program.\n");
    exit(1);  // Terminate with error code 1
    printf("This won't be printed.\n");  // Unreachable code
    return 0;
}