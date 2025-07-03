#include <stdio.h>

typedef unsigned int uint;  // `uint` is now an alias for `unsigned int`

int main() {
    uint age = 25;  // Instead of writing unsigned int
    printf("Age: %u\n", age);
    return 0;
}