#include <stdio.h>

int main() {
    int num = 255;
    float big = 123456.789;

    printf("Decimal: [%d]\n", num);
    printf("Hex lowercase: [%x]\n", num);
    printf("Hex uppercase: [%X]\n", num);
    printf("Octal: [%o]\n", num);
    printf("Unsigned: [%u]\n", num);
    printf("Scientific (e): [%e]\n", big);
    printf("Scientific (E): [%E]\n", big);

    return 0;
}
