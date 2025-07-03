#include <stdio.h>

int main() {
    // Standard Integer Types
    short shortVar = 32767;                  // Maximum value for a short
    printf("shortVar: %hd\n", shortVar); // %hd for short

    int intVar = 2147483647;                 // Maximum value for an int
    printf("intVar: %d\n", intVar);       // %d for int

    long longVar = 2147483647L;              // Maximum value for a long (32-bit systems)
    printf("longVar: %ld\n", longVar);    // %ld for long

    unsigned int unsignedVar = 4294967295U;  // Maximum value for unsigned int (32-bit system)
    printf("unsignedVar: %u\n", unsignedVar); // %u for unsigned int

    long long longLongVar = 9223372036854775807LL; // Maximum value for a long long int
    printf("longLongVar: %lld\n", longLongVar); // %lld for long long int

    // Size_t Types
    size_t sizeVar = sizeof(int);            // Size of an int in bytes
    printf("sizeVar (size_t): %zu bytes\n", sizeVar); // %zu for size_t

    return 0;
}