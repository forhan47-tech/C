#include <stdio.h>

// Define a macro named LEVEL with a value of 2
#define LEVEL 2

int main() {
    // Use conditional preprocessing to include appropriate code
    #if LEVEL == 1
        printf("Level 1.\n");
    #elif LEVEL == 2
        printf("Level 2.\n");
    #else
        printf("Unknown level.\n");
    #endif

    return 0;
}