#include <stdio.h>
#include <string.h>
#include <math.h>

int hexToDecimal(char hex[]) {
    int decimal = 0, base = 1;
    int length = strlen(hex);

    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base; // Convert 0-9
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base; // Convert A-F
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base; // Convert a-f
        }
        base *= 16;
    }
    return decimal;
}

int main() {
    char hex[] = "1A3"; // Example hexadecimal number
    printf("Decimal equivalent: %d\n", hexToDecimal(hex));
    return 0;
}
