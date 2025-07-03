#include <stdio.h>

int main() {
    int signedInt = -123;
    unsigned int unsignedInt = 123;
    float pi = 3.14159;

    // Width, alignment, and padding
    printf("\nWidth, Alignment, and Padding Examples:\n");
    printf("1. Right-aligned (width 10): %10d\n", signedInt);   // Right-aligned
    printf("2. Left-aligned (width 10): %-10d\n", signedInt);   // Left-aligned
    printf("3. Zero-padded (width 10): %010d\n", signedInt);    // Zero-padded
    printf("4. Positive sign (always show): %+d\n", signedInt); // Always show sign
    printf("5. Space for positive numbers: % d\n", unsignedInt); // Add leading space if positive

    // Floating-point formatting
    printf("\nFloating-Point Precision and Width Examples:\n");
    printf("6. Default precision: %f\n", pi);                    // Default precision
    printf("7. Two decimal places: %.2f\n", pi);                 // Precision of 2
    printf("8. Width 8, Precision 2: %8.2f\n", pi);              // Width 8, precision 2
    printf("9. Left-aligned with width and precision: %-10.2f\n", pi); // Left-aligned, width, precision

    // Hexadecimal formatting
    printf("\nHexadecimal Formatting Examples:\n");
    printf("11. Hexadecimal with prefix: %#x\n", unsignedInt);   // Hex with prefix
    return 0;
}