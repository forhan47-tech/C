#include <stdio.h>

#define FEATURE_LEVEL 1

#if FEATURE_LEVEL < 2
    #error "Feature level too low. Requires FEATURE_LEVEL >= 2."
#endif

int main() {
    printf("Feature level is %d\n", FEATURE_LEVEL);
    return 0;
}
