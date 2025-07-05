#include <stdio.h>
#include "config.h"

int main() {
    printf("Version: %s\n", VERSION);
    
    #if ENABLE_FEATURE
        printf("Feature is enabled!\n");
    #else
        printf("Feature is disabled.\n");
    #endif

    return 0;
}
