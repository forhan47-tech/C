#include <stdio.h>

void firstFunction() {
    printf("Executing: %s\n", __func__);
}

void secondFunction() {
    printf("Executing: %s\n", __func__);
}

int main() {
    printf("Starting main function.\n");
    firstFunction();   
    secondFunction();  
    return 0;
}