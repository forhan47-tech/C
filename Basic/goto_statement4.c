#include <stdio.h>

int main() {
    state1:
    printf("State 1: Doing something...\n");
    goto state2;

    state2:
    printf("State 2: Doing something else...\n");
    goto state3;

    state3:
    printf("State 3: Process complete.\n");
    return 0;
}