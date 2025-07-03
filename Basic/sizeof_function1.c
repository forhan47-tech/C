#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14;
    char letter = 'A';
    double largeNumber = 3.14159;

    printf("Size of num: %zu bytes\n", sizeof(num));  // Output: 4 bytes
    printf("Size of pi: %zu bytes\n", sizeof(pi));    // Output: 4 bytes
    printf("Size of letter: %zu byte\n", sizeof(letter)); // Output: 1 byte
    printf("Size of largeNumber: %zu bytes\n", sizeof(largeNumber)); // Output: 8 bytes
    
    return 0;
}