#include <stdio.h>

int main() {
    int x = 10;

    x += 5;   // x = x + 5 → 15
    x -= 3;   // x = x - 3 → 12
    x *= 2;   // x = x * 2 → 24
    x /= 4;   // x = x / 4 → 6
    x %= 4;   // x = x % 4 → 2

    x <<= 1;  // x = x << 1 → 4 (bitwise left shift)
    x >>= 1;  // x = x >> 1 → 2 (bitwise right shift)
    x &= 3;   // x = x & 3 → 2 (bitwise AND)
    x |= 1;   // x = x | 1 → 3 (bitwise OR)
    x ^= 2;   // x = x ^ 2 → 1 (bitwise XOR)

    printf("Final value of x: %d\n", x);
    return 0;
}
