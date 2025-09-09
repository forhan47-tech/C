#include <stdio.h>
#include <ctype.h>

int main() {
    char upper = 'G', lower = 'm';

    printf("tolower('%c'): %c\n", upper, tolower(upper)); // G → g
    printf("toupper('%c'): %c\n", lower, toupper(lower)); // m → M

    return 0;
}
