#include <stdio.h>

#define PI 3.14159
#define MAX_LENGTH 100

int main() {
    printf("The value of PI is: %.5f\n", PI);

    // MAX_LENGTH = 150;  Error: not allowed
    
    printf("The maximum length allowed is: %d\n", MAX_LENGTH);
    return 0;
}