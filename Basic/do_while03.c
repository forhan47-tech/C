#include <stdio.h>

int main() {
    int count = 1;

    do {
        printf("This is loop iteration #%d\n", count);
        count++;
    } while (1); // This condition always evaluates to true

    return 0;
}