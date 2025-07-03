#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int n = 7;
    if (isEven(n))
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
    return 0;
}
