#include <stdio.h>

#define FEATURE_ENABLED  

int main() {
    #ifdef FEATURE_ENABLED
        printf("Feature enabled.\n");
    #endif

    #ifndef DISABLED_FEATURE
        printf("Feature not disabled.\n");
    #endif

    printf("Program execution complete.\n");

    return 0;
}

