#include <stdio.h>

int main() {
    unsigned int a = 100;
    unsigned short b = 65535;
    unsigned long c = 4294967295;
    unsigned long long d = 18446744073709551615U;

    printf("Unsigned int: %u\n", a);
    printf("Unsigned short: %hu\n", b);
    printf("Unsigned long: %lu\n", c);
    printf("Unsigned long long: %llu\n", d);

    return 0;
}
