#include <stdio.h>

#define VERSION 2 // Define macro

#if VERSION == 1
    #define FEATURE "Basic Mode"
#elif VERSION == 2
    #define FEATURE "Advanced Mode"
#else
    #define FEATURE "Legacy Mode"
#endif

int main() {
    printf("Running in %s\n", FEATURE);
    return 0;
}
