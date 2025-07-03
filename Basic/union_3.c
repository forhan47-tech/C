#include <stdio.h>

typedef union {
    int i;
    float f;
    char c;
} Data;

int main() {
    Data d;

    d.i = 42;
    printf("Integer: %d\n", d.i);

    // You can also reassign values to other members
    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

    // Since unions share memory, writing to `d.f` overwrites `d.i`

    return 0;
}

