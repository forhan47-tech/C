#include <stdio.h>

void decimalToHex(int num) {
    char hex[32];
    int index = 0;

    while (num > 0) {
        int remainder = num % 16;
        hex[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        num /= 16;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = index - 1; j >= 0; j--) // Reverse order
        printf("%c", hex[j]);
    printf("\n");
}

int main() {
    int decimal = 419; // Example number
    decimalToHex(decimal);
    return 0;
}
