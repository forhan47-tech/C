#include <stdio.h>

int main() {
    unsigned char flags = 0b00001101;
    unsigned char mask;

    // Set bit 1
    mask = 0b00000010;
    flags |= mask;
    printf("Set bit 1: %02X\n", flags);

    // Clear bit 2
    mask = 0b00000100;
    flags &= ~mask;
    printf("Clear bit 2: %02X\n", flags);

    // Toggle bit 0
    mask = 0b00000001;
    flags ^= mask;
    printf("Toggle bit 0: %02X\n", flags);

    return 0;
}
