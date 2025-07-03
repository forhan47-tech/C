#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true, b = false;

    printf("Logical AND: %d\n", a && b);  // False (0)
    printf("Logical OR: %d\n", a || b);   // True (1)
    printf("Logical NOT: %d\n", !a);      // False (0)

    return 0;
}

