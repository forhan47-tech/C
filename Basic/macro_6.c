#include <stdio.h>

void firstFunction() {
    printf("Executing: %s\n", __func__);
}

void secondFunction() {
    printf("Executing: %s\n", __func__);
}

int main() {
    firstFunction();   // Output: Executing: firstFunction
    secondFunction();  // Output: Executing: secondFunction
    return 0;
}