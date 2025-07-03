#include <stdio.h>

int main() {
    printf("Numbers between 1 and 100 where remainder is 2 or 3 when divided by 7:\n");

    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 2 || i % 7 == 3)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
