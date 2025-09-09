#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14;
    char letter = 'A';
    double largeNumber = 3.14159;

    printf("Size of num: %zu bytes\n", sizeof(num));  
    printf("Size of pi: %zu bytes\n", sizeof(pi));   
    printf("Size of letter: %zu byte\n", sizeof(letter)); 
    printf("Size of largeNumber: %zu bytes\n", sizeof(largeNumber)); 
    
    return 0;
}