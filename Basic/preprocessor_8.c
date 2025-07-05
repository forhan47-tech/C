#include <stdio.h>

#define TEMP 25

int main() {
    printf("TEMP before undef: %d\n", TEMP);

    // Now we undefine TEMP
    #undef TEMP

    // Trying to use TEMP now would cause a compiler error
    // printf("TEMP after undef: %d\n", TEMP); // ❌ This will fail
    return 0;
}
