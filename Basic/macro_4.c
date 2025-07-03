#include <stdio.h>

#define CHECK_CONDITION(var) \
    if (var > 0) { \
        printf("%d is positive.\n", var); \
    } else if (var < 0) { \
        printf("%d is negative.\n", var); \
    } else { \
        printf("%d is zero.\n", var); \
    }

int main() {
    int num = -10;
    CHECK_CONDITION(num);
    return 0;
}