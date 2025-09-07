#include <stdio.h>

int main() {
    int i = 1;

start:
    printf("%d ", i);
    i++;
    if (i <= 10)
        goto start; // loop simulation

    return 0;
}
