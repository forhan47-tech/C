#include <stdio.h>

#define FEATURE_ENABLED  // Define this macro to enable the feature
// #define DISABLED_FEATURE  // Uncommenting this will disable related feature checks

int main() {
    #ifdef FEATURE_ENABLED
        printf("Feature enabled.\n");
        // Additional feature-specific logic can go here
    #endif

    #ifndef DISABLED_FEATURE
        printf("Feature not disabled.\n");
        // Code that runs when DISABLED_FEATURE is *not* defined
    #endif

    printf("Program execution complete.\n");

    return 0;
}

