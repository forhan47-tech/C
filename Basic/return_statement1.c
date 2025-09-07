#include <stdio.h>

void checkPositive(int num) {
    if (num < 0) {
        printf("Negative number detected.\n");
        return; // Exit function early
    }
    printf("Number is positive.\n");
}

int main() {
    checkPositive(-5); 
    checkPositive(10); 
    return 0;
}