#include <stdio.h>

int main() {
    for (int i = 1, j = 10; i <= j; i++, j--) { // Two control variables
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}