#include <stdio.h>

void modify(int *x) {
    *x = *x + 10;
    printf("Inside modify: x = %d\n", *x);
}

int main() {
    int a = 5;
    modify(&a);
    printf("Inside main: a = %d\n", a);
    return 0;
}
