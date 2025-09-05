#include <stdio.h>

int main() {
    int num = 42;

    printf("Default: [%d]\n", num);
    printf("Right aligned (width 5): [%5d]\n", num);
    printf("Left aligned (width 5): [%-5d]\n", num);
    printf("Zero padded (width 5): [%05d]\n", num);
    printf("Show sign: [%+5d]\n", num);
    printf("Space before positive: [% 5d]\n", num);

    return 0;
}
