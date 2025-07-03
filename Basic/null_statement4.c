#include <stdio.h>

int main() {
    int i = 0;

    while (i++ < 3) ; // Null statement: No body required

    printf("Loop ends. i = %d\n", i);
    return 0;
}