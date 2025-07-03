#include <stdio.h>

// Uncomment the line below to test the behavior 
#define DEBUG

int main() {
    #if defined(DEBUG)
        printf("Debugging is enabled.\n");
    #else
        printf("Debugging is not enabled.\n");
    #endif

    return 0;
}