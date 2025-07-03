#include <stdio.h>

int main() {
    int a = 18, b = 25; // Example numbers
    int result = 0;

    while (a > 0) {
        // If 'a' is odd, add 'b' to the result
        if (a % 2 == 1) {
            result += b;
        }
        // Halve 'a' and double 'b'
        a /= 2;
        b *= 2;
    }

    printf("Product using Russian Peasant Method: %d\n", result);

    return 0;
}

