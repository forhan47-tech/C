#include <stdio.h>

#define TEMP 25

#undef TEMP

int main() {
    // TEMP is no longer defined, so attempting to use it will cause an error
    return 0;
}

