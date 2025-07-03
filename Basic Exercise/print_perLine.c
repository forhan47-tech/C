#include <stdio.h>

int main() {
    int entriesPerLine = 5;

    for (int i = 1; i <= 20; i++) {
        printf("%d ", i);
        if (i % entriesPerLine == 0) {
            printf("\n");
        }
    }

    return 0;
}
