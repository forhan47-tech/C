#include <stdio.h>

#define GREETING "Hello, World!"

int main() {
    printf("%s\n", GREETING); // Prints: Hello, World!

    #undef GREETING

    // Trying to use GREETING after #undef will cause a compilation error
    return 0;
}

