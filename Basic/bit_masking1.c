#include <stdio.h>

int main() {
    unsigned char flags = 0b00001101; // 8 bits: 00001101

    unsigned char mask = 0b00000010; // Want to toggle bit #1

    flags = flags | mask;  // Set bit 1 (OR)
    printf("After setting bit 1: %02X\n", flags); // Output: 0F

    flags = flags & ~mask; // Clear bit 1 (AND with inverted mask)
    printf("After clearing bit 1: %02X\n", flags); // Output: 0D

    flags = flags ^ mask; // Toggle bit 1 (XOR)
    printf("After toggling bit 1: %02X\n", flags); // Output: 0F

    return 0;
}
