#include <stdio.h>

int main() {
    int *ptr = NULL; // Safer than leaving it uninitialized

    if (ptr == NULL) {
        printf("Pointer is not pointing to any valid memory location.\n");
    } else {
        printf("Pointer holds a valid address.\n");
    }

    return 0;
}

